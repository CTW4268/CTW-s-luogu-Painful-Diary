#include <stdio.h>
#include <stdlib.h>
int a[1007]={0};
int fbn(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else{
        if(a[n]!=0)
            return a[n];
        else{
            int sum= fbn(n-1)+fbn(n-2);
            a[n]=sum;
            return sum;
        }

    }

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fbn(n));
    return 0;
}

