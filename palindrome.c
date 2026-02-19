#include<stdio.h>
int main()
{
    int n,s=0,d,i;
    printf("enter a number");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==i)
    printf("palindrome");
    else
    printf("not palindrome");
}
