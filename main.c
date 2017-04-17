#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{

    //使用时间作为种子，产生不一样的随机数字


/*  使用循环模拟实现玩家对战
    双方初试hp均为100
    每次攻击5-15
    hp最先到零获以下的被ko
    */

    srand(time(NULL));
   // printf("随机数字：%d\n",rand());

    int hp1 = 100, hp2 = 100;
    int att1,att2;
    int i = 1;

    while( hp1 >=0 && hp2 >= 0)
    {
        //默认1p首先攻击
        att1 = rand()%11 + 5;
        Sleep(1000);
        att2 = rand()%11 + 5;
        hp2 -= att1;

        hp1 -= att2;
        printf("####################################\n");
        printf("第%d轮。\n",i);
        printf("玩家1攻击力：%d,玩家2的剩余血量：%d。\n",att1,hp2);
        printf("玩家2攻击力：%d,玩家1的剩余血量：%d。\n");
        printf("####################################\n");
        i++;

    }
        printf("KO! 玩家1的血量:%d。玩家2的血量:%d。",hp1,hp2);



        return 0 ;

}
