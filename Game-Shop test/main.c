#include"head.h"
void Init();                    //��ʼ������
void ShowHeros();
void ShowPlayers();
void ShowGoods();
Hero * heroprop;
Player * playerprop;
Goods * goodsprop;
int herolen;
int playerlen;
int goodslen;
int i;

int main(){
    Init();
    ShowHeros();
    printf("\n");
    ShowPlayers();
    printf("\n");
    ShowGoods();
    system("pause");
    return 0;
}

void Init(){
       static Hero heros[] = {
           {1,"�ţ",99.9,150},
           {2,"������",80,200},
           {3,"�Դ���",100,120}
       };
       herolen = sizeof(heros) / sizeof(Hero);
       heroprop = heros;
       

       static Player players[] = {
           {1,"xzajyjs","121556"},
           {2,"LongGe","560342"},
           {3,"kpsgg","wodeni"},
           {4,"lemon","lemon'spass"}
       };
       playerlen = sizeof(players) / sizeof(Player);
       playerprop = players;

        static Goods goods[] = {
            {"�����澭",5,99.99,"���Ի��һ�����ܾ�ѧ"},
            {"��ڤ����",3,80,"������������"},
            {"��������",5,30,"����������׿��Է������͵�����"},
            {"���������",1,120,"����������������Ӳ!"}
        };
        goodslen = sizeof(goods) / sizeof(Goods);
        goodsprop = goods;

}

void ShowHeros(){
    printf("Ӣ����Ϣ:\n");
    printf("%-7s����\t������\t����ֵ\n","���");
    for(i = 0;i < herolen;i++)
        printf("0%-6d%-4s\t%-4.1lf\t%-4d\n",heroprop[i].ID,heroprop[i].name,heroprop[i].att,heroprop[i].hp);
}
void ShowPlayers(){
    printf("�����Ϣ:\n");
    printf("%-7s%-10s����\n","���","�û���");
    for(i = 0;i < playerlen;i++)
        printf("0%-6d%-10s%s\n",playerprop[i].ID,playerprop[i].name,playerprop[i].pass);
}
void ShowGoods(){
    printf("��Ʒ��Ϣ:\n");
    printf("%-12s%-8s%-10s����\n","����","�����","�۸�");
    for(i = 0; i< goodslen;i++){
        printf("%-12s%-8d%-10.1lf%s\n",goodsprop[i].name,goodsprop[i].num,goodsprop[i].price,goodsprop[i].des);
    }
}


