//
//  main.c
//  1620
//
//  Created by xzajyjs on 2020/12/27.
//
/*
 相反数：第一行输入数字的个数，然后第二行输入互不相同的数字，输出有几个互为相反数
 */


#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int i,j;
    int nums[500];
    int flag = 0;
    while(scanf("%d",&n)!=EOF){
        for(i = 0;i < n;i++)
            scanf("%d",&nums[i]);
        for(i = 0;i < n;i++){
            for(j = i+1;j < n;j++)
                if(nums[i] + nums[j] == 0)flag++;
        }
        printf("%d\n",flag);
        flag = 0;
    }
    
    
    return 0;
}
