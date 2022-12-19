#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
		void set_data(int x,int y);
	{a=x;b=y;}
		
	public:
		void sow_data()
		
	{
	cout<<"\na"<<a<<"b"<<b;
	}
	
	
};

void main()
{
complex c1;
c1.set_data(3,4);
c1.show_data()	;

}
