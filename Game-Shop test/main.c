#include"head.h"
void Init();                    //初始化数据
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
           {1,"李逗牛",99.9,150},
           {2,"斗天王",80,200},
           {3,"言大王",100,120}
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
            {"九阴真经",5,99.99,"可以获得一个技能绝学"},
            {"玄冥神掌",3,80,"发出气功神掌"},
            {"波波手套",5,30,"带上这个手套可以发出勇猛的气波"},
            {"铁腰护腕带",1,120,"让你的手腕如铁般坚硬!"}
        };
        goodslen = sizeof(goods) / sizeof(Goods);
        goodsprop = goods;

}

void ShowHeros(){
    printf("英雄信息:\n");
    printf("%-7s名称\t攻击力\t生命值\n","编号");
    for(i = 0;i < herolen;i++)
        printf("0%-6d%-4s\t%-4.1lf\t%-4d\n",heroprop[i].ID,heroprop[i].name,heroprop[i].att,heroprop[i].hp);
}
void ShowPlayers(){
    printf("玩家信息:\n");
    printf("%-7s%-10s密码\n","编号","用户名");
    for(i = 0;i < playerlen;i++)
        printf("0%-6d%-10s%s\n",playerprop[i].ID,playerprop[i].name,playerprop[i].pass);
}
void ShowGoods(){
    printf("物品信息:\n");
    printf("%-12s%-8s%-10s描述\n","名称","库存量","价格");
    for(i = 0; i< goodslen;i++){
        printf("%-12s%-8d%-10.1lf%s\n",goodsprop[i].name,goodsprop[i].num,goodsprop[i].price,goodsprop[i].des);
    }
}


