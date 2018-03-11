#include<iostream>
using namespace std;

int main()
{
	int n;	//size of array
	cin>>n;
	
	int arr[n];				//input array
	int brr[n];				//left rotated array
	
	int lr;					//left shift digit
	cin>>lr;
	
	for(int i=0;i<n;i++)	//array elements
	   cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		int temp=i;
		temp=temp-lr;
        if(temp<0)
            temp=temp+n;
        
        brr[temp]=arr[i];
        
	}
	for(int i=0;i<n;i++)
	cout<<brr[i]<<" ";
}
