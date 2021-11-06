#include<stdio.h>
/*Ã°ÅİÅÅĞò*/
int main(){
    int data[10]={-100, 79, -3, 0, 49, 21, 8, 200, 12341, 0};
    printf("Êı×éÔ­ĞòÎª£º");
    for(int i=0;i<10;i++){
    	printf("%5d",data[i]);
	}
	printf("\n\nÃ°ÅİÉıĞòÎª£º");
    for(int i=0;i<10-1;i++){
    	for(int j=0;j<10-1-i;j++){
    		if(data[j]>data[j+1]){
    			int temp = data[j];
    			data[j] = data[j+1];
    			data[j+1] = temp;
			}
		}
	}
	for(int i=0;i<10;i++){
    	printf("%5d",data[i]);
	}
}
