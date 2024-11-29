#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    freopen("P1090_1.in","r",stdin);
    freopen("P1090_1.out","w",stdout);

	int n;
	cin>>n;
	int wdnmd[n];
	long long int key=0;
	long long int c;
	for(int i=1;i<=n;i++)
	{
		cin>>wdnmd[i];
	}
	for(int j=1;j<=n;j++)
	{
		int k=j;
		for(int i=j+1;i<=n;i++)
		{
			if (wdnmd[i]<wdnmd[k])
			{
				k=i;
			}
			
		}
		if(k!=j)
		{
			swap(wdnmd[k],wdnmd[j]);
		}
	}

/*	for(int i=1;i<=n;i++)
	{
		cout<<wdnmd[i]<<" ";
	}
*/
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			key=wdnmd[1];
		}
		else if(i==2)
		{
			key=key+wdnmd[i];
			c=key;
		}
		else
		{
			key=c+wdnmd[i]+c;
			c=key-c;
			
		}
	}
	cout<<key<<endl;		
}
