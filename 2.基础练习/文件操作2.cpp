#include<stdio.h>
/*FILE函数是stdio库中的，声明文件时只能大写*/
int main(){
	FILE *fp;//定义文件类型的指针变量 
	char fname[30];
	char outchar;
	
	printf("请输入要读取的文件名：");
	scanf("%s",fname);
	fp = fopen(fname,"r");
	if(fp != NULL){
		while((outchar=fgetc(fp)) != EOF)//输出文件中的所有字符 
		putchar(outchar);
	}else
		printf("\n%s文件不存在",fname);
	fclose(fp);
	return 0;
}
