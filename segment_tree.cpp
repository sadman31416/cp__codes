// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define m 10001
int tree[m*4];
int a[m];
void build(int node,int b,int e)
{
    if(b==e)
    {
    tree[node]=a[b];
    return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        return 0;
    }
    if(b>=i && e<=j) 
    return tree[node];
    
    int mid=(b+e)/2;
    int left=2*node;
    int right =2*node+1;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e || i<b) return;
    if(b>=i && e<=i)
    {
    	tree[node]=newvalue;
    	return;
    }
    
    int mid=(b+e)/2;
    int left=2*node;
    int right =2*node+1;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
    return;
}
int main() {
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    }
    build(1,1,n);
    cout<<query(1,1,n,2,6)<<endl;

    return 0;
}
