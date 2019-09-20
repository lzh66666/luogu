#include <stdio.h>

int a[10];
int b[10000][10];
int n;

void ingredients(int s,int i,int &count){
	if(i == 10){
		if(s == n){
			for(int j = 0; j < 10; j++)
				b[count][j] = a[j];
			count++;
		}
	}
	else if(s >= n);
	else{
		for(int j = 1; j <= 3; j++){
			a[i] = j;
			ingredients(s+j,i+1,count);
		}
	}
}

int main(){
	scanf("%d",&n);
	int count = 0;
	ingredients(0,0,count);
	printf("%d\n",count);
	for(int i = 0; i < count; i++){
		for(int j = 0; j < 10; j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
    return 0;
}

