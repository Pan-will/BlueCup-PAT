#include<stdio.h>
#include<string.h> 
void show_day(int day){
	switch(day){
		case 1:
			printf("MON ");
			break;
		case 2:
			printf("TUE ");
			break;
		case 3:
			printf("WED ");
			break;
		case 4:
			printf("THU ");
			break;
		case 5:
			printf("FRI ");
			break;
		case 6:
			printf("SAT ");
			break;
		case 7:
			printf("SUN ");
			break;
	}
}

void day_day(char str1[],char str2[]){
	int hour = 0;
	int flag = 0;
	int i;
	int len = strlen(str1);
	for(i=0;i<len;i++){
		if((str1[i] >= 'A' && str1[i] <= 'G') && flag == 0){
			if(str1[i] = str2[i]){
				show_day(str1[i] - 64);
				flag = 1;
				i++;
			}
		}
		if(str1[i] == str2[i] && flag == 1){
			if(str1[i] >= 'A' && str1[i] <= 'N'){
				hour = str2[i] - 64 + 9;
				printf("%d:",hour);
				break;
			}
		 	if(str1[i] >= '0' && str1[i] <= '9'){
				hour = str2[i]-'0';
				printf("0%d:",hour);
				break;
			}
		}
		
	}
}

void fen_fen(char str1[],char str2[]){
	int len = strlen(str1);
	for(int i=0;i<len;i++){
		if((str1[i] >= 'A' && str1[i] < 'Z') || (str1[i] >= 'a' && str1[i] <= 'z')){
			if(str1[i] == str2[i]){
				if(i<10) printf("0%d",i);
				else printf("%d",i);
				break;
			}
		}
	}
}

int main(){
	char str[4][80];
	for(int i=0;i<4;i++){
		scanf("%s",&str[i]);
	}
	day_day(str[0],str[1]);
	fen_fen(str[2],str[3]);
	return 0;
}
