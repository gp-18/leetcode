#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr,int k,int n){
	    while(k<n){
	        swap(arr[k++],arr[n--]);
	    }
	}

void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k%=n;
        
        reverse(nums,0,n-1);
	    reverse(nums,0,k-1);
	    reverse(nums,k,n-1);
    }
int main()
{
int n ;
cin >> n ;

int arr[n];
for( int i = 0 ; i < n ; ++i )
{
    cin >> arr[i] ;
}


}