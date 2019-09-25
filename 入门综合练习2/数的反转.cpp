#include <stdio.h>

int main() {
    int n;
	scanf("%d",&n);
	int  k = 0;
	while(n){
		k = k*10 + n%10;
		n /= 10;
	}
	printf("%d",k);
    return 0;
}
