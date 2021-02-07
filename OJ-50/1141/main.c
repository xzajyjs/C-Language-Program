//
//  main.c
//  1141
//
//  Created by xzajyjs on 2020/12/16.
//

/*
 Julius Caesar 生活在充满危险和阴谋的年代。为了生存，他首次发明了密码，用于军队的消息传递。假设你是 Caesar 军团中的一名军官，需要把 Caesar 发送的消息破译出来、并提供给你的将军。消息加密的办法是：对消息原文中的每个字母，分别用该字母之后的第 5 个字母替换（例如：消息原文中的每个字母 A 都分别替换成字母 F，V 替换成 A，W 替换成 B ......），其他字符不变，并且消息原文的所有字母都是大写的。

 例：

 密码字母：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

 原文字母：V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
 */
#include <stdio.h>
#include<string.h>
#define N 14000
int main(){
    char secret[3][N];
    int i;
    //gets(secret[1]);
    //while(strcmp(secret[1], "ENDOFPOINT")!=0){
        
        gets(secret[2]);
        for(i = 0;i < strlen(secret[2]);i++){
            if(secret[2][i] >= 'A' && secret[2][i] <= 'V')
                secret[2][i] += 5;
            if(secret[2][i] > 'V' && secret[2][i] <= 'Z')
                secret[2][i] -= 21;
        }
            for(i = 0;i < strlen(secret[2]);i++)
                printf("%ch",secret[2][i]);
            
   // }
            
            
    return 0;
}
