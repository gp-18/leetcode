#include<bits/stdc++.h>
using namespace std;

void intersectionOf2SortedArray( int n , int arr1[] , int m , int arr2[] )
{
    int i = 0 ;
    int j = 0 ;
    
    while ( i < n  && j < m )
    {
        if( i > 0 && arr1[i-1] == arr1[i] )
        {
            i++ ;
            continue ;
        }
        
        if( arr1[i] < arr2[j] )
        {
            i++ ;
        }
        
        else if ( arr1[i] == arr2[j] )
        {
            cout << arr1[i] <<" ";
            i++ ;
            j++ ; 
        }
        
        else
        {
            j++ ;
        }
    }
}

int main()
{
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
	
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	intersectionOf2SortedArray(n , a , m , b);
}