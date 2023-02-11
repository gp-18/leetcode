#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>arr , int m , int n)
{
    for(int i = 0 ; i < m ; ++i )
    {
        for(int j = i+1 ; j < n ; ++j )
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }
    
    for(int i = 0 ; i < m ; ++i)
    {
        int low = 0 , high = m - 1 ;
        
        while(low < high)
        {
            swap(arr[low][i] , arr[high][i]);
            low++;
            high--;
        }
    }
    
    for(int i = 0 ; i < m ; ++i)
    {
        for(int j = 0 ; j <n ; ++j)
        {
            cout << arr[i][j] <<" " ;
        }
        
        cout << endl ;
    }
}

int main()
{
    int m , n ;
    cin >> m >> n ;
    
    vector<vector<int>> arr ;
    
    int a ;
    for( int i = 0 ; i < m ; ++i )
    {
        vector<int>v ;
        for( int j = 0 ; j < n ; ++j )
        {
            cin >> a ;
            v.push_back(a);
        }
        
        arr.push_back(v) ;
    }
    

    print(arr , m , n ) ;
}