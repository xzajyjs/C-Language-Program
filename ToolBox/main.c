//Name:�๦�ܹ����䣨�Զ��庯���ۺ���ϰ��
//Version:beta 0.32
//Program-language: C_language
//Tool : Visual Studio Code
//Author : xzajyjs 
//GitHub Repositories:https://github.com/xzajyjs/ToolBox
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//�Զ��庯��Ŀ¼
void ComExit();                     //��ȫ�˳�����
void Con_Exit();                    //�Ƿ�����˵�
void realbreak();                   //�˳������˵�
void author();                      //��ʾ����
void showmenu();                    //Ŀ¼��ʾ
void showmenu_cacl();               //������
void showmenu_S_cacl();             //������������㡱Ŀ¼
void show_other_calculate();        //�������ü���Ŀ¼
void showmenu_case4();              //�ⷽ��Ŀ¼��ʾ
void calcCircle();                  //Բ���������
void calcRectangle();               //�������������
void clear();                       //��������(����author)
void calcSand();                    //�������������
void Show_Z_H();                    //����/����
void Max_common_divisor();          //���Լ��
void Factorial();                   //�׳�
void Min_common_multiple();         //��С������
void O_O();                         //һԪһ�μ���
void T_O();                         //��Ԫһ�η���
double calcVolum_circle(double);    //���������
int Max(int,int),Min(int,int);      //�������ֵ
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
    //��Ŀ¼
    switch(choice){
        //������
        case 1:{
            clear();
            showmenu_cacl();
            scanf("%d",&choice);
            clear();
            switch(choice)
            {
                case 1:{            //�ӷ�
                    int n;
                    double s = 0.0;
                    double a[50];
                    printf("���������������");
                    scanf("%d",&n);
                    clear();
                    printf("��������������ÿո������");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s += a[i];
                    }
                    printf("��Ϊ%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }
                case 2:             //����
                {
                    int n;
                    double s;
                    double a[50];
                    printf("�����뱻����:");
                    scanf("%lf",&s);
                    printf("\n���������������");
                    scanf("%d",&n);
                    printf("\n������������������ÿո������");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s -= a[i];
                    }
                    printf("\n���Ϊ%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }

                case 3:{                //�˷�
                    int n;
                    double s = 1;
                    double a[50];
                    printf("���������������");
                    scanf("%d",&n);
                    clear();
                    printf("����������������ÿո������");
                    for(int i = 0;i < n;i++){
                        scanf("%lf",&a[i]);
                        s *= a[i];
                    }
                    printf("��Ϊ%.2lf\n",s);
                    realbreak_flag = 1;
                    break;
                }
                case 4:{                //����
                    clear();
                    double A;
                    int i,n;
                    double num[n];
                    printf("�����뱻����:");
                    scanf("%lf",&A);
                    printf("\n�������������:");
                    scanf("%d",&n);
                    printf("\n�������������,�ÿո����:");
                    for(i = 0;i < n;i++){
                        scanf("%lf",&num[i]);
                        if(num[i] == 0){
                            printf("\n��������0���������\n");
                            Con_Exit();
                        }
                        else
                            A /= num[i];
                    }
                    printf("\n���Ϊ��%.3lf\n",A);
                    realbreak_flag = 1;
                    break;
                }
                case 5:                       //������
                {
                    double a;
                    int b;
                    clear();
                    printf("�����������");
                    scanf("%lf",&a); 
                    printf("\n��������ָ����");
                    scanf("%d",&b);
                    if(a == b) printf("\n0��0���ݲ����ڣ��������\n");
                    else printf("\n%.2lf��%d����Ϊ��%.4lf\n",a,b,pow(a,b));
                    realbreak_flag = 1;
                    break;
                }
                case 6:                     //���ο���
                {
                    double as;
                    clear();
                    printf("�����뿪������");
                    scanf("%lf",&as);
                    printf("����%.2lf���Ϊ%.4lf\n",as,sqrt(as));
                    realbreak_flag = 1;
                    break;
                }
            }
        }
        //������������
        case 2:
            {   
                if(realbreak_flag == 1)break;                   //����ִ�й���ֱ���˳������switch��ĩ
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
                        printf("���������\n��������뾶��");
                        scanf("%lf",&r);
                        V = calcVolum_circle(r);
                        printf("\n�뾶%.2lf���������Ϊ%.4lf\n",r,V);
                        realbreak_flag = 1;break;
                }
            }
        //�������ü���
        case 3:{
            if(realbreak_flag == 1)break;
            clear();
            show_other_calculate();
            scanf("%d",&choice);
            switch (choice)
            {
                case 1:
                    //���Լ��
                    clear();
                    Max_common_divisor();
                    realbreak_flag = 1;
                    break;
                case 2:
                    //��С������
                    clear();
                    Min_common_multiple();
                    realbreak_flag = 1;
                    break;
                case 3:
                    //����/������
                    clear();
                    Show_Z_H();
                    realbreak_flag = 1;
                    break;
                case 4:
                    //�׳�
                    clear();
                    Factorial();
                    realbreak_flag = 1;
                    break;
            }
        }
        case 4:{                    //�ⷽ��
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
                clear();
                T_O();
                realbreak_flag = 1;
                break;
            case 3:
                
                realbreak_flag = 1;
                break;
            default:
                printf("�������,�����������˵�\n");
                Sleep(1000);
                realbreak_flag = 1;
                break;
            }
        }
    }
    //��Ŀ¼��
    Con_Exit();
    }
}


