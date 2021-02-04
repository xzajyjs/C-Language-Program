//从键盘上输入年份和月份，求该月有多少天？
#include<stdio.h>
#include<stdlib.h>
int main(){
    int year,month,day;
    while(scanf("%d %d",&year,&month)!=EOF){
        switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 2:
            day = 28;
            break;
        default:
            day = 30;
        
        }
        if(year % 4 == 0 && year % 100 != 0 || year % 400 ==0)
        day = 29;
        printf("%d\n",day);
    }
    system("pause");
    return 0;
}