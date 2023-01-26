#include<bits/stdc++.h>
using namespace std;
    int bs(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                h=mid-1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
    int fs(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                l=mid+1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
int main()
{
int n ;
cin >> n; 

int arr[n];
for( int i = 0 ; i < n ; ++i)
{
    cin >> arr[i] ;
}

int target ;
cin >> target ;

int k=bs(arr,nums.size(),target);
int n=fs(arr,arr.size(),target);
return {k,n};
        
return 0;
}   