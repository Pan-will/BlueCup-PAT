#include<stdio.h>
int main(){  
	int count=0;
    int a,b,c,d,e,f,a1,b1,c1,d1,e1,f1;//分别代表12个数字 
    for(a=1;a<=13;a++)//从1开始，因为数字首位不能为0   
        for(b=1;b<=13;b++)  
            for(c=1;c<=13;c++)
                for(d=1;d<=13;d++)
                    for(e=1;e<=13;e++)//从1开始，因为数字首位不能为0   
                        for(f=1;f<=13;f++)  
                            for(a1=1;a1<=13;a1++)
                                for(b1=1;b1<=13;b1++){
                                	for(c1=1;c1<=13;c1++){
                                    	for(d1=1;d1<=13;d1++){
                                    		for(e1=1;e1<=13;e1++){
                                    			for(f1=1;f1<=13;f1++){
                                    				if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=a1&&a!=b1&&a!=c1&&a!=d1&&a!=e1&&a!=f1
				                                       &&b!=c&&b!=d&&b!=e&&b!=f&&b!=a1&&b!=b1&&b!=c1&&b!=d1&&b!=e1&&b!=f1  
				                                       &&c!=d&&c!=e&&c!=f&&c!=a1&&c!=b1&&c!=c1&& d!=d1&&d!=e1&&d!=f1  
				                                       &&d!=e&&d!=f&&d!=a1&& d!=b1&&d!=c1&&d!=d1&&d!=e1&&d!=f1
													   &&e!=f&&e!=a1&&e!=b1&&e!=c1&&e!=d1&&e!=e1&&e!=f1
													   &&f!=a1&&f!=b1&&f!=c1&&f!=d1&&f!=e1&&f!=f1
													   &&a1!=b1&&a1!=c1&&a1!=d1&&a1!=e1&&a1!=f1
													   &&b1!=c1&&b1!=d1&&b1!=e1&&b1!=f1
													   &&c1!=d1&&c1!=e1&&c1!=f1
													   &&d1!=e1&&d1!=f1
				                                       &&e1!=f1){
				                                    	if(((a*b)+(c*d)==(e*f)) && ((a1*b1)-(c1*d1)==(e1*f1))){
				                                        	count++;
				                                        	printf("%d*%d+%d*%d=%d*%d\n%d*%d-%d*%d=%d*%d\n",a,b,c,d,e,f,a1,b1,c1,d1,e1,f1);
				                                        }  
				                                    }
												}
											}
										}
									}
								}
    printf("\n%d",count);
    return 0;  
} 



