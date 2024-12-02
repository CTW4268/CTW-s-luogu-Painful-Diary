#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
long long int mem[1145]={0,1,1,2};
long long int f(int n)
{
    if(n==0)
    {
        return 0;
    }
    if (mem[n]!=0)
    {
        return mem[n];
    }
    
    if(n>=3)
    {
        mem[n]=f(n-1)+f(n-2);
        return mem[n];
        
    }
    return 0;
}
int main()
{
    long long int in,wdnmd;
    cin>>in;
    wdnmd=f(in);
    /*if(in==1)
    {
        cout<<1;
    }
    else
    {
        printf("%.2f",wdnmd);
        //cout<<wdnmd;
    }*/
    //printf("%.2f",wdnmd);
    cout<<wdnmd<<".00";
    /*for (int i = 0; i <= 48; i++) {
    cout << "f(" << i << ") = " << f(i) << endl;
    }*/
}