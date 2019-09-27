#include <stdio.h>

int main() {
    int n;
	scanf("%d",&n);
	int x[n][2];
	int y[n][2];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++){
			scanf("%d%d",&x[i][j],&y[i][j]);
		}
	} 
	int x1,y1;
	scanf("%d%d",&x1,&y1);
	
	int c = -1; 
	for(int i = 0; i < n; i++){
		if(x1 >= x[i][0] && y1 >= y[i][0] && x1 <= x[i][1]+x[i][0] && y1 <= y[i][1]+y[i][0])
			c = i+1;
	} 
	printf("%d",c);
    return 0;
}
