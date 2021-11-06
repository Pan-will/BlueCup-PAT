#include<stdio.h>
void MaoPao_Down(int a[], int n)
{
	int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
         if(a[i] < a[i + 1])
            {temp=a[i]; a[i]=a[i+1]; a[i+1]=temp;}
}
int main(){
	int count;
	int n,m;
	
	int a[20];
	scanf("%d",&count);
	while(count--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int JI=1,temp1,temp2;
		MaoPao_Down(a,n);
		for(int j=n-1,k=0;m>0;){
			if(m>=2){
				temp1 = a[j]*a[j-1];
				temp2 = a[k]*a[k+1];
				if(temp1>=temp2){
					JI*=temp1;
					m-=2;
					j-=2;
				}else{
					JI*=a[k++];
					m--;
				}
			}else {  
                JI*=a[k++];
				m--; 
            } 
		}
		printf("%d",JI);
		printf("\n");
	}
}
