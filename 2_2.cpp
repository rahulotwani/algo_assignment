//Check if two arrays have an element in common
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
  
		bool f=false;
		int n;
			for(int i=0;i<size;i++)
			{
								
					for(int j=0;j<size;j++)
					{
						if(b[j]==a[i])
						{
							cc("both arrays contaion atleast one common element")
							f=true;
							break;
						}
										}
					if(f)
						break;
											
			}
			if(!f)
				cc("no element is common both the arrays")
			else

	
	return 0;
}
