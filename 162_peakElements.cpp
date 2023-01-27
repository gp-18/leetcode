#include<bits/stdc++.h>
using namespace std;

int peakElement(int n , int arr[])
{
    int low = 0 ;
    int high = n -1 ;
    
    while(low <= high)
    {
        int mid = low + (high - low) / 2 ;
        
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        {
            return mid ;
        }
        
        if(mid > 0 && arr[mid - 1] >= arr[mid])
        {
				high = mid -1;
        }
		else
		{
				low = mid + 1;
		}
		}
	return -1;
        
    
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n; ++i)
    {
        cin >> arr[i] ;
    }
    
    cout << peakElement(n ,arr) ;
}