class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<vector<int>> freq(nums.size()+1);

        for(int i: nums){
            map1[i]++;
        }
        for(const auto& entry: map1){
            freq[entry.second].push_back(entry.first);
        }

        vector<int> result;
        for(int j=freq.size()-1;j>0;j--){
            for(int n: freq[j]){
                result.push_back(n);
                if (result.size()==k) return result;
            }
        }
        return result;
    }
};
