class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for (string s:strs){
            int count[26]={0}; //python count=[0]*26
            for(char c : s){
                count[c-97]++;//c-97
            }
            string key="";
            for (int i=0;i<26;i++){
                key+=to_string(count[i])+",";
            }

        res[key].push_back(s);
        }
    vector<vector<string>> result;
    for(auto& pair:res){ //auto& iterates for each key and value pair
        result.push_back(pair.second); //pair.first will be the key 
    }
    return result;
    } //this block of code in python is return list(res.values)
};
