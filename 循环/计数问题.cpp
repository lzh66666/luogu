#include<stdio.h>

int main(){
	int a[10]={0}; 
	int n,x;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		int j = i;
		while(j > 0){
			a[j%10]++;
			j /= 10;
		}
	}
	scanf("%d",&x);
	printf("%d",a[x]);	
    return 0;
}
