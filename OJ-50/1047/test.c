#include<stdio.h>
int main()
{
    int a1,d,n,S;
    scanf("%d %d %d",&a1,&d,&n);
    S = (a1*2 + (n-1)*d)*n/2;
    printf("%d",S);
    getchar();
    getchar();
    return 0;
}