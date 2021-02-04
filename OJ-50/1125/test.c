#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long count(int n);
    int n;
    unsigned long m;
    while(scanf("%d",&n)!=EOF){
        //scanf("%d",&n);
        m=count(n);
        printf("%lu\n",m);
      
        }
        system("pause");
        return 0;
}
    
unsigned long count (int n)
    {
    unsigned long f;
    if(n==1)
    f=1;
    else if(n==2)
    f=2;
    else
    f=count(n-1)+count(n-2);
    return(f);
}