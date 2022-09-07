/*Program to print an element which appears twice in an array*/
#include<iostream>
using namespace std;
int twice_element(int arr[] , int n )
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (arr[i] == arr[j] )
            return arr[i];
        }
    }
}
int main()
{
    int arr[]= { 1 , 3 , 7 , 9 , 45 , 34 , 26, 19 , 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Element Occuring Twice is "<< twice_element(arr, n);
    return 0;
}