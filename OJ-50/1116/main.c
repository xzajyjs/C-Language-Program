//
//  main.c
//  OJ-Xcode
//
//  Created by xzajyjs on 2020/12/16.
//

//将一串字符串倒过来输出

#include<stdio.h>
#include<string.h>
#define N 2000
int main(){
    char a[N];
    char a_f[N];            //存放倒过来的字符串
    int i;
    int len;                //长度
    int times_input,times = 0;
    scanf("%d",&times_input);
    getchar();
    while(times < times_input){
        gets(a);
        len = strlen(a);
        for(i = 0;i < len;i++){
            a_f[len-i-1] = a[i];
        }
        puts(a_f);
        //getchar();
        for(i = 0;i < N;i++){
            a_f[i] = '\0';
        }
        times++;
    }
    return 0;
}
