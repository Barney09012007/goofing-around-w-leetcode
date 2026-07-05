class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n, 0);

    int zeroCount = 0;
    int zeroIndex = -1;
    long long pdt = 1; 

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            zeroCount++;
            zeroIndex = i;
        } else {
            pdt *= nums[i];
        }
    }

    if (zeroCount > 1) {
        
        return output; 
    }

    if (zeroCount == 1) {
        
        output[zeroIndex] = (int)pdt;
        return output; 
    }
    for (int i = 0; i < n; i++) {
        output[i] = (int)(pdt / nums[i]);
    }

    return output;
}
};
