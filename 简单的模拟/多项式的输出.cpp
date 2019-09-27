#include <stdio.h>

int main() {
    int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 0; i <= n; i++){
		scanf("%d",&a[i]);
	}
	int m = n;
	int c = 0;
	int c1 = 0;
	for(int i = 0; i <= n; i++){\
		if(i == c && a[i] == 0){
			c++;
			if(i == n)
				printf("%d",0);
		}
		else if(a[i] > 0 && i != n){
			if(c1)
				printf("+");
			if(a[i] != 1)
				printf("%d",a[i]);
			if(m == 1)
				printf("x");
			else
				printf("x^%d",m);
			c1++;
		}
		else if(a[i] < 0 && i != n){
			if(a[i] != -1)
				if(m == 1)
					printf("%dx",a[i]);
				else	
					printf("%dx^%d",a[i],m);
			else{
				if(m == 1)
					printf("-x");
				else
					printf("-x^%d",m);
			}
			c1++;
		}
		else if(i == n){
			if(a[i] == 0)
				continue;
			if(a[i] > 0 && c != n){
				printf("+");
			}
			printf("%d",a[i]);
		}
		m--;
	}
    return 0;
}
