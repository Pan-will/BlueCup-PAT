#include<stdio.h>
#include<math.h> 
long getgcd(long a, long b){
    long r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

void godie(long fenzi, long fenmu) {
    if (fenmu == 0) {
        printf("Inf");
        return;
    }
    int sign = 1;
    long gcd;
    if(fenzi < 0){
        fenzi = -fenzi;
        sign = sign * -1;
    }
    if(fenmu < 0){
        fenmu = -fenmu;
        sign = sign * -1;
    }
    gcd = getgcd(fenzi, fenmu);
    fenzi = fenzi / gcd;
    fenmu = fenmu / gcd;

    if(sign == -1)
		printf("(-");
    if(fenmu == 1) {
        printf("%ld", fenzi); 
    }else if(fenzi > fenmu){
        printf("%ld %ld/%ld", fenzi/fenmu, fenzi%fenmu, fenmu);
    }else {
        printf("%ld/%ld", fenzi, fenmu); 
    }
    if(sign == -1)
		printf(")");
}
int main(){  
	long a1,b1,a2,b2;
	char op[4] = {'+', '-', '*', '/'};
	scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
	
	for(int i=0;i<4;i++){
		godie(a1,b1);
		printf(" %c ",op[i]);
		godie(a2,b2);
		printf(" = ");
		switch (op[i]) {
            case '+':
                godie(a1*b2+a2*b1, b1*b2); 
                break;
            case '-':
                godie(a1*b2-a2*b1, b1*b2);
                break;
            case '*':
                godie(a1*a2, b1*b2);
                break;
            case '/':
                godie(a1*b2, b1*a2);
                break;
    	}
    	printf("\n");
	}
    return 0;
}  
