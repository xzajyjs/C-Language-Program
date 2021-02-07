//
//  main.c
//  1108
//
//  Created by xzajyjs on 2021/1/1.
//
/*
#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    while(strcmp(a,"0")!=0){
        
    }
    return 0;
}
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void convert(char *input, char *output)
{
    int len1 = strlen(input); //输入二进制数位数
    int pos = len1 / 4 + 1; //输出十六进制数的位数
    if (len1 % 4 == 0)
    {
        pos = pos - 1;
    }
    int j = 0;
    while (len1>0)
    {
        char sum = 0;
        for (int i=0; i<4 && len1>0; i++, len1--) //从最后起每4位算一次值
        {
            sum = sum + (input[len1-1]-'0')*pow(2, i);
        }
        
        // 转换成16进制数表示
        sum = sum + '0';
        if ('9'<sum && sum<'9'+7)
        {
            sum = sum + 7;
        }
        else if (sum > '9' + 6)
        {
            printf("您输入的不是正确的2进制数!\n");
            exit(0);
        }

        //十六进制数放到output数组相应位置
        output[--pos] = sum;
    }
}


int main()
{
    int groupNum = 0;
    char total[1024] = {0};
    //scanf("%d", &groupNum);
    //for (int i=1; i<=groupNum; i++)
    //{
    
        char input[1024] = {0};
        char output[256] = {0};
        fflush(stdin); //记得清楚输入缓冲区，否则每次回车会影响
    while(strcmp(gets(input),"0")!=0){
        //gets(input);
        convert(input, output);
        char format[32] = {0};
        //sprintf(format, "%d: ", i);
        strcat(total, format);
        strcat(total, output);
    //}

        printf("%s\n", total);
        for(int i = 0;i < strlen(total);i++){
            total[i] = 0;
        }
        
    }
        
}
