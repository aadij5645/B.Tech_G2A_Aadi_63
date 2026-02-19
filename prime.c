#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        s=s+1;
    }
    if(s>2)
    printf("not a prime number");
    else
    printf("prime number");
}
