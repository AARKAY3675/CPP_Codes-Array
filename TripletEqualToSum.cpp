/* Program to print the triplet with sum equal to given number */
#include<iostream>
using namespace std;
int threesum(int arr[], int sum , int n)
{
    int i ,j ,k; 
    for (i=0;i<n-2;i++)
    {
        for(j=i+1; j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"triplet with sum equal to "<<sum<<" is "<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int arr[]= { 8 , 23 , 12 , 40 , 34 , 20 , 0 , -20};
    int sum = 20 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    threesum(arr , sum , n );
    return 0;
}