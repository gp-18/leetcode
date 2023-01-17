#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str ;

    unordered_map<char,int>um ;
        um['I'] = 1;
        um['V'] = 5;
        um['X'] = 10;
        um['L'] = 50;
        um['C'] = 100;
        um['D'] = 500;
        um['M'] = 1000;

    int ans = 0 ;

    for(int i = 0 ; i < str.length(); ++i)
    {
        if(um[str[i] < um[str[i+1]]])
        {
            ans -=um[str[i]];
        }

        else{
            ans += um[str[i]];
        }
    }

    cout << ans ;
}