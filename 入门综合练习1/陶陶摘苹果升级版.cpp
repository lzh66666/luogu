#include<stdio.h>

int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	int a,b;
	scanf("%d%d",&a,&b);
	int x[n];
	int y[n];
	int num[n];
	
	int count = 0;
	for(int i = 0; i < n; i++){
		scanf("%d%d",&x[i],&y[i]);
		num[i] = -1;
		if(a+b >= x[i]){
			num[count++] = y[i];
		}
	}
	int change = 1;
	for(int i = count-1; i >= 0 && change; i--){
		change = 0;
		for(int j = 0; j < i; j++){
			if(num[j] > num[j+1]){
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
				change = 1;
			}
		}
	}
	int c = 0;	
	for(int i = 0; i < count; i++){
		if(s-num[i] >= 0){
			s -= num[i];
			c++;
		}
	}
	printf("%d",c);
    return 0;
}

