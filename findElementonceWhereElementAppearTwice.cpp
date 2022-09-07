/* Program to find element which appears once where every element appear twice using bruteforce */
#include<iostream>
using namespace std;
int one(int arr[], int n)
{
    for (int i =0 ; i<n ;i++)
    {
        int count = 0;
        for ( int j =0; j<n ;j++)
        {
            if(arr[i]== arr[j])
            count++;
        }
    if (count == 1)
    {
        return arr[i];
    }
    }
    return -1;
}

int main()
{ 
    int arr[] = { 6 , 2 ,4 , 5 , 2, 5, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"element occuring once is " << one(arr , n );
    return 0;
}