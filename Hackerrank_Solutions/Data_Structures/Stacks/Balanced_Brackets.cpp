#include <bits/stdc++.h>

using namespace std;

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
bool isBalanced(char s[]) {
    // Complete this function
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

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        char s[1000];
        cin >> s;
        int result = isBalanced(s);
        cout << ((result==1)?"YES":"NO") << endl;
    }
    return 0;
}
