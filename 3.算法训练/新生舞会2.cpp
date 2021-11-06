#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
typedef struct node{  
    char str[20];  
    char id[10];  
    char gender;  
}Node;  
int n,m;  
Node data[1000];
int byName (char str[]) {  
    int i;  
    for(i = 0; i < n; i ++){  
        if(strcmp(data[i].str,str) == 0){  
            if(data[i].gender == 'M'){  
                return 1;  
            }  
            else  
                return 0;  
        }  
    }  
}  
  
int byId (char str[]) {  
    int i;  
    for(i = 0; i < n; i ++){  
//比较两个字符串设这两个字符串为str1，str2，若str1==str2，则返回零
        if(strcmp(data[i].id,str) == 0){  
            if(data[i].gender == 'M'){  
                return 1;  
            }  
            else  
                return 0;  
        }  
    }  
}  
  
int main () {  
    int i;  
    char a[20],b[20];  
      
    scanf("%d", &n);  
    for(i = 0; i < n; i ++){  
        scanf("%s%s %c", data[i].str, data[i].id, &data[i].gender);  
        getchar();  
    }  
  
    scanf("%d", &m);  
    for(i = 0; i < m; i ++){  
        scanf("%s%s", a, b);    //先用a，b保存   
        int judge1,judge2;  
        if(a[0] <= 57){      //数字   
            judge1 = byId(a);  
        } else {    //字母   
            judge1 = byName(a);  
        }  

        if(b[0] <= 57){  //数字  
            judge2 = byId(b);  
        } else {    //字母   
            judge2 = byName(b);  
        }  
          
        if(judge1 != judge2)  
            printf("Y\n");  
        else  
            printf("N\n");  
    }  
    return 0;  
}
