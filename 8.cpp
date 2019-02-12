//max subarray sum in O(n)
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;

  
int maxSubArraySum(int a[], int size) 
{ 
    int max = INT_MIN, m = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        m = m + a[i]; 
        if (max < m) 
            max = m; 
  
        if (m < 0) 
            m = 0; 
    } 
    return max; 
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
    cc(maxSubArraySum(arr, size))
    return 0; 
} 