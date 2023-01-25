#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
cin >> n ;

int arr[n];
for(int i = 0 ; i < n;  ++i)
{
    cin >> arr[i] ;
}

int count = 1 ;
int res = 0 ;

for( int i = 1 ; i < n; ++i)
{
    if(arr[res] == arr[i])
    {
        count++;
    }
    else{
        count-- ;
    }

    if(count == 0)
    {
        res = i ;
        count = 1 ; 
    }
}

count = 0 ;

for(int i = 0 ; i < n ; ++i)
{
    if(arr[res] == arr[i])
    {
        count++ ;
    }
}

if(count <= n/2)
{
    res = -1 ;
}

cout << arr[res] ;
return 0;
}