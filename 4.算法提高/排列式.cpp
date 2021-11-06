#include<stdio.h>  
void Calc(){//解题函数
    int count=0,m,n,x;
	int p,q;  
    for(int a=1; a<10; a++)
        for(int b=1; b<10; b++)  
            for(int c=1; c<10; c++)  
                for(int d=1; d<10; d++)  
                    for(int e=1; e<10; e++)  
                        for(int f=1; f<10; f++)  
                            for(int g=1; g<10; g++)  
                                for(int i=1; i<10; i++)  
                                    for(int j=1; j<10; j++){  
                                        //保证1-9只出现一次  
                                        if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=i&&a!=j&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=i&&b!=j&&c!=d&&c!=e&&c!=f&&c!=g&&c!=i&&c!=j&&d!=e&&d!=f&&d!=g&&d!=i&&d!=j&&e!=f&&e!=g&&e!=i&&e!=j&&f!=g&&f!=i&&f!=j&&g!=i&&g!=j&&i!=j){  
                                            m=a*1000+b*100+c*10+d;  
                                            n=e*10+f;  
                                            x=g*100+i*10+j;
											p=e;
											q=f*1000+g*100+i*10+j;  
                                            if (m==n*x){  
                                                count++;
												printf("%d=%dx%d\n",m,n,x); 
                                            }
											if(m==p*q){  
                                                count++;
												printf("%d=%dx%d\n",m,p,q); 
                                            }
                                        }  
                                    }  
	printf("共有%d种。",count);
}
int main(){  
    Calc();  
    return 0;
}
