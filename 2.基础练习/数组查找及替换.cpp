#include<stdio.h> 
int main(){
	int b,n;
	int k=0;
	scanf("%d %d",&n,&b);
	int a[100],c[100];
	/*��������Ԫ��*/
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	/*ɾ���ܱ�b������Ԫ��*/
	for(int i=0;i<n;i++){
		/*ɾ���ܱ�b������Ԫ��*/ 
		if(a[i] % b != 0){
			c[k] = a[i];
			k++;
		}
	}
	/*ð������*/ 
	for(int i=0;i<k-1;i++){
    	for(int j=0;j<k-1-i;j++){
    		if(c[j]>c[j+1]){
    			int temp = c[j];
    			c[j] = c[j+1];
    			c[j+1] = temp;
			}
		}
	}
	/*�滻��������*/
	for(int i=0;i<k;i++){
    	if(c[i]>='A' && c[i]<='Z'){
    		int flag = c[i];
    		char ch = (char) flag;
    		printf("%c ",ch);
		}else if(c[i]>='a' && c[i]<='z'){
    		int flag = c[i];
    		char ch = (char) flag;
    		printf("%c ",ch);
		}else{
			printf("%d ",c[i]);
		}
	}
}
