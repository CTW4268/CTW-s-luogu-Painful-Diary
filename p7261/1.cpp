#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    vector<int> list(n+1);
    
    for(int i=1;i<=n;i++)
    {
        cin>>list[i];
    }
    int ci;
    cin>>ci;
    int l,r;
    int rl=1,rr=1;
    vector<int> p(c+1,0);
    p[list[rr]]++;
    while(ci>0)
    {
        cin>>l>>r;
        while (rl < l) 
        {
            p[list[rl]]--;
            rl++;
        }
        while (rl > l) 
        {
            rl--;
            p[list[rl]]++;
        }
        // 调整右边界
        while (rr < r) 
        {
            rr++;
            p[list[rr]]++;
        }
        while (rr > r) 
        {
            p[list[rr]]--;
            rr--;
        }
        int max=0,maxi=0;
        for(int i=1;i<=c;i++)
        {
            if(p[i]>max)
            {
                max=p[i];
                maxi=i;
            }

        }
        if(max*2>(r-l+1))
        {
            cout<<"yes"<<" "<<maxi<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        ci--;
    }
    return 0;
}
