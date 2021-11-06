#include "stdio.h"  
  
void swap(int *a,int *b){/*������Ԫ��λ�õĽ���*/  
  int tmp;  
  tmp = *a;  
  *a = *b;  
  *b = tmp;  
}  
void quicksort(int k[], int s,int t){/*��������*/  
    int i,j;  
    if(s<t){ 
        i = s;  
        j = t+1;  
        while(1){  
            do i++;  
            while(!(k[s]>=k[i] || i==t));/*�ظ�ִ��i++����*/  
            do j--;  
            while(!(k[s]<=k[j] || j==s));/*�ظ�ִ��j--����*/  
            if(i<j)  
                swap(&k[i],&k[j]);/*����k[i]��k[j]��λ��*/  
            else
                break;
  
        }  
        swap(&k[s],&k[j]);/*������׼Ԫ����k[j]��λ��*/  
        quicksort(k,s,j-1);/*�ݹ������׼Ԫ��ǰ���������*/  
        quicksort(k,j+1,t);/*�ݹ������׼Ԫ�غ����������*/  
    }  
}  
  
int main(){
	int n;
	scanf("%d",&n);
	getchar();//����˴��Ļس� 
	int k[n];
	for(int i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
    printf("ԭ��\t");
    for(int i=0;i<n;i++)
        printf("%d ",k[i]);
    quicksort(k,0,n-1);/*��������:0��n-1�ֱ��ʾ����k���±귶Χ*/  
    printf("\n���ٽ���:");  
    for(int i=0;i<n;i++)
        printf("%d ",k[i]);  
    return 0; 
} 
