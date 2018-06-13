#include<iostream>
#include<array>
using namespace std;

int main()
{

char str1[]="geeks",str2[]="keegs";

int len=sizeof(str1)/sizeof(str1[0]);
int len1=sizeof(str2)/sizeof(str2[0]);

if(len != len1)
{
	cout<<"These are not Meta strings (size).";
	return 0;
}

int ne=0;
int ar[10];
int j=0;
for(int i=0;i<len;i++)
{
	if(str1[i] != str2[i])
	{
		ne++;
		ar[j++]=i;
	}

}

	if(ne!=2)
	{
		cout<<"These are not Meta strings (mismatch).";
		return 0;
	}
	


cout<<"These are meta strings."<<endl;
char temp=str1[ar[0]];
str1[ar[0]]=str1[ar[1]];
str1[ar[1]]=temp;

cout<<"string is:";
cout<<str1<<str2;

return 0;
}
