#include<stdio.h>
int main()
{
    int n,fac,i;
    scanf("%d",&n);
    fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }  
    printf("%d",fac);   
    }