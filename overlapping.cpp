#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
#define inf std::numeric_limits<double>::infinity()
#define DECI(n) fixed<<showpoint<<setprecision(n)
#define MOD 1000000007LL
#define FOR(i,start,end) for(int i=start;i<end;i++)
#define FORR(i,end,start) for(int i=end-1;i>=start;i--)
#define INPUT(arr,n) FOR(i,0,n)cin>>arr[i];
#define INPUT2d(arr,n,k) FOR(i,0,n)FOR(j,0,k)cin>>arr[i][j];
#define SIZE 100005
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define pb(n) push_back(n)
#define fi first
#define si second
ll mx = 0;
struct node{
    int a;
    int b;
    int max;
    int cnt;
    node *left;
    node *right;
};
node* insert(node*root,ll x,ll  y){
    if(root==NULL){
        root = new node;
        root->a = x;
        root->b = y;
        root->cnt = 1;
        root->max = y; 
        return root;
    }
    if(root->a==x&&root->b==y){
        root->cnt=root->cnt+1;
        return root;
    }
    if(root->a<x||(root->a==x&&root->b<y)){
        root->max = MAX(root->max,y);
        root->right = insert(root->right,x,y);
    }
    else {
        root->max = MAX(root->max,y);
        root->left = insert(root->left,x,y);}
    return root;
}
void inorder(node *root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->a<<" - - "<<root->b<<"    - - "<<root->max<<" - - "<<root->cnt<<"\n";
    inorder(root->right);
}
ll overlap(node* root,ll x,ll y){
    if(root==NULL)return 0;
    ll sum = 0;
    if(root->b>x&&root->a<y){
        sum+=root->cnt;
    }
    return sum+overlap(root->left,x,y)+overlap(root->right,x,y);
}
ll classcnt(node* root,node *head){
    if(root==NULL)return 0;
    ll c = overlap(head,root->a,root->b);
    mx = MAX(mx,c);
    classcnt(root->left,head);
    classcnt(root->right,head);
}
main(){
    //main goes here

}
