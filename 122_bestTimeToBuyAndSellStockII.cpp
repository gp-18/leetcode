#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n; 

    int arr[n] ;
    for( int i = 0 ; i < n; ++i )
    {
        cin >> arr[i] ;
    }

    int total = 0 ;

    for( int i = 0 ; i < n-1 ;++i)
    {
        if( arr[i+1] >= arr[i])
        {
            total += arr[i+1] - arr[i] ;
        }
    }

    cout << total ; 

    return 0 ;
}