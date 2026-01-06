// 3348. Smallest Divisible Digit Product II

class Solution {
public:
    string smallestNumber(string num, long long t) {
        auto check = [](int rest, int c2, int c3, int c5, int c7) -> bool {
            // 8 9 5 7
            int need = c2 / 3 + c3 / 2 + c5 + c7;
            c2 %= 3;
            c3 %= 2;
            // 6
            if (c2 && c3) {
                ++need;
                --c2;
                --c3;
            }
            // 4
            if (c2 == 2) {
                ++need;
                c2 -= 2;
            }
            // 3
            if (c3 == 1) {
                ++need;
                --c3;
            }
            // 2
            if (c2 == 1) {
                ++need;
                --c2;
            }
            assert(c2 + c3 == 0);
            return need <= rest;
        };
        
        vector<vector<int>> c(10, vector<int>(4));
        c[2][0] = 1;
        c[3][1] = 1;
        c[4][0] = 2;
        c[5][2] = 1;
        c[6][0] = c[6][1] = 1;
        c[7][3] = 1;
        c[8][0] = 3;
        c[9][1] = 2;

        for (int i = 0; i < num.size(); ++i) {
            if (num[i] == '0') {
                num[i] = '1';
                for (int j = i + 1; j < num.size(); ++j) {
                    num[j] = '1';
                }
                break;
            }
        }

        num = "00000000000000000000000000000000000000000000000000" + num;
        vector<int> p = {2, 3, 5, 7};
        vector<int> base(4);
        for (int i = 0; i < 4; ++i) {
            while (t % p[i] == 0) {
                ++base[i];
                t /= p[i];
            }
        }
        if (t != 1) {
            return "-1";
        }

        vector<int> cur(4);
        for (char o: num) {
            for (int i = 0; i < 4; ++i) {
                cur[i] += c[o - '0'][i];
            }
        }

        vector<int> lack(4);
        for (int i = num.size(); i >= 0; --i) {
            if (i != num.size()) {
                for (int j = 0; j < 4; ++j) {
                    cur[j] -= c[num[i] - '0'][j];
                }
            }
            for (int j = 0; j < 4; ++j) {
                lack[j] = base[j] - cur[j];
            }
            if (i == num.size()) {
                if (max({lack[0], lack[1], lack[2], lack[3]}) <= 0) {
                    break;
                }
                continue;
            }
            bool good = false;
            for (int v = num[i] - '0' + 1; v < 10; ++v) {
                int rest = num.size() - i - 1;
                if (check(rest, max(lack[0] - c[v][0], 0), max(lack[1] - c[v][1], 0), max(lack[2] - c[v][2], 0), max(lack[3] - c[v][3], 0))) {
                    num[i] = v + '0';
                    good = true;
                    for (int j = 0; j < 4; ++j) {
                        lack[j] -= c[v][j];
                    }
                    for (int pos = i + 1; pos < num.size(); ++pos) {
                        --rest;
                        for (int u = 1; u < 10; ++u) {
                            if (check(rest, max(lack[0] - c[u][0], 0), max(lack[1] - c[u][1], 0), max(lack[2] - c[u][2], 0), max(lack[3] - c[u][3], 0))) {
                                num[pos] = u + '0';
                                for (int j = 0; j < 4; ++j) {
                                    lack[j] -= c[u][j];
                                }
                                break;
                            }
                        }
                    }
                    break;
                }
            }
            if (good) {
                break;
            }
        }

        int ptr = 0;
        while (num[ptr] == '0') {
            ++ptr;
        }
        return num.substr(ptr, num.size());
    }
};