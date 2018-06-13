#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int size;
cout<<"Enter the size of array:";
cin>>size;
int ar[size];
for(int i=0;i<size;i++)
cin>>ar[i];

sort(ar,size);


for(int i=0;i<size;i++)
cout<<ar[i]<<" ";

int p1=ar[0]*ar[1];
int p2=ar[size-1]*ar[size-2];
cout<<endl<<"max product is:";
if(p1>p2)
cout<<p1<<endl;
else
cout<<p2<<endl;
return 0;
}
			
