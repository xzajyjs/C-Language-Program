#include<stdio.h>
void fun(char *a)
{
int i=1,j=1,k;
char str[50];
str[0]=a[0];
while(a[i]!='\0')
{
if(a[i]!='*')
{
str[j]=a[i];
j++;
}
i++;
}
for(k=0;k<j;k++)
{
printf("%c",str[k]);
}
printf("\n");
}
void main()
{
char c[50];
printf("Please input string:");
scanf("%s",c);
fun(c);
}
