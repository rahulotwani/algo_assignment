// max subarray sum in O(nlogn) using divide and conquer
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;

int max(int a, int b) { return (a > b)? a : b; } 
  
int max(int a, int b, int c) { return max(max(a, b), c); } 
int maxCrossingSum(int arr[], int l, int m, int h) 
{   
    int sum = 0; 
    int left_sum = INT_MIN; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > left_sum) 
          left_sum = sum; 
    } 
  
    sum = 0; 
    int right_sum = INT_MIN; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > right_sum) 
          right_sum = sum; 
    } 
  
    return left_sum + right_sum; 
} 
  
int maxSubArraySum(int arr[], int l, int h) 
{ 
    if (l == h) 
      return arr[l]; 
    int m = (l + h)/2; 
    return max(maxSubArraySum(arr, l, m), 
    maxSubArraySum(arr, m+1, h), 
    maxCrossingSum(arr, l, m, h)); 
} 

int main() 
{ 
    cc("Enter size of the array")
    int size;
    cin>>size;
    int arr[size];
    cc("Enter elements of the array")
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }  
    cc("Max subarray sum is :")
    cc(maxSubArraySum(arr,0,size-1))
    return 0; 
} 