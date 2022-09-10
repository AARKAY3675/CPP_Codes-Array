/* Program to find the equilibruim index of an array */
#include<iostream>
using namespace std;
int eqindex(int arr[], int n )
{
   int i , j;
   int leftsum , rightsum;
   for (i=0;i<n;i++)
   {
     leftsum=0;
     for(j=0;j<i;j++){
        leftsum += arr[j];
     }

     rightsum=0;
     for(j=i+1;j<n;j++){
        rightsum += arr[j];
     }
    if (leftsum == rightsum)
    {
     return i;
    }
   } 
   return -1;   
   };
int main()
{
    int arr[]= { -5 , 5 , 1 , 4 , -7 , 8 , 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Equilibrium index is "<<eqindex(arr ,n);
};