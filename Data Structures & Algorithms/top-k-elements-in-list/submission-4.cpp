class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        for(int i: nums) map1[i]++;
        vector<pair<int,int>> res;
        for(auto& pair:map1) {
            res.push_back(make_pair(pair.second,pair.first)) ;           
        }
        sort(res.begin(), res.end(), greater<pair<int,int>>()); //descending order
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(res[i].second);
        }
        return result;
    }
};
