#include<bits/stdc++.h>
using namespace std;

bool powerof2(int n)
{
    if(n == 0) return true;
    
    return ((n & (n - 1)) == 0);
}


int main()
{
    int n ;
    cin >> n ;
    
    cout<<powerof2(n);
    
    return 0 ;
}