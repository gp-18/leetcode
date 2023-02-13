#include<bits/stdc++.h>
using namespace std;
int main()
{
int low , high ;
cin >> low , high ;

     int r=0;
        if(low&1){
            r++;
            low++;
        }
        if(high&1){
            r++;
            high--;
        }
        r+=(high-low)/2;
        
        cout << r ;
return 0;
}