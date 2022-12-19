#include<iostream>
using namespace std;
class calculate
{ 
	private :
		int c;
		public :
		int sum(int a,int b)
		{
	c=a+b;
	return c;
		}
	   int dif(int a,int b)
	   {
	   	c=a-b;
	   	return c;
	   }
};

int main()
{
	int x,y;
	int result,resul;
	cout<<"inter two number";
	cin>>x>>y;
calculate s1;
result=s1.dif(x,y);
resul=s1.sum(x,y);
cout<<result<<"\n"<<resul;
	return 0;
	
}
