#include<stdio.h>
#include<stdlib.h>
/*
实现目标：1.输出各个英雄的所有信息
         2.输出玩家的各个信息
         3.输出一些商店物品的各个信息
*/

typedef struct _hero
{
    int ID;
    char name[50];
    double att;
    int hp;
}Hero;
typedef struct _player
{
    int ID;
    char name[20];
    char pass[16];
    Hero heros[];              //玩家拥有两个英雄
}Player;
typedef struct _goods
{
    char name[30];
    int num;                    //库存量
    double price;
    char des[50];
}Goods;

