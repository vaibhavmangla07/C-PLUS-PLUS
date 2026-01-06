// 1352. Product of the Last K Numbers

class ProductOfNumbers {
    vector<int> arr;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        for(int i = 0; i < arr.size(); i++) {
            arr[i] *= num;
        }
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        return arr[arr.size()-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */