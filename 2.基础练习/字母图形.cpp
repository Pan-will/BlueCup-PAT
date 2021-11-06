#include<stdio.h> 
int main(){
	/*n为行数,m为列数*/
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		int j=0;
		for(char a='A'+i;a>'A'&&j<m;a--){
			printf("%c",a);
			j++;
		}
		for(char a='A';a<='Z'&&j<m;a++){
			printf("%c",a);
			j++;
		}
		printf("\n");
	}
	return 0;
}
