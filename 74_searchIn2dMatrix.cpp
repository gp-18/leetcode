#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>arr , int m , int n , int x )
{
    int top = 0 ;
    int right = n - 1 ;
    
    bool flag = false ;
    while( top < m &&  right >= 0 )
    {
        if(arr[top][right] == x )
        {
            cout << top << " " << right ;
            flag = true ;
            break ;
        }
        
        else if(arr[top][right] > x )
        {
            right-- ;
        }
        
        else
        {
            top++;
        }
    }
    
    if(flag == false)
    {
        cout << "element is not present" ;
    }

}

int main()
{
    int m , n , x ;
    cin >> m >> n >> x ;
    
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
    
    print(arr , m , n , x) ;
}