#include<stdio.h>
void cimi(int n){
    int num=0;
    int i=0,j,k;
    int a[32];//����
    
    
    /*��Ҫ��*/ 
    while(n){//��n����0 ,�𲽽�n��,�ŵ�����a�� 
        j=n%2;//n��2���� 
        if(j==1)
            a[num++]=i;//�洢�ڼ�����1
        i++;
        n/=2;
    }
    
    
    for(i=num-1;i>=0;i--){//�����������a
        if(a[i]==0)
            printf("2(0)");
        else if(a[i]==1)
            printf("2");
        else if(a[i]==2)
            printf("2(2)");
        else if(a[i]>2){
            printf("2(");
            cimi(a[i]);//�ݹ���� 
            printf(")");
        }
        if(i!=0)
            printf("+");
    }
} 
int main(){
    int n;
    scanf("%d",&n);//����n
    cimi(n);//���ú��� 
    return 0;//�������� 
}


