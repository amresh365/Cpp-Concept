#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<int>v1;
	
	for(int i=1;i<100;i++)
	{
		v1.push_back(i);
		cout<<i<<endl;
	}
	v1.push_back(10);
	v1.push_back(35);
		v1[1]=100;//update for;
//	v1.pop_back();//for delete last value;
		
	cout<<v1[0]<<endl;
	cout<<v1[1]<<endl;
	cout<<v1.at(1)<<endl;//at funtion for output;
	
cout<<"size"<<v1.size();
	return 0;

}
