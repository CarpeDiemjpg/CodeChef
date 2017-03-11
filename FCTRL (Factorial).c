#include<stdio.h>
    int main()
    {
    int t,n,i,s,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    s=0;
    scanf("%d",&n);
    while(n)
    {
    s=s+n/5;
    n=n/5;
    }
    printf("%d\n",s);
    }
    return 0;
}  
