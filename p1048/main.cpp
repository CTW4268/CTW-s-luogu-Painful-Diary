#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    int t,m;
    cin>>t>>m;
    if (t==0)
    {
        cout<<0;
        return 0;
    }
    int ti[m+1];
    int mi[m+1];
    for (int i=1;i<=m;i++)
    {
        cin>>ti[i]>>mi[i];        
    }
    //int f[m+1][t+1]={0};
    //vector<vector<int>>;
    vector<vector<int> > f(m + 1, vector<int>(t + 1, 0));
    for (int i=1;i<=m;i++)
    {
        for (int j =1;j<=t;j++)
        {
            if (j>=ti[i])
            {
                //f[i][j]=max(f[i-1][j],f[])
                f[i][j]=max(f[i-1][j],f[i-1][j-ti[i]]+mi[i]);
            }
            else
            {
                f[i][j]=f[i-1][j];
            }
        }
    }
    cout<<f[m][t];
}