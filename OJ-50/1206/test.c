//统计一段英文文字中指定字符的个数。
//每组测试数据包括 2 行，第一行为一段英文文字 (长度小于 100, 包括大小写，英文分号和空格)，
//第二行为一个待统计的字符。
//每组测试数据输出一行，为文字中指定字符的个数。
#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    char choose;
    int k = 0;
    while(scanf("%d")!=EOF){
        gets(str);
        scanf("%ch",&choose);
        for(int i = 0;i < 100;i++){
            if(str[i]==choose)
                k++;
        }
        printf("%d\n",k);
        k=0;
    }
    
    system("pause");
    return 0;
}