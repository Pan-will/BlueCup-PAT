#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m[n][n];
	for(int i=0;i<n;i++){  
	    for(int j=0;j<=i;j++){  
	        scanf("%d",&m[i][j]);
	    }  
	} 
	for(int i=n-1;i>0;i--) {
		for(int j=0;j<i;j++){
			if(m[i][j]>m[i][j+1]){
				m[i-1][j] += m[i][j];
			}else{
				m[i-1][j] += m[i][j+1];
			}
		}
	}
	printf("%d",m[0][0]);
	return 0;
}
