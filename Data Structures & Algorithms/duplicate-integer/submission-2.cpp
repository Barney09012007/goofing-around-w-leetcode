class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> check;
        for (int x: nums){  
            check[x]++;
        }
        for (auto i: check){
            if (i.second>1) return true;

        }
        return false;
    }
};