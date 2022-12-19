#include<iostream>
using namespace std;
main()

class acount
{
	private:
		int a;
		static float roi;
		public:
			void fun1(int a)
			{
				cout<<"not static";
				
			}
			 void fun2(float)
			{
				cout<<"static";
			}
			
};
float acount ::roi=2.4f;
main()
{
	acount c1;
	c1.fun1(4);
	
	
}
