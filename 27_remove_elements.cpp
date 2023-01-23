#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int arr[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i] ;
    }


    int val ;
    cin >> val ;

    int index = 0 ;

    for(int i = 0 ; i < n ; ++i)
    {
        if(arr[i] != arr[val])
        {
            arr[index] = arr[i] ;
            index++;
        }
    }

    return index ;
}