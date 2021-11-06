#include <stdio.h>
int main(){
    char c;
    int color[128] = {0};
    while((c = getchar()) != '\n')
		color[c-'0']++;
    while((c = getchar()) != '\n')
		color[c-'0']--;
    int more = 0,less = 0;
    for(int i=0;i<128;i++){
        if(color[i] > 0)
			more += color[i];
        if(color[i] < 0)
			less -= color[i];
    }
    if(less)
		printf("No %d", less);
    else
		printf("Yes %d", more);
    return 0;
}
