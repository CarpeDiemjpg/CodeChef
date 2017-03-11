#include <stdio.h>
int main() 
{
    int a,b,d=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    d=a-b;
    else
    d=b-a;
    if(d%10<9)
        printf("%d",d+1);
    else
        printf("%d",d-1);
	return 0;
}
