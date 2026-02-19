#include<stdio.h>
int main()
{
    int n,s=0,d;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    printf("reverse is %d",s);
}
