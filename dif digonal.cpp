#include <iostream>
using namespace std;
int main()
{  
    int a[4];
    int mini=0,max=0;
    for(int i=0;i<=4;i++)
    {
        cin>>a[i];
        
    }
   for(int i=0;i<4;i++)
    {
      mini=mini+a[i];  
    }
    for(int i=1;i<=4;i++)
    {
       max=max+a[i];
    }
    cout<<mini<<" "<<max;
    
}


