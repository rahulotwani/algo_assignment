//a^n using divide and conquer
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;

int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main() {
	// your code goes here
	cc("Enter a and n to calculate a^n")
	int a,n;
	cin>>a>>n;
	cc(power(a,n))
	return 0;
}
