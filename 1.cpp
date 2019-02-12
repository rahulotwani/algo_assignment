//Find an element in an array
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;
int main() {
	// your code goes here
	cc("Enter size of the array")
    int size;
    cin>>size;
    int arr[size];
    cc("Enter elements of the array")
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }  
	while(1)
	{
		bool f=false;
		int n;
		cc("Enter an element to search in an array \n Enter -1 to exit ")
		cin>>n;
		if(n==-1)
			break;
		else
			for(int i=0;i<size;i++)
			{
				if(arr[i]==n)
				{
					cc("element is present in the array")
					f=true;
					break;
				}
			}
			if(!f)
				cc("element is not present in the array")
	}
	return 0;
}
