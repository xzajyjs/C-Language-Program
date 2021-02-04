//求最小公倍数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p;									//行数
	int q,i;								//循环变量
	int big,other;
	int num[10][2];						    //定义10*2数组
	int out[10];							//输出数组
	scanf("%d",&p);
	
	for(q = 0;q < p;q++)
	{
		scanf("%d %d",&num[q][0],&num[q][1]);
	}
	for(q = 0;q < p;q++)
	{
		if(num[q][1] > num[q][0]){
			big = num[q][1];
			num[q][1] = num[q][0];
			num[q][0] = big;
		}
		for(i = num[q][0];i>=num[q][0];i++){
			if(i % num[q][0] ==0 && i % num[q][1] ==0){
				out[q] =  i;
				break;
		
			}
		}
		
		}
		for(q = 0;q < p;q++){
		printf("%d\n",out[q]);
		
		}
		system("pause");
		return 0;	
}

