#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int low = 1 ;
    int high = n ;

    int ans = 0 ;
    while(low <= high)
    {
        int mid = low + ( high - low ) / 2 ;

        int midsq = mid * mid ;

        if(midsq == n)
        {
            return true ;
        }

        else if( midsq > n)
        {
            high = mid - 1;
        }

        else
        {
            ans = mid ;
            low = mid + 1 ;
        }
    }

    return false ;
}