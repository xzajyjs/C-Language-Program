/*
题目描述
给定 3 条线的长度，求出用这 3 条线组成的三角形的面积.

提示：可以使用海伦公式，海伦公式为 S = sqrt(p*(p - a)*(p - b)*(p - c)) ,其中 p = (a + b + c) / 2

样例输入
Copy to Clipboard
3 4 5
1 1 10
样例输出
Copy to Clipboard
6.00
-1

*/



//法一
#include<stdio.h>
#include<math.h>
int main()
{
    int i;                          //定义循环变量
    double p,outputs;               //海伦公式P和结果
    int nums[2][3];                 //2*3数组存放两组三角形边长
    for(i = 0;i < 2;i++)
    {
        scanf("%d %d %d",&nums[i][0],&nums[i][1],&nums[i][2]);

    }
    for(i = 0;i < 2;i++)
    {
        if(nums[i][0] + nums[i][1] <= nums[i][2] || nums[i][0] + nums[i][2] <= nums[i][1] || nums[i][1] + nums[i][2] <= nums[i][0])
            printf("-1\n");
        else
        {
            p = (nums[i][0] + nums[i][1] + nums[i][2]) / 2;
            outputs = sqrt(p*(p-nums[i][0])*(p-nums[i][1])*(p-nums[i][2]));
            printf("%.2lf\n",outputs);
        }
           
    }
    getchar();
    getchar();
    return 0;
}

/*法二

#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,c,a1,b1,c1;
    double p,answer;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&a1,&b1,&c1);
    if(a + b <= c || a+ c <= b || b + c <= a)
        printf("-1\n");
    else
    {
        p = (a + b + c) / 2;
        answer = sqrt(p*(p - a)*(p - b)*(p - c));
        printf("%.2lf\n",answer);
    }
    if(a1 + b1 <= c1 || a1 + c1 <= b1 || b1 + c1 <= a1)
        printf("-1\n");
    else
    {
        p = (a1 + b1 + c1) / 2;
        answer = sqrt(p*(p - a1)*(p - b1)*(p - c1));
        printf("%.2lf\n",answer);
    }
    getchar();
    getchar();
    return 0;
}

*/

//法三（过OJ）
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    double p,answer;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a +b <=c || a + c<=b || b+ c <=a)
        printf("-1\n");
        else
        {
              p=(a+b+c)/2.0;
              answer = sqrt(p*(p-a)*(p-b)*(p-c));
              printf("%.2lf\n",answer);
        }
    }
    return 0;
}

*/