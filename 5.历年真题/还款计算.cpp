/*
�������������(0<lilv<30%)����Ϣ��
ÿ�»�����������(6<=time<=120)
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mian(){
	double ben=10000.00;//��ʼ����10000 
	double lilv,lixi;//�����ʡ���Ϣ��������� 
	double dmon;//ÿ�»����
	int time;//��������
	scanf("%lf",&lilv);
	scanf("%d",&time);
	for(int i=0;ben<0,time=0;i++) {
		lixi = ben*(lilv/100)/12;//������²�������Ϣ 
		ben = ben + lixi - dmon;//���±������Ϊ������ + ��Ϣ - ÿ�¹̶������
		time--;
	}
	printf("%lf",dmon);
	return 0;
}
