class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a,b;
        stack<int> stack1;
        for(const string& c : tokens){
            if (c=="+"){
                a=stack1.top(); stack1.pop(); 
                b=stack1.top(); stack1.pop();
                stack1.push(a+b);
            }
            else if (c=="-")  {
                a=stack1.top(); stack1.pop(); 
                b=stack1.top(); stack1.pop();
                stack1.push(b-a);
            }
            else if (c=="*"){
                a=stack1.top(); stack1.pop(); 
                b=stack1.top(); stack1.pop();
                stack1.push(a*b);
            }
            else if (c=="/"){
                a=stack1.top(); stack1.pop(); 
                b=stack1.top(); stack1.pop();
                stack1.push(b/a);
            }
            else stack1.push(stoi(c));

        }
        return stack1.top();
    }
};
