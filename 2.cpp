//Input x and check if it is present in both the arrays
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
    int a[size],b[size];
    cc("Enter elements of the array A")
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
     cc("Enter elements of the array B")
    for(int i=0;i<size;i++)
    {
        cin>>b[i];
    }  
  
    while(1)
	{
		bool f=false;
		int n;
		cc("Enter an element to check if it is common to both the arrays \n Enter -1 to exit ")
		cin>>n;
		if(n==-1)
			break;
		else
			for(int i=0;i<size;i++)
			{
				if(a[i]==n)
				{
					for(int j=0;j<size;j++)
					{
						if(b[j]==n)
						{
							cc("element is present in both the arrays")
							f=true;
							break;
						}
					}	
				}								
			}
			if(!f)
				cc("element is not present in both the arrays")
	}
	return 0;
}
