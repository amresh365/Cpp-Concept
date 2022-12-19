#include<iostream>
using namespace std;
class a
{
	public:
		void afun()
		{
		
		cout<<"afun";
	}
};
class b:public a
{
	public:
		void bfun()
		{
		
		cout<<"bfun";
	}
};
class c:public b
{
	public:
		void cfun()
		{
		cout<<"cfun";
		}
};



main()
{
	c x;
	x.bfun();
	
}
