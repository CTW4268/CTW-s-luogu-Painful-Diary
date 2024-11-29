#include<iostream>
using namespace std;
int sum=1;
int x(int n)
{
    if(n>0)
    {
        sum*=n;
        x(n-1);
    }
    return 0;

}
int main()
{
    int n;
    cin>>n;
    x(n);
    cout<<sum;
}