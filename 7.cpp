//Merge sort
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int left[n1], right[n2]; 

    for (i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        right[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (left[i] <= right[j]) 
        { 
            arr[k] = left[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2;         
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cc(A[i]) 
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
    mergeSort(arr, 0, size - 1); 
    cc("Sorted array is")
    printArray(arr, size); 
    return 0; 
} 
