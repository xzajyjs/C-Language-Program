#include<stdio.h>
int main()
{
   int a,b,c,d;       //a/b=c------d
   while(scanf("%d %d",&a,&b)!=EOF)
   {
       
       c = a% b;
       d = a / b;
        printf("%d %d\n",d,c);   
   }
    getchar();
    getchar();
    return 0;

}