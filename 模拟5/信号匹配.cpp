/*j=next[j]*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* make_next(int pa[], int pn){
	//��ʾ����һ��int���͵�ָ�����a,����̬����n*sizeof(int)���ֽ�(��4*n���ֽ�)�Ĵ洢�ռ�
	int* next = (int*)malloc(sizeof(int)*pn);
	next[0] = -1;
	int j = 0;
	int k = -1;
	while(j < pn-1){
		if(k==-1 || pa[j]==pa[k]){
			j++;
			k++;
			next[j] = k;
		}
		else
			k = next[k];
	}
	return next;
}

// da������pa�� da�ĳ���Ϊan, pa�ĳ���Ϊpn 
int find(int da[], int an, int pa[], int pn){
	int rst = -1;
	int* next = make_next(pa, pn);
	int i=0;  // da�е�ָ�� 
	int j=0;  // pa�е�ָ��
	int n = 0;
	while(i<an){
		n++;
		if(da[i]==pa[j] || j==-1){
			i++;
			j++;
		}
		else
			j=next[j];  //���λ��
		if(j==pn) {
			rst = i-pn;
			break;
		}
	}
	free(next);
	return rst;
}

int main(){
	int da[] = {1,2,1,2,1,1,2,1,2,1,1,2,1,1,2,1,1,2,1,2,1,1,2,1,1,2,1,1,1,2,1,2,3};
	int pa[] = {1,2,1,1,2,1,1,1,2};
	
	int n = find(da, sizeof(da)/sizeof(int), pa, sizeof(pa)/sizeof(int));
	printf("%d\n", n);
	return 0;
}
