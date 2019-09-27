#include <stdio.h>
int main() {
	int m[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
    int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int p[a];
	int q[b];
	for(int i = 0; i < a; i++){
		scanf("%d",&p[i]);
	}
	for(int i = 0; i < b; i++){
		scanf("%d",&q[i]);
	}
	int c = 0;
	int d = 0;
	for(int i = 0; i < n; i++){
		if(m[p[i%a]][q[i%b]]){
			c++;
		}
		if(m[q[i%b]][p[i%a]]){
			d++;
		}
	}
	printf("%d %d",c,d);
    return 0;
}
