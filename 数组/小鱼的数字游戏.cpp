#include <stdio.h>

int main(){
    int i = 0;
    int a[100]={0};
    while(i == 0 || a[i-1]){
    	scanf("%d",&a[i]);
    	i++;
	}
	while(i >= 2){
		printf("%d ",a[i-2]);
		i--;
	}
    return 0;
}
