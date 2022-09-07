/* Write a program to find the element which appears one in the array where all the other elements appear twice using XOR */

#include<iostream>
using namespace std;

int elmntonce(int arr[] , int n ) 
{
    int i;
    int res = 0;
    for(i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    return res;
}
int main()
{
    int arr[]= {6 , 4 , 3 , 5 , 5 , 4 , 3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Element ocuring once is "<< elmntonce(arr, n);
}