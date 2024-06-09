#include<iostream>
using namespace std;

class st
{
	public:
		void fun()
	        {
		cout<<"no argument"<<endl;
		}	
		void fun(int x)
		{
			cout<<"with int argument"<<endl;
		}
		void fun(double  x)
		{
			cout<<"float argument"<<endl;
		}
};

main()
{
	st a;
	a.fun();
	a.fun(3);
	a.fun(2.0);
	
}
