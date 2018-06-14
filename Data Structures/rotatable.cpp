#include<string>
#include<iostream>

using namespace std;

int main()
{

string s1;
string s2;
cout<<"Enter the first string:";
getline(cin,s1);
cout<<"Enter the first string:";
getline(cin,s2);

if(s1.length()==s2.length())
{
    for(int i=0;i<s1.length();i++)
    {
        char a=s1[0];
        int j=0;
        for(j=0;j<s1.length()-1;j++)
        s1[j]=s1[j+1];

        s1[j]=a;
        cout<<s1<<endl;
          if(s1==s2)
          {
              cout<<"String are rotatable.";
                return 0;
              }
    }

}
      cout<<"String are not rotatable";
return 0;
}
