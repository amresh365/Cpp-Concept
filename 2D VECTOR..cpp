#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	vector<vector<int> >v1(n);
	for(int i=0;i<n;i++)
	{
		int value;
		cin>>value;
		v1[i].push_back(value);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+v1[i];
	}
	cout<<sum;
	return 0;
}
