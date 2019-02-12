//fibonacci
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;


void power(int fibo[2][2], int n);

int fib(int n) 
{ 
  int fibo[2][2] = {{1,1},{1,0}}; 
  if (n==0) 
      return 0; 
  power(fibo, n-1); 
  
  return fibo[0][0]; 
} 
  
void multiply(int fibo[2][2], int mul[2][2]) 
{ 
  int x =  fibo[0][0]*mul[0][0] + fibo[0][1]*mul[1][0]; 
  int y =  fibo[0][0]*mul[0][1] + fibo[0][1]*mul[1][1]; 
  int z =  fibo[1][0]*mul[0][0] + fibo[1][1]*mul[1][0]; 
  int w =  fibo[1][0]*mul[0][1] + fibo[1][1]*mul[1][1]; 
  
  fibo[0][0] = x; 
  fibo[0][1] = y; 
  fibo[1][0] = z; 
  fibo[1][1] = w; 
} 
  
void power(int fibo[2][2], int n) 
{ 
  int i; 
  int mul[2][2] = {{1,1},{1,0}}; 
    for (i = 2; i <= n; i++) 
      multiply(fibo, mul); 
} 
  
int main() 
{ 
  int n;
  cc("Enter n to find fibonacci sequence upto n terms") 
  cin>>n;
  f(n+1){
  cc(fib(i))
 }
  return 0; 
} 