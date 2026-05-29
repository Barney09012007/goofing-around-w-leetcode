class Solution {
public:

    string encode(vector<string>& strs) {
       string result;
       for (auto word : strs)  
        result += to_string(word.length()) + "#" + word; 
       return result;
    }
    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while (i < s.length()){
            int j=s.find("#",i);
            int len=stoi(s.substr(i , j-i)); //gets the number before #
            string word= s.substr(j+1,len); //gets the word after #
            result.push_back(word);
            i=j+1+len;
        }
        return result;
    }
};
