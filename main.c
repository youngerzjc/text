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

    //ʹ��ʱ����Ϊ���ӣ�������һ�����������


/*  ʹ��ѭ��ģ��ʵ����Ҷ�ս
    ˫������hp��Ϊ100
    ÿ�ι���5-15
    hp���ȵ�������µı�ko
    */

    srand(time(NULL));
   // printf("������֣�%d\n",rand());

    int hp1 = 100, hp2 = 100;
    int att1,att2;
    int i = 1;

    while( hp1 >=0 && hp2 >= 0)
    {
        //Ĭ��1p���ȹ���
        att1 = rand()%11 + 5;
        Sleep(1000);
        att2 = rand()%11 + 5;
        hp2 -= att1;

        hp1 -= att2;
        printf("####################################\n");
        printf("��%d�֡�\n",i);
        printf("���1��������%d,���2��ʣ��Ѫ����%d��\n",att1,hp2);
        printf("���2��������%d,���1��ʣ��Ѫ����%d��\n");
        printf("####################################\n");
        i++;

    }
        printf("KO! ���1��Ѫ��:%d�����2��Ѫ��:%d��",hp1,hp2);



        return 0 ;

}
