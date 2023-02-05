#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
cin >> n; 

double ans = 1.0;
    long long int power = n;
    if(power < 0) power=-1*power;
    while(power){
        if(power%2==1){
            ans=ans*x;
            power=power-1;
        }
        else{
            x=x*x;
            power=power/2;
        }
    }
    if(n<0) ans=(double)(1.0/ans);   
    cout << ans; 
return 0;
}