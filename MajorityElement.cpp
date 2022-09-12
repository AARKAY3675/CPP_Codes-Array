/*  Program to find element which occurs more times than half of the size of array or Majority Element  */
#include<iostream>
using namespace std;
int majelement(int arr[], int n )
{
    int i , j;
    int maxcount = 0;
    int  index = -1;
    for (i=0;i<n;i++)
    {
        int count = 0;
            for (j =0 ;j<n ; j++)
            {
                 if (arr[i]== arr[j])
                 {
                    count ++;
                 }
            }
            if(count > maxcount )
            {
                maxcount++;
              index = i;
            }  

    }
    if ( maxcount > n/2){
        cout << arr[index];
    }
}
int main ()
{
    int arr[]= {2 , 4 , 4 , 4, 5, 6, 4};
    int n = sizeof(arr)/ sizeof (arr[0]);
    majelement(arr , n );
    return 0;
}
