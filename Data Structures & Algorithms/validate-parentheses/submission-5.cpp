class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      for (char c:s){
        if (c=='('||c=='['||c=='{') st.push(c);
        else if (c==')'||c==']'||c=='}'){
            if(st.empty()) return 0;
            char x=st.top();
            st.pop();
            if(!matches(x,c))return 0;
            
        }
      } if(st.empty())return 1; //this was the issue for [
        return 0;
    }
    int matches(char open, char close){
        if(open=='('&&close==')') return 1;
        if(open=='['&&close==']') return 1;
        if(open=='{'&&close=='}') return 1;
        return 0;
    }
};
