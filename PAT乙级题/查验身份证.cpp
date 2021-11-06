#include<stdio.h>
char check[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int checkNum(char idNum[]){
	int sum=0;//加权和，初值为0 
	sum = (idNum[0]-'0')*7 + (idNum[1]-'0')*9 + (idNum[2]-'0')*10 + (idNum[3]-'0')*5 + (idNum[4]-'0')*8 + 
		(idNum[5]-'0')*4 + (idNum[6]-'0')*2 + (idNum[7]-'0')*1 + (idNum[8]-'0')*6 + (idNum[9]-'0')*3 + 
		(idNum[10]-'0')*7 + (idNum[11]-'0')*9 + (idNum[12]-'0')*10 + (idNum[13]-'0')*5 +(idNum[14]-'0')*8 + 
		(idNum[15]-'0')*4 + (idNum[16]-'0')*2;
	int z = sum%11;
	if(idNum[17] == check[z])
		return 1;
	else
		return 0;
}
int main(){
	int n;
	int num=0;
	scanf("%d",&n);
	char idNum[18];
	while(n>0){
		scanf("%s",&idNum);
		for(int j=0;j<17;j++){
			if(idNum[j]-'0'<=9 && idNum[j]-'0'>=0){
				break;
			}else{
				printf("%s\n",idNum);
				num += 1;
			}
		}
		if(!checkNum(idNum)){
			printf("%s\n",idNum);
			num += 1;
		}
		n--;
	}
	if(num==0)
		printf("All passed");
	return 0;
}
