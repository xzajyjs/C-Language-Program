#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 280002
char str[N]={0};

int main(){
    char *p;
    gets(str);
    while( strcmp(str, "ENDOFINPUT") != 0 )   //当没遇到消息集的结尾时
    {
        if ( (strcmp(str, "START") !=0)&&(strcmp(str, "END") != 0) ) //当消息不是开始消息不是结尾
         {
            for(p=str; *p !='\0'; p++)      //对输入的串进行解密
             {
                if( isupper(*p) )   //判断是否为大写字符
                     *p += *p-5 <'A' ? 26-5: -5;   //进行转换，考虑边界问题！
             }
             puts(str);   //输出字符
         }
         gets(str);   //接受下一行
     }
    return 0;
}