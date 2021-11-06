#include<stdio.h> 
/*本DEMO功能：将一个文件中的内容复制到另一个文件中*/
int main(){
	FILE *fp1,*fp2;
	char str[30];
	fp1 = fopen("aaa.txt","r");
	fp2 = fopen("bbb.txt","a");
	if(fp1 != NULL){
		while(!feof(fp1)){
			fgets(str,30,fp1);
			fputs(str,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
