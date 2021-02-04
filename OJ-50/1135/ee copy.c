#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct stu
{
    char num[50];
    int score;
};
int main()
{
    
    int n,i,j,max=0,kk,flag,shuzi[100],aaaaa='a',ll;
    struct stu a[105],t;
    while(scanf("%d",&n)!=EOF){
        ll = -1;
    n++;
    for(i=0;i<n;i++)
    {
        ll++;
        max=0;
        j=0;
        scanf("%c",&aaaaa);
        while(aaaaa!='\n')
        {

            if(aaaaa>='0'&&aaaaa<='9')//是数字
            {
                shuzi[j]=aaaaa;
                j++;
            }
            else //是字母
            {
                a[i].num[max]=aaaaa;
                max++;
            }
              scanf("%c",&aaaaa);
        }
        a[i].num[max]='\0';
        a[ll].score=0;
        for(kk=0;kk<j;kk++)//转化数字
        {
            a[ll].score=a[ll].score*10+shuzi[kk]-'0';
        }
    }
    for(i=1;i<n;i++)
    {
        flag=1;
        for(j=0;j<n-i;j++)//排序
        {
            if(a[j].score>a[j+1].score)
            {
                flag=0;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(flag) break;
    }
    for(i=1;i<n;i++)
    {
        if(a[i].score!=a[i+1].score||strcmp(a[i].num,a[i+1].num)!=0)
        {
            printf("%d %s\n",a[i].score,a[i].num);
        }
    }
    }
   
    
    system("pause");
    return 0;
}