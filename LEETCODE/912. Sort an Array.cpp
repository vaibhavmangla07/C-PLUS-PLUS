// 912. Sort an Array

class Solution {
public:
    void Merge(vector<int>& arr, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        vector<int> left(n1), right(n2);

        for (int i = 0; i < n1; i++)
            left[i] = arr[l + i];
            
        for (int i = 0; i < n2; i++)
            right[i] = arr[mid + 1 + i];

        int i = 0, j = 0, k = l;

        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    void MergeSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;

            MergeSort(arr, l, mid);
            MergeSort(arr, mid + 1, r);

            Merge(arr, l, mid, r);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums, 0, nums.size() - 1);
        return nums; 
    }
};