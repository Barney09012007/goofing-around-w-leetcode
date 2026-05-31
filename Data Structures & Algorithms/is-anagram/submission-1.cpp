class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> word1,word2;
        
        for (auto &ch:s){
            word1[ch]++;
        }
        for (auto &ch:t){
            word2[ch]++;
        }
        if (word1==word2) return true;
        else return false;

        return 0;
    }

};