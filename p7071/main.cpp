#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
//    freopen("power.in","r",stdin);
//    freopen("power.out","w",stdout);
    int in=0;
    cin>>in;
    int key[26];
    int min=0;
    if(in%2==1||in==1||in==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {   
        for(int i=0;;i++,in/=2)
        {
           if(in=1)
            {
                min++;
                key[min]=i;
                break;
            }   
            int mo=0;
            mo=in%2;
           // in/=2;
                         
            if(mo==1)
            {
                min++;                
                key[min]=i-1;
            }            
        }
        for(int i=1;i<=min;i++)
        {
           cout<<key[i]<<endl;
        }
    }
}
