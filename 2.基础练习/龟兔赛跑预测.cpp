/*
	T--乌龟获胜
	R--兔子获胜
	D--两者同时到达终点
*/
#include<stdio.h>
main(){
	int vt,vg,t,s,l;
	scanf("%d%d%d%d%d",&vt,&vg,&t,&s,&l);
	int tu=0,gui=0;//龟兔跑的路程
	int time=0;//用的时间 
	int ss;//用来记录兔子睡觉的时间 
	while(tu<l && gui<l){//均没有到终点时执行循环 
		if(tu-gui>=t){//若兔子超过乌龟t米,开始睡觉 
			ss=s;
			while(ss--!=0 && gui<l){//若兔子还没有睡醒且乌龟没有到终点时执行 
				gui=gui+vg;//兔子睡觉s秒乌龟跑的距离为vg*s，每while循环一次过了1秒 
				time++;//比赛时间在增加 
			}
			continue;//结束此次循环进行下一次循环
		}
		gui=gui+vg*1;//乌龟跑的距离 
		tu=tu+vt*1;//兔子跑的距离
		time++;//比赛时间在增加
	}
	
	if(tu>=l && gui>=l)
		printf("D\n");
	else if(tu>=l && gui<l)
		printf("R\n");
	else
		printf("T\n");
	printf("%d",time);
}
