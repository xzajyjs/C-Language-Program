#include<stdio.h>
  
int main()
{
    int L, M, i, j, n;
    int a[1000001], b[1000001];
    scanf("%d %d",&L, &M);   //输入L和M
    n = M*2;      //循环输入b数组0~n的数据
    for(i=0; i<n; i+=2)
    {
        scanf("%d %d", &b[i], &b[i+1]);
    }
    for(i=0; i<=L; i++)     //循环给a数组L个元素赋值
    {
        a[i] = i;
    }
    int r, s;
    for(i=0; i<n; i+=2)  //遍历访问数组b的各个区间
    {
        r = b[i];   //区间起始点
        s = b[i+1]; //区间终点
        for(j=r; j<=s; j++) //把数组b各个区间内元素在数组a中映射为0
        {
            a[j] = -1;
        }
    }
    int k=0;    //k用来统计不是0的个数，k赋值为1（数组a中原本包含一个0，此时加上）
    for(i=0; i<=L; i++)
    {
        if(a[i] != -1)
        {
            k++;    //用来统计非0的个数，即不在数组b区间内的数的个数
        }
    }
    printf("%d\n", k);
  
    return 0;
}
