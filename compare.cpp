#include<iostream>
using namespace std;

int great(int a[],int n)
{


	int *p;
	p=&a[1];
	int c;

for(int i=0;i<n;i++)
{  
   p=p+1;
	if(a[i]>*p)
	{
	return a[i];
	}	

}
}
int main()
{
int n;
int res;
cin>>n;
 int a[n];
res=great(a,n);
	
	cout<<res;
	
}
