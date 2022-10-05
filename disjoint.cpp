#include <iostream>
using namespace std;
int par[20];
void makeset(int n)
{
	par[n]=n;
}
int k=0;
int y=3;
int find(int x)
{

	if(par[x]==x)
	return x;
	return find(par[x]);
}
int find1(int x)
{

	if(par[x]==y)
	return k;
	else{
		k++;
	return find(par[x]);
		}
}

void Union(int a,int b)
{
    if(find(a)==find(b))
    cout<<"They are already Friend"<<endl;
    else
	par[find(a)]=find(b);
}

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    makeset(i);
    for(int i=0;i<2;i++)
    {	
    	cin>>a>>b;
    	Union(a,b);
    	
    	k=0;
    }
    cout<<find1(a);
}
