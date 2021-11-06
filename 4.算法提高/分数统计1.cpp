#include<stdio.h>
int main(){
	int n;
	int a=1,b=1,c=1,d=1,e=1;
	scanf("%d",&n);
	int score[n];
	int a1[5][n];
	for(int i=0;i<5;i++){
		a1[i][0]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&score[i]);
		if(score[i]>=90){
			a1[0][a]=score[i]; 
			a1[0][0]++;
			a++;
		}
		else if(score[i]>=80 && score[i]<90){
			a1[1][b]=score[i];
			a1[1][0]++; 
			b++;
		}
		else if(score[i]>=70 && score[i]<80){
			a1[2][c]=score[i]; 
			a1[2][0]++;
			c++;
		}
		else if(score[i]>=60 && score[i]<70){
			a1[3][d]=score[i];
			a1[3][0]++; 
			d++;
		}
		else if(score[i]<60){
			a1[4][e]=score[i];
			a1[4][0]++;
			e++;
		}
	}
	printf("%d %d %d %d %d\n",a1[0][0],a1[1][0],a1[2][0],a1[3][0],a1[4][0]);
	
	/*对各个等级人数进行冒泡降序*/
	for(int i=0; i<5-1; i++){
		for(int j=0; j<5-1-i; j++){
			/*降序*/
			if(a1[j][0]<a1[j+1][0]){
				int t = a1[j][0];
				a1[j][0] = a1[j+1][0];
				a1[j+1][0] = t;
			}
		}
	}
	printf("%d\n",a1[0][0]);
	for(int i=1;i<=a1[0][0];i++){
		printf("%d ",a1[1][i]);
	}
}
