#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; 
    getline(cin , s);
    
    
    int low = 0 ;
    int high = s.length()-1;
    
    while(low < high)
    {
        s[low] = s[low]^s[high] ;
        s[high] = s[low]^s[high] ;
        s[low] = s[low]^s[high] ;
        low++ ;
        high-- ;
    }
    
    cout << s ;
}