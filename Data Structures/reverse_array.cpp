#include<iostream>
using namespace std;
int main()
{
	int n;			//size of array
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)  //input array elements
	cin>>ar[i];
	
	for(int i=n-1;i>=0;i--)
	cout<<ar[i];
	
}

