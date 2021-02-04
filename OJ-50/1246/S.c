//三个整数可能构成三角形的三条边，当然也可能不能构成三条边。如果能构成三角形，可以利用海伦公式计算三角形的面积。


#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    double p,answer;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a +b <=c || a + c<=b || b+ c <=a)
        printf("0\n");
        else
        {
              p=(a+b+c)/2.0;
              answer = sqrt(p*(p-a)*(p-b)*(p-c));
              printf("%.4lf\n",answer);
        }
    }
    return 0;
}