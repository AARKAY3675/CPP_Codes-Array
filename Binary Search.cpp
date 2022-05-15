#include<iostream>
using namespace std;

int binarysearch (int arr[],int n,int x)
{
    int l=0,r=n-1;
    while(l<r){
    int mid=(l+r/2);
     
     if(arr[mid]==x)
     return mid;
     else if (arr[mid]<x)
     l=mid+1;
     else
     r=mid-1;
}
}
int main()
{
    { int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;
    cout<<binarysearch(arr,n,x);
    return 0;
    }
}
