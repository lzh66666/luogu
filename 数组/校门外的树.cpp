#include<stdio.h>

int main(){
	int L,M;
	scanf("%d%d",&L,&M);
	int a[L+1];
	int b[2];
	int c = 0;
	for(int i = 0;i <= L;i++){
		a[i] = 0;
	}
	for(int i = 0;i < M;i++){
		for(int j = 0;j < 2;j++){
			scanf("%d",&b[j]);
		}
		for(int j = 0;j <= L;j++){
			if((b[0] <= j) && (b[1] >= j))
				a[j] = 1;
		}
	}
	for(int i = 0;i <= L;i++){
		if(a[i] == 0)
			c++;
	}
	printf("%d",c);
    return 0;
}
