/*
0:zero, 1: one, 2:two, 3:three, 4:four, 5:five
6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven
12:twelve, 13:thirteen, 14:fourteen, 15:fifteen
16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen
20:twenty, 30:thirty，40:forty，50:fifty。

对于大于20小于60的数字，首先读整十的数，然后再加上个位数。
	如31首先读30再加1的读法，读作“thirty one”。
按上面的规则:
	21:54读作“twenty one fifty four”;
	9:07读作“nine seven”;
	0:15读作“zero fifteen”。
*/
#include<stdio.h>  
int main(){  
    char a[21][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};  
    char b[6][20]={"","","twenty","thirty","forty","fifty"};
    int h,m;
    scanf("%d%d",&h,&m);
    if(m==0){
        if(h<=20)
        	printf("%s o'clock",a[h]);
        else
        	printf("%s %s",b[h/10],a[h%10]);
    }else{
        if(h<=20){
            if(m<=20){
                printf("%s %s",a[h],a[m]);
            }else{
                printf("%s %s %s",a[h],b[m/10],a[m%10]);  
            }
        }else{
            if(m<=20){  
                printf("%s %s %s",b[h/10],a[h%10],a[m]);  
            }else{
                printf("%s %s %s %s",b[h/10],a[h%10],b[m/10],a[m%10]);  
            }  
        }  
    }  
    return 0;  
}
