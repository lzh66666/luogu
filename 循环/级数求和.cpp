#include<stdio.h>

int main(){
	int k;
	double sum = 1.0;
    int i = 1,j = 2;
    scanf("%d",&k);
    while(sum <= (double)k){
    	sum += 1.0*i/j;
    	j++;
	}
	printf("%d",j-1);
    return 0;
}
