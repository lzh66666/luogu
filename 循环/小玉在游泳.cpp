#include<stdio.h>

int main(){
	int i = 1;
	double x,m = 2.0,sum=2.0;
	scanf("%lf",&x);
	while(sum < x){
		m = m*0.98;
		sum += m;
		i++;
	} 
	printf("%d",i);
    return 0;
}
