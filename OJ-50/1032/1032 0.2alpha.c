//第一行输入运行的次数m
// 第二行输入每次多少组数k 和 给定的数n
// 若每次这么多组中有比给定的数大的数，求他们的平均值；不存在，输出-1

#include<stdio.h>
#include<stdlib.h>
int main(){
    int times = 0,m;
    scanf("%d",&m);
    while(times<m){
        int k = 0,n = 0,s = 0;
        scanf("%d%d",&k,&n);
        int nums[k];
        int res[k];
        int j;
        double sum = 0.0;
        for(j = 0;j < k;j++)
            scanf("%d",&nums[j]);
        
        for(j = 0;j < k;j++){
            if(nums[j] > n){
                res[s] = nums[j];
                s++;
            }
        }

        if(s==0)printf("-1\n");
        else
        {
           for(j = 0;j < s;j++)sum+=res[j];
           printf("%.2lf\n",sum/s);
        }
        times++;
    }
    system("pause");
    return 0;
}