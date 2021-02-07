#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,t;
char a[100][20],b[20];
while(scanf("%d",&n)!=EOF)
{
t=0;
for(i=0;i<n;i++)
scanf("%s",&a[i]);
for(i=0;i<n;i++)
if(strcmp(a[i],"China")==0)
for(j=i;j<n;j++)
strcpy(a[j],a[j+1]);
strcpy(a[n-1],"China");
for(i=0;i<n-1;i++)
for(j=i+1;j<n-1;j++)
{
if(strcmp(a[i],a[j])>0)
{
strcpy(b,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],b);
}
}
for(i=0;i<n;i++)
printf("%s\n",a[i]);
}
return 0;
}
