#include<iostream>
using namespace std;

bool zhq(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if (a % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=4;i<=n;i+=2)
    {
        for (int j=2;j<=i/2;j++)
        {
            if (zhq(j)&&zhq(i-j))
            {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
            }
        }
        
    }
}