#include<stdio.h>  
#include<string.h>  
#include<math.h>  
int main(){  
    char strHex[10];  
    int i = 0, len = 0, temp = 0;  
    long long answer = 0;  
    gets(strHex); 
    len = strlen(strHex);
    for (i = 0; strHex[i] != '\0'; ++i){  
        switch(strHex[i]){  
	        case 'A': temp = 10; break;  
	        case 'B': temp = 11; break;  
	        case 'C': temp = 12; break;  
	        case 'D': temp = 13; break;  
	        case 'E': temp = 14; break;  
	        case 'F': temp = 15; break;  
	        default: temp = strHex[i]-'0'; break;  
        }  
        answer += (temp*pow(16,len-1-i));
    }  
    printf("%lld",answer);  
    return 0;  
}
