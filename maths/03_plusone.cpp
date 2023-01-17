#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
cin >> n ;

int arr[n];
for(int i = 0 ; i < n ; ++i)
{
    cin >> arr[i];
}

int last = arr[n-1];
for(int i = n-1 ; i >= 0 ; ++i)
{
    if(arr[i] == 9)
    {
        arr[i] = 0 ;
    }

    else
    {
        arr[i] = arr[i] + 1 ;
    }
}

    arr.push_back(0);
      arr[0] = 1;
      cout << digit;

}