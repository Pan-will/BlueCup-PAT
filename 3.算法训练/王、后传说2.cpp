#include<stdio.h>
#include<memory.h>
int Chess[8][8]={0};//定义二维数组代表8x8棋盘
int a[8],b[15],c[15];//定义a［8］代表一竖是八行，定义b［15］，c［15］代表从↗?到↙?对角线和从↖?到↘?对角线
int sum=0;//定义sum累计确定一共有多少种结果
void Queen(int n)//定义放置皇后的函数
{
    int col;//定义col控制皇后的位置
    for(col=0;col<8;col++)//从第一行开始确定皇后的位置，逐次递增，col表示皇后在该行的第几个位置
    {
        if(a[col]&&b[n+col]&&c[n-col+7])//判断该位置竖、对角线都还有1个皇后可以放，为真，即＝1
        {
            Chess[n][col]=1;//放置皇后
            a[col]=0;//放置皇后后，该位置的竖剩余可放皇后数变为0
            b[n+col]=0;//放置皇后后，该位置的由↗?到↙?对角线剩余可放皇后数变为0
            c[n-col+7]=0;//放置皇后后，该位置的由↖?到↘?对角线剩余可放皇后数变为0
            if(n==7)//判断是否到第八行，不到第八行则执行else
            {
                sum++;//循环到第八行，都符合题中条件，摆法加一
            }
            else//执行，递归
            {
                Queen(n+1);//调用函数Queen，参数逐次加一
            }
            Chess[n][col]=0;//取消皇后,恢复棋盘初始值
            b[n+col]=1;//恢复初始值，保证下一次循环的功能性
            c[n-col+7]=1;//恢复初始值，保证下一次循环的功能性
            a[col]=1;//恢复初始值，保证下一次循环的功能性
        }
    }
}
int main()
{
    int i;//定义计数变量i
    memset(a,1,sizeof(a));
	memset(b,1,sizeof(b));
	memset(c,1,sizeof(c));
    Queen(0);//调用递归函数Queen，实现sum的累加
    printf("%d\n",sum);//输出sum的值
    return 0;//返回0
}
