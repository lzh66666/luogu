#include <stdio.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	char b[n][11];
	for(int i = 0; i < n; i++){
		scanf("%d%s",&a[i],b[i]);
	}
	int d,s;
	int c = 0;
	for(int  i = 0; i < m; i++){
		scanf("%d%d",&d,&s);
		if(d == a[c]){
			s *= -1;
		}
		c = (c+s+n)%n;
	}
	printf("%s",b[c]);
	
    return 0;
}
