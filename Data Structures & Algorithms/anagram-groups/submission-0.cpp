class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> map1;
        for (string s: strs){
            string sorted =s;
            sort(sorted.begin(),sorted.end()); //eat turns to aet
            map1[sorted].push_back(s);
        }
        vector<vector<string>> result;
        for (auto a : map1){
            result.push_back(a.second);  //a.first is key
        }
        return result;
    
    }
};
