#include <iostream>

using namespace std;

int main()
{
  int i,key;
  int arr[4]={2 ,4 ,5 ,6};
  cout<<"enter element to be inserted";
  cin>>key;
  arr[4]=key;
  for(i=0;i<5;i++)
  cout<<arr[i]<<" ";
  return 0;
}
