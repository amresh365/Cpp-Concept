#include<iostream>
using namespace std;

class student 
{ 
	private :
		int roll ;
		char a[10];
		float marks;
	
		
		public :
		void getdata()
		{
			cout<<"enter a number";
			cin>>roll>>a>>marks;
		}
	   void outdata()
	   {
	   	cout<<roll<<endl<<a<<endl<<marks;
	   }
};

int main()
{
	int roll ;
		char a[10];
		float marks;
student s1;

s1.outdata();
s1.getdata();
	return 0;
	
}
