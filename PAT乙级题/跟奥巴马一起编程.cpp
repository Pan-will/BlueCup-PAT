#include<stdio.h>
int main(){
	int n;
	char fuhao;
	scanf("%d %c",&n,&fuhao);
	int raw = int(n/2.0 + 0.5);
	for(int i=0;i<raw;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==raw-1 )  
                printf("%c",fuhao);
            else if(j==0 || j==n-1)
                printf("%c",fuhao); 
            else  
                printf(" ");  
		}
		if(i != raw-1)
			printf("\n");
	}
	return 0;
}
