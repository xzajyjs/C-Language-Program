//除了尾部的 * 号之外，将字符串中其他 * 号全部删除。例如，若字符串中的内容为 ****A*BC*DEF*G****** ，
//删除后，字符串中的内容应当是 ABCDEFG****** 。
#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[50];
    int k;
    int i;
    gets(a);
    k = strlen(a);
    for(i = 0;i < k;i++){
        if(a[i] == '*'){
            for(int j =0;j < k-2;j++){
                a[j] = a[j+1];
            }
        }
        
    }
    puts(a);
    system("pause");
    return 0;

}
