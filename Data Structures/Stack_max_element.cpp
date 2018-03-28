#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    stack<int> s,m;
    m.push(-1);
    int n,q,v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        switch(q)
        {
            case 1:   cin>>v;
                      if(m.top()<=v)
                      m.push(v);  
                    s.push(v);
                    break;
            case 2: if(!s.empty())
                    {
                        if(!m.empty())
                           if(s.top()==m.top())
                             m.pop();
                        s.pop();
                    }
                    break;
            case 3: if(!m.empty())
                    cout<<m.top()<<endl;
                    break;
        }
    }
    return 0;
}