void author(){
    printf("* * * * * * * * * * * * *\n");
    printf("* �๦�ܹ�����alpha 0.32*\n");
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
    printf("1.������\t2.�������/�������\n\n3.�������ü���\t4.�ⷽ��\n");
}
void showmenu_cacl(){
    printf("1.�ӷ� +\t2.���� -\n\n3.�˷� *\t4.���� /\n\n5.������  \t6.���ο���\n\n");
}
void showmenu_S_cacl(){
    printf("�����������\n");
    printf("1.Բ�����\n2.���������\n3.���������\n4.�������\n");
}  
void showmenu_case4(){
    printf("�ⷽ��\n\n");
    printf("1.һԪһ�η���\n\n2.��Ԫһ�η���\n\n3.һԪ���η���\n\n");
}
void show_other_calculate(){
    printf("1.���Լ��\n2.��С������\n3.�������Ǻ���\n4.�׳˼���\n");
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
    printf("����Բ���\n������Բ�뾶��");
    scanf("%lf",&radius);
    s = 3.14 * pow(radius,2);
    printf("\n�뾶Ϊ%.2lf��Բ���Ϊ%.2lf\n\n",radius,s);
}
void calcRectangle(){
    clear();
    double wideth,height,s;
    printf("���㳤�������\n�����볤���εĳ��Ϳ��ÿո������");
    scanf("%lf%lf",&wideth,&height);
    s = wideth * height;
    printf("\n��Ϊ%.2lf��Ϊ%.2lf�ĳ��������Ϊ��%.2lf\n\n",wideth,height,s);
}
void calcSand(){
    clear();
    double a,b,c,S,p;
    printf("�����������ε������ߣ�");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        p = 1.0/2.0 *(a+b+c);
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("�߳�Ϊ%.2lf��%.2lf��%.2lf�����������Ϊ%.2lf\n",a,b,c,S);
    }
    else printf("���ܹ���������\n");
}
void O_O(){
    clear();
    double A,b;
    printf("�뽫һԪһ�η��̻�Ϊһ��ʽ��Ax+b=0��������A��b��ֵ:");
    scanf("%lf %lf",&A,&b);
    printf("\n%.2lfx+%.2lf=0�Ľ�Ϊ��x=%.4lf\n",A,b,-b/A);
}
void T_O(){
    clear();
    double A1,B1,A2,B2;
    printf("��δ������ɣ������ڴ�~\n");
    
}
double calcVolum_circle(double r){
    double s;
    s = 4.0 / 3.0 * 3.14 * pow(r,3);
    return s;
}
void Max_common_divisor(){
    int min,a,b;
    printf("����������������");
    scanf("%d %d",&a,&b);
    min = Min(a,b);
    for(i = min;i >= 1;i--){
        if(a % i == 0 && b % i == 0)break;
    }
    printf("\n���Լ��Ϊ%d\n\n",i);
}
void Min_common_multiple(){
    int a,b,max;
    printf("����������������");
    scanf("%d %d",&a,&b);
    max = Max(a,b);
    for(i = max; ;i++){
        if(i % a == 0 && i % b == 0)break;
    }
    printf("\n��С������Ϊ%d\n\n",i);
}
void Show_Z_H(){
    printf("������һ������2����������");
    scanf("%d",&num);
    if(num < 2)printf("�������ֲ���ȷ");
    else{
        for(i = 2;i < num / 2;i++){
        if(num % i == 0)break;
        }
        if(i < num/2)printf("����\n\n");
        else printf("����\n\n");
    }
}
void Factorial(){
    int Out = 1;
    printf("������ĳ�����Ľ׳ˣ�");
    scanf("%d",&num);
    if(num < 1)printf("�������");
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
            printf("\n����������\n1.����\n2.�˳�\n\n");
        }
        else printf("\n�������������\n1.����\n2.�˳�\n\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:flag = 1;break;
            case 2:exit(0);
            default:printf("�������");
            Sleep(1500);
        }
        i++;
    }
}

