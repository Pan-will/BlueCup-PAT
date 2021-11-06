#include<stdio.h> 
#include<memory.h>
/*
memset按字节存储，称为char数组初始化函数

char类型的变量大小是1个字节
int 类型的变量大小是4个字节 
*/

main(){
	char *a = new char [10];
	memset(a,'p',sizeof(a));
	for(int i=0;i<10;i++){
		printf("%c ",a[i]);
	}
} 
