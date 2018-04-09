class Solution {
public:
    bool isMatching(char c1,char c2)
{
    if(c1 == '(' && c2 == ')')
        return 1;
    if(c1 == '{' && c2 == '}')
        return 1;
    if(c1 == '[' && c2 == ']')
        return 1;
    return 0;
}
    bool isValid(string s) {
        stack<char> mystack;
    int i=0;
    while(s[i] != '\0'){
        if(s[i] == '[' || s[i] == '{' || s[i] == '(')
            mystack.push(s[i]);
        if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
            if(mystack.empty())
                return 0;
            char c = mystack.top();
            mystack.pop();
            if(isMatching(c,s[i]) == 0){
                return 0;
            }
        }
        i++;
    }
    if(mystack.empty())
        return 1;
    else 
        return 0;
    }
};