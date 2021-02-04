//Name:多功能工具箱（自定义函数综合练习）
//Version:alpha 0.32
//Program-language: C_language
//Tool : Visual Studio Code
//Author : xzajyjs 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//自定义函数目录
void ComExit();                     //完全退出程序
void Con_Exit();                    //是否继续菜单
void realbreak();                   //退出至主菜单
void author();                      //显示作者
void showmenu();                    //目录显示
void showmenu_cacl();               //计算器
void showmenu_S_cacl();             //“常用面积计算”目录
void show_other_calculate();        //其他常用计算目录
void showmenu_case4();              //解方程目录显示
void calcCircle();                  //圆形面积计算
void calcRectangle();               //长方形面积计算
void clear();                       //清屏函数(集成author)
void calcSand();                    //三角形面积计算
void Show_Z_H();                    //质数/合数
void Max_common_divisor();          //最大公约数
void Factorial();                   //阶乘
void Min_common_multiple();         //最小公倍数
void O_O();                         //一元一次计算
void T_O();                         //二元一次方程
double calcVolum_circle(double);    //球体积计算
int Max(int,int),Min(int,int);      //计算最大值
int choice,num,i;
int flag;
int realbreak_flag;
int main()
{
    while(1){
    realbreak_flag = 0;
    flag = 0;
    clear();
    showmenu();
    printf("\n");
    scanf("%d",&choice);
    //clear();
    //主目录
    switch(choice){
        //计算器
        case 1:{
            clear();
            showmenu_cacl();
            scanf("%d",&choice);
            clear();
            switch(choice)
            {
                case 1:{            //加法
                    int n;
                    double s = 0.0;
                    double a[50];
                    printf("请输入加数个数：");
                    scanf("%d",&n);
                    clear();
                    printf("请输入加数，并用空格隔开：");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s += a[i];
                    }
                    printf("和为%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }
                case 2:             //减法
                {
                    int n;
                    double s;
                    double a[50];
                    printf("请输入被减数:");
                    scanf("%lf",&s);
                    printf("\n请输入减数个数：");
                    scanf("%d",&n);
                    printf("\n请输入各个减数，并用空格隔开：");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s -= a[i];
                    }
                    printf("\n结果为%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }

                case 3:{                //乘法
                    int n;
                    double s = 1;
                    double a[50];
                    printf("请输入乘数个数：");
                    scanf("%d",&n);
                    clear();
                    printf("请输入乘数数，并用空格隔开：");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s *= a[i];
                    }
                    printf("积为%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }
                case 4:{                //除法
                    clear();
                    double A;
                    int i,n;
                    double num[n];
                    printf("请输入被除数:");
                    scanf("%lf",&A);
                    printf("\n请输入除数个数:");
                    scanf("%d",&n);
                    printf("\n请输入各个除数,用空格隔开:");
                    for(i = 0;i < n;i++){
                        scanf("%lf",&num[i]);
                        if(num[i] == 0){
                            printf("\n除数中有0，结果出错\n");
                            Con_Exit();
                        }
                        else
                            A /= num[i];
                    }
                    printf("\n结果为：%.3lf\n",A);
                    realbreak_flag = 1;
                    break;
                }
                case 5:                       //幂运算
                {
                    double a;
                    int b;
                    clear();
                    printf("请输入底数：");
                    scanf("%lf",&a);
                    printf("\n请输入幂指数：");
                    scanf("%d",&b);
                    if(a == b) printf("\n0的0次幂不存在，输入错误\n");
                    else printf("\n%.2lf的%d次幂为：%.4lf\n",a,b,pow(a,b));
                    realbreak_flag = 1;
                    break;
                }
                case 6:                     //二次开根
                {
                    double as;
                    clear();
                    printf("请输入开根数：");
                    scanf("%lf",&as);
                    printf("根号%.2lf结果为%.4lf\n",as,sqrt(as));
                    realbreak_flag = 1;
                    break;
                }
            }
        }
        //面积、体积计算
        case 2:
            {   
                if(realbreak_flag == 1)break;                   //上面执行过后直接退出最外层switch至末
                clear();
                showmenu_S_cacl();
                scanf("%d",&choice);
                clear();
                switch(choice){
                    case 1:calcCircle();realbreak_flag = 1;break;
                    case 2:calcRectangle();realbreak_flag = 1;break;
                    case 3:calcSand();realbreak_flag = 1;break;
                    case 4:
                        clear();
                        double r;
                        double V;
                        printf("球体积计算\n请输入球半径：");
                        scanf("%lf",&r);
                        V = calcVolum_circle(r);
                        printf("\n半径%.2lf地球体体积为%.4lf\n",r,V);
                        realbreak_flag = 1;break;
                }
            }
        //其他常用计算
        case 3:{
            if(realbreak_flag == 1)break;
            clear();
            show_other_calculate();
            scanf("%d",&choice);
            switch (choice)
            {
                case 1:
                    //最大公约数
                    clear();
                    Max_common_divisor();
                    realbreak_flag = 1;
                    break;
                case 2:
                    //最小公倍数
                    clear();
                    Min_common_multiple();
                    realbreak_flag = 1;
                    break;
                case 3:
                    //质数/合数？
                    clear();
                    Show_Z_H();
                    realbreak_flag = 1;
                    break;
                case 4:
                    //阶乘
                    clear();
                    Factorial();
                    realbreak_flag = 1;
                    break;
            }
        }
        //待开发（主目录）
        case 4:{                    //解方程
            if(realbreak_flag == 1)break;
            clear();
            showmenu_case4();
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                clear();
                O_O();
                realbreak_flag = 1;
                break;
            case 2:
                realbreak_flag = 1;
                break;
            case 3:
                realbreak_flag = 1;
            }
        }
    }
    //主目录完
    Con_Exit();
    }
}


void author(){
    printf("* * * * * * * * * * * * *\n");
    printf("* 多功能工具箱alpha 0.32*\n");
    printf("* * * * * * * * * * * * *\n\n");
}
void clear(){
    system("cls");
    author();
}
void ComExit(){
    system("pause");
    exit(0);
}
void showmenu(){
    printf("1.计算器\t2.常用面积/体积计算\n\n3.其他常用计算\t4.解方程\n");
}
void showmenu_cacl(){
    printf("1.加法 +\t2.减法 -\n\n3.乘法 *\t4.除法 /\n\n5.幂运算  \t6.二次开根\n\n");
}
void showmenu_S_cacl(){
    printf("常用面积计算\n");
    printf("1.圆形面积\n2.长方形面积\n3.三角形面积\n4.球体体积\n");
}  
void showmenu_case4(){
    printf("解方程\n\n");
    printf("1.一元一次方程\n\n2.二元一次方程\n\n3.一元二次方程\n\n");
}
void show_other_calculate(){
    printf("1.最大公约数\n2.最小公倍数\n3.质数还是合数\n4.阶乘计算\n");
}
int Min(int a,int b){
    int T;
    T = a < b ? a:b;
    return T;
}
int Max(int a,int b){
    int T;
    T = a > b ? a : b;
    return T;
}
void calcCircle(){
    clear();
    double radius,s;
    printf("计算圆面积\n请输入圆半径：");
    scanf("%lf",&radius);
    s = 3.14 * pow(radius,2);
    printf("\n半径为%.2lf的圆面积为%.2lf\n\n",radius,s);
}
void calcRectangle(){
    clear();
    double wideth,height,s;
    printf("计算长方形面积\n请输入长方形的长和宽，用空格隔开：");
    scanf("%lf%lf",&wideth,&height);
    s = wideth * height;
    printf("\n长为%.2lf宽为%.2lf的长方形面积为：%.2lf\n\n",wideth,height,s);
}
void calcSand(){
    clear();
    double a,b,c,S,p;
    printf("请输入三角形地三条边：");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        p = 1.0/2.0 *(a+b+c);
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("边长为%.2lf、%.2lf、%.2lf的三角形面积为%.2lf\n",a,b,c,S);
    }
    else printf("不能构成三角形\n");
}
void O_O(){
    clear();
    double A,b;
    printf("请将一元一次方程化为一般式（Ax+b=0）并输入A和b的值:");
    scanf("%lf %lf",&A,&b);
    printf("\n%.2lfx+%.2lf=0的解为：x=%.4lf\n",A,b,-b/A);
}
void T_O(){
    clear();
    double A1,B1,A2,B2;
    
}
double calcVolum_circle(double r){
    double s;
    s = 4.0 / 3.0 * 3.14 * pow(r,3);
    return s;
}
void Max_common_divisor(){
    int min,a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    min = Min(a,b);
    for(i = min;i >= 1;i--){
        if(a % i == 0 && b % i == 0)break;
    }
    printf("\n最大公约数为%d\n\n",i);
}
void Min_common_multiple(){
    int a,b,max;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    max = Max(a,b);
    for(i = max; ;i++){
        if(i % a == 0 && i % b == 0)break;
    }
    printf("\n最小公倍数为%d\n\n",i);
}
void Show_Z_H(){
    printf("请输入一个大于2的正整数：");
    scanf("%d",&num);
    if(num < 2)printf("输入数字不正确");
    else{
        for(i = 2;i < num / 2;i++){
        if(num % i == 0)break;
        }
        if(i < num/2)printf("合数\n\n");
        else printf("质数\n\n");
    }
}
void Factorial(){
    int Out = 1;
    printf("请输入某个数的阶乘：");
    scanf("%d",&num);
    if(num < 1)printf("输入错误");
    else{
        for(i = 1;i <= num;i++){
            Out *= i;
        }
        printf("%d! = %d\n\n",num,Out);
    }
}
void Con_Exit(){
    i = 0;
    while(flag != 1){
        if(i>0)
        {
            clear();
            printf("\n请重新输入\n1.继续\n2.退出\n\n");
        }
        else printf("\n程序已运行完毕\n1.继续\n2.退出\n\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:flag = 1;break;
            case 2:exit(0);
            default:printf("输入错误");
            Sleep(1500);
        }
        i++;
    }
}

