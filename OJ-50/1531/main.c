#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
 int i,a,b,n;
 char *g[100];
 char s[100];
 scanf("%d",&n);
 getchar();
 for(i = 0;i < n;i++)
 {
  g[i] = (char*)malloc(sizeof(char)*101);
  gets(s);
  strcpy(g[i],s);
 }
 int max = -1,j;
 char t[100];
 for(i = 0;i < n - 1;i++)
 {
  for(j = i + 1;j < n;j++)
  {
   if(strcmp(g[i],g[j]) > 0)
   {
    strcpy(t,g[i]);
    strcpy(g[i],g[j]);
    strcpy(g[j],t);
   }
  }
 }
 for(i = 0;i < n;i++)
 {
  printf("%s\n",g[i]);
 }
 return 0;
}
