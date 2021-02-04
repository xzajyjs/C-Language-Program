#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s1[500],s2[500];
    int i,a;
    while(scanf("%d",&a)!=EOF)
    {
        gets(s1);
        for(i=0;i < 500;i++)            //s1[i]!='\0'
        if(s1[i]>='A'&&s1[i]<='Z') 
        s1[i]+=32;
        for(i = 0;i < 500;i++){
        s2[i] = s1[i];
        }
        puts(s2);
    }
    
    
    system("pause");
    return 0;
}
