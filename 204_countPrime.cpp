#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    
    int count = 0;
        vector<bool> check (n+1, true);
        check[0]=check[1]=false;
        for(int i = 2 ; i <= n ; i++){
            if(check[i]){
                cout << i << " " ;
                 count++;
                for(int j = 2*i ; j<=n ; j = j+i){
                    check[j]=false;
                }
            }
        }
        cout <<  count;
return 0;
}