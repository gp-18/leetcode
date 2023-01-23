#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin >> n ;

int arr[n];
for(int i = 0 ; i < n;  ++i)
{
    cin >> arr[i] ;
}

unordered_set<int>us;
for(auto i : arr)
{
    us.insert(arr[i]);
}

if(us.size() == n) return true ;
else{
    return false ;
}
return 0;
}