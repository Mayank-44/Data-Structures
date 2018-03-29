#include <bits/stdc++.h>
#include <stack>
using namespace std;

string isBalanced(string s) {
    // Complete this function
    int i=0;
    stack<char> stacks;
    while(i<s.length())
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            stacks.push(s[i]);
        if(!stacks.empty()){
            if(!stacks.empty() && ((s[i]==')' && stacks.top()=='(')||(s[i]==']' && stacks.top()=='[')||(s[i]=='}'                                                               && stacks.top()=='{')))
        
                stacks.pop();
        }
        else
            return "NO";
            
        i++;
        
    }
    
    if(stacks.empty())
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
