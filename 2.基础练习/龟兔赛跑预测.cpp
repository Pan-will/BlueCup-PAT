/*
	T--�ڹ��ʤ
	R--���ӻ�ʤ
	D--����ͬʱ�����յ�
*/
#include<stdio.h>
main(){
	int vt,vg,t,s,l;
	scanf("%d%d%d%d%d",&vt,&vg,&t,&s,&l);
	int tu=0,gui=0;//�����ܵ�·��
	int time=0;//�õ�ʱ�� 
	int ss;//������¼����˯����ʱ�� 
	while(tu<l && gui<l){//��û�е��յ�ʱִ��ѭ�� 
		if(tu-gui>=t){//�����ӳ����ڹ�t��,��ʼ˯�� 
			ss=s;
			while(ss--!=0 && gui<l){//�����ӻ�û��˯�����ڹ�û�е��յ�ʱִ�� 
				gui=gui+vg;//����˯��s���ڹ��ܵľ���Ϊvg*s��ÿwhileѭ��һ�ι���1�� 
				time++;//����ʱ�������� 
			}
			continue;//�����˴�ѭ��������һ��ѭ��
		}
		gui=gui+vg*1;//�ڹ��ܵľ��� 
		tu=tu+vt*1;//�����ܵľ���
		time++;//����ʱ��������
	}
	
	if(tu>=l && gui>=l)
		printf("D\n");
	else if(tu>=l && gui<l)
		printf("R\n");
	else
		printf("T\n");
	printf("%d",time);
}
