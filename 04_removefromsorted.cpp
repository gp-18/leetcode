#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int arr[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }

    int res = 1 ;
    
    for(int i = 1 ; i < n ; ++i)
    {
        if(arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res ;
}