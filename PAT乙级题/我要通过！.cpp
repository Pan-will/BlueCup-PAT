#include<stdio.h> 
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char str[n][120];
	char ans[n][10];
	for(int i=0;i<n;i++){
		scanf("%s",str[i]);
		char *p=str[i];
		int nump=0,numa=0,numt=0;
		for(p=str[i];(*p)!='\0';p++){
			if((*p) != 'P' && (*p) != 'A' && (*p) != 'T' && (*p) != ' '){
				strcpy(ans[i],"NO");
				break;
			}else if((*p) == 'P'){
				nump++;
			}else if((*p) == 'A'){
				numa++;
			}else if((*p) == 'T'){
				numt++;
			}
		}
		if(nump!=0 && numa!=0 && numt!=0){
			strcpy(ans[i],"YES");
			continue;
		}else{
			strcpy(ans[i],"NO");
			continue;
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",ans[i]);
	}
}
