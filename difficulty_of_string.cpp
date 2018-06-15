#include<iostream>
#include<cstring>
using namespace std;
int main()
{

string s;
int words[2]={0};
cout<<"Enter the string:";
getline(cin,s);

int cons=0,vow=0,cont_const=0;

for(int i=0;i<s.length();i++)
s[i]=tolower(s[i]);
for(int i=0;i<s.length();i++)
{
	
	if(s[i]!=' ')
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			vow++;
			if(cont_const<4)
			cont_const=0;
		}
		else
		{
			cons++;
			cont_const++;	
		}
	}
	else
	{
		if(cons > vow || cont_const > 3)
		words[0]+=1;
		else
		words[1]+=1;
		cout<<"cont_const:"<<cont_const<<" || vow:"<<vow<<" || cons:"<<cons<<endl;
		vow=cons=cont_const=0;
	}
}

cout<<"difficulty of sentence is:"<<5*words[0]+3*words[1]<<endl;
return 0;
}
