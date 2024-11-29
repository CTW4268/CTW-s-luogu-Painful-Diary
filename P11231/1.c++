#include<iostream>
using namespace std;
bool used[114514]={false};
bool die[114514]={false};
int main()
{
    bool genshin=true;
    int n1=0,n2=0;
    long long int k=0;
    long long int n;
    long long int sum=0;
    cin>>n;
    long long int nl[n+1];
    for(int i=1;i<=n;i++)
    {
        
        cin>>nl[i];
        if (nl[i]!=2&&nl[i]!=1)
        {
            genshin=false;
        }
        if(nl[i]==2)
        {
            n2++;
        }
        if(nl[i]==1)
        {
            n1++;
        }
    }
    if (genshin==true)
    {
        goto yuanshen;
    }
    for(int i=1;i<=n;i++)
    {
        long long int minj=0;
        long long int min=114514;
        k=0;
        for(int j=1;j<=n;j++)
        {
            if(j!=i&&nl[j]>nl[i]&&nl[j]<min)
            {
                min=nl[j];
                minj=j;
                k=1;
            }
        }
        if(k==1)
        {
            used[minj]=true;
            die[i]=true;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(die[i]==false)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
    yuanshen:
    if(n2>=n1)
    {
        cout<<n2;
    }
    if(n1>n2)
    {
        cout<<n1;
    }
    return 0;
}