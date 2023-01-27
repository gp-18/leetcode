#include<bits/stdc++.h>
using namespace std;

int searchInSortedRotate( int n , int arr[] , int x )
{
    int low = 0 ;
    int high = n - 1 ;
    
    while(low <= high)
    {
        int mid = low + ( high - low) / 2 ;
        
        if(arr[mid] == target)
        {
            return mid ;
        }
        
        else if( arr[low] < arr[mid])
        {
            if( x >= arr[low]  &&  x < arr[mid])
            {
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }
        else
        {
            if(x > arr[mid] && x<= arr[high])
            {
                low = mid + 1 ;
            }
            else
            {
                high = mid -1 ;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for( int i = 0 ; i < n; ++i)
    {
        cin >> arr[i] ;
    }
    
    
    int target ;
    cin >> target ;
    
    cout<<searchInSortedRotate(n ,arr, target) ;
}