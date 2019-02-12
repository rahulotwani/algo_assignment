//Check for repeated elements in an array
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
    int a[size];
    cc("Enter elements of the array A")
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
   
	while(1)
	{
		bool f=false;
			for(int i=0;i<size;i++)
			{
					for(int j=i+1;j<size;j++)
					{
						if(a[j]==a[i])
						{
							cc("element is repeated")
							f=true;
							break;
						}
						if(f)
							break;
					}							
			}
			if(!f)
				cc("no element is repeated")
			break;
	}
	return 0;
}
