#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    char *p = NULL, *q = NULL;
    int times;
    int n = 0;
    unsigned long len;
    scanf("%d",&times);
    getchar();
    
    while(n < times){
        gets(a);
        len = strlen(a);
        p = a;
        q = &a[len-1];
        for(;q>=a;p++,q--){
            if(*p != *q)break;
        }
        if(q<a)printf("Yes\n");
        else printf("No\n");
        p = a;
        q = &a[len-1];
        n++;
    }
    return 0;
}
