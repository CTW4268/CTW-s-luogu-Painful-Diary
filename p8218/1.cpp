#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lin[n+1];
    int s[n+1];
    cin>>lin[1];
    s[1]=lin[1];
    for(int i=2;i<=n;i++)
    {
        cin>>lin[i];
        s[i]=s[i-1]+lin[i];
    }
    int m;
    cin>>m;
    
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;

    }
    
}