/*288*/
#include<stdio.h>  
int main(){  
	int count=0;
    int a,b,c,d,e,f,g,h,k;//分别代表九宫格中的数字 
    int sum1=0,sum2=0,sum3=0,lie1=0,lie2=0,lie3=0;
    for(a=0;a<=9;a++)//从1开始，因为数字首位不能为0   
        for(b=0;b<=9;b++)  
            for(c=0;c<=9;c++)
                for(d=0;d<=9;d++)
                    for(e=0;e<=9;e++)//从1开始，因为数字首位不能为0   
                        for(f=0;f<=9;f++)  
                            for(g=0;g<=9;g++)  
                                for(h=0;h<=9;h++)
                                    for(int k=0;k<=9;k++){
                                    	if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=k   
	                                       && b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=k&&   
	                                       c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=k&& d!=e&&d!=f  
	                                       &&d!=g&&d!=h&&d!=k&& e!=f&&e!=g&&e!=h&&e!=k&&f!=g&&f!=h&&f!=k   
	                                       && g!=h&&g!=k&&h!=k){  
	                                        sum1=a+b+c;  
	                                        sum2=d+e+f;  
	                                        sum3=g+h+k;
	                                        lie1=a+d+g;
	                                        lie2=b+e+h;
	                                        lie3=c+f+k;
	                                        if(sum1==sum2 && sum1==sum3 && sum2==sum3 && lie1==lie2 && lie2==lie3 && lie1==lie3){
	                                        	count++;
												printf("%d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
	                                        }  
	                                    }  
									}
    printf("\n\n%d",count);
    return 0;  
} 


