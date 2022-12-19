#include<iostream>
using namespace std;

	class a
	{
	public:
		void fun()    
		{
		cout <<"inhelited"<<endl;	 
		    }
	};
	class b
	{
		 public:
		void pname()
		{
			cout<<"amresh";
		}
	};
	class c:public a,public b
	{  
	  public:
	
	};
		
	
	main()
	{ c x;
	 x.fun();
	 x.pname();
	}
	
