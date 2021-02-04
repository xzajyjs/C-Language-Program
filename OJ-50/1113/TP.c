/*P1113 选票统计
将所有选票上的编号依次输入计算机，以 -1表示统计结束，这时计算机要给所有的选票编号 及统计其得票数。*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int in[1000];
    int i,j = 0;
    int k;                          //用以判断数字种类
    int out[100][2];
    int h = 0;                      //行数辅助
    int times = 0;                  //计数
    for(i = 0;i < 1000;i++){
        scanf("%d",&in[i]);
        if(in[i]==-1)break;
        j++;
    }
    //printf("%d\n",j);             //共j个数字
    for(k = 1;k <= 1000;k++){
        for(i = 0;i < j;i++){
            if(in[i] == k){
                out[h][0] = k;
                times++;
            }   
        }
        out[h][1] = times;
        if(times > 0)h++;
        times = 0;
    }
    for(i = 0;i < h;i++)
        printf("%d %d\n",out[i][0],out[i][1]);
    system("pause");
    return 0;

}