#include<stdio.h>  
#include<string.h>  
long long n,sum;  
int label[10];//�����������i�Ƿ����ˣ����Ƿ��ѱ�������������  
int a[10];
void SouSuo(int pos){  
    if(pos==10){  //��ʾ��ǰ����a������10������  
        sum++;  
        if(sum==n){  
            for(int i=0; i<10; i++)
                printf("%d",a[i]); 
        }
    }
    for(int i=0; i<=9; i++){//ö������0������9
        if(!label[i]){//������i��û�����ڵ�ǰ������
            a[pos]=i;//��i������ǰ����a����ĵ�posλ��  
            label[i]=1;//����i�ѷ��������У����Ϊ1  
            SouSuo(pos+1);//����������һ��λ��  
            label[i]=0;//������  
        }  
    }  
}  
int main(){  
    scanf("%d",&n);
    if(n==0){
    	return 0;
	}
    memset(label,0,sizeof(label));//����Ǹ���ֵ0 
    sum=0;  
    SouSuo(0);
    return 0;  
}  
