#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector<string> ar(n);
	
	for(int i=0;i<n;i++)	
	cin>>ar[i];
	
	int q;
	cin>>q;
	
	vector<string> br(q);
	
	for(int i=0;i<q;i++)
	cin>>br[i];



	for(int i=0;i<q;i++)
	{
			int count=0;
			for(int j=0;j<n;j++)
			{
				if(br[i].compare(ar[j])==0)
				count++;
			}
			cout<<count<<endl;
	}
	
	return 0;

}
