#include <iostream>
using namespace std;

int main()
{
   int x,y,i,j;
   cin>>x>>y;
   int arr[x][y];
   
   for(i=0;i<x;i++)
   {
       for(j=0;j<y;j++)
       {
           cin>>arr[i][j];
       }
   }
   cout<<"array entered is \n";
   for(i=0;i<x;i++)
   {
       for(j=0;j<y;j++)
       {
           cout<<arr[i][j]<<" ";
       }
    cout<<"\n";
   }
   int a;
   cout<<"Enter the element to be searched";
   cin>>a;
   for(i=0;i<x;i++)
   {
       for(j=0;j<y;j++)
       {
 if( arr[i][j]==a)
          cout<<"Element found";
          }
   }
    return 0;
}

