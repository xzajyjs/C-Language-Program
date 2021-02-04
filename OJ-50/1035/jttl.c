//鸡兔同笼
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		b=n/2-m;
		a=2*m-n/2;
		if(b<0||a<0||n%2==1)
		{
			a=-1;
			b=-1;
		}
		
		printf("%d %d\n",a,b);
	}
	return 0;
}