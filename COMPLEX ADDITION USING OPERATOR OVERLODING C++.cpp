#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
			a=x,b=y;	
			}
	 void showdata()
	 {
	 	
	 cout<<"\na="<<a<<"\nb="<<b;	
	 }
	complex sum(complex c)
	{
		complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	
};
main()
{
	complex c1,c2,c3;
	c1.setdata(8,7);
	c2.setdata(2,5);
	c3=c1.sum(c2);
	c3.showdata();
} 
