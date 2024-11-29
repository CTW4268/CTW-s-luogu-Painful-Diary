#include<iostream>
using namespace std;
int fx[9]={-2,-2,-1,-1,0,1,1,2,2};
int fy[9]={1,-1,2,-2,0,2,-2,1,-1};
int mx,my;
int bx,by;
int sum=0;
int panduan(int x,int y)8
{
    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=8;j++)
        {
            if(mx+fx[i]==x&&my+fy[j]==y)
            return 1;
        }
    }
}
int scan(int x,int y)
{
    if(x==bx&&y==by)
    {
        sum++;
        return 1;
    }
    if(panduan(x,y))
    {
        return 0;
    }
    if(x<bx)
    {
    scan(x+1,y);
    }
    if(y<by)
    {
    scan(x,y+1);
    }
}
int main()
{
    
    cin>>bx>>by;
    cin>>mx>>my;
    scan(0,0);
    cout<<sum;
}

