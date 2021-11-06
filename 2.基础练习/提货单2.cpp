#include<stdio.h>
#include<string.h>
struct good{
	char MC;
	double DJ;
	int SL;
};
int main(){
	int N;
	double All=0.0;
	scanf("%d",&N);
	struct good *g = new struct good[N];
	for(int i=0;i<N;i++){
		scanf("%s %lf %d",&g[i].MC,&g[i].DJ,&g[i].SL);
		All += g[i].DJ*g[i].SL;
	}
	printf("%lf",All);
	return 0;
}
