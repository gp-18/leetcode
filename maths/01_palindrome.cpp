#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int temp = n ;
    int reverse = 0 ;

    while( temp != 0 )
    {
        int lastno = temp % 10 ;
        
        reverse = reverse * 10 + lastno ;

        temp /= 10 ;
    } 

    (reverse == n) ? cout<<"true" : cout <<"false" ;
}