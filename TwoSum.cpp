/* Program to print number in the array whose sum is equal to the given number */
#include<iostream>
using namespace std;
int twosum(int arr[], int n , int x)
{
    int i , j; 
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]== x)
         {
           cout<<"Elements with sum equal to "<< x << " are "<<arr[i]<<" and "<<arr[j]<<" "<<endl;
        
         }
        }
    }
    return 0;
}
int main ()
{
    int arr[]= {3,5,4,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x= 10;
    twosum(arr , n , x);
    cout<<"Pair(s) Exist";
    return 0;
}