#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int k = 0;
	for(int i = 0 ; i < n; i++){
		scanf("%d",&a[i]);
		for(int j = i-1 ; j >= 0 ; j--){
			if(a[j] == a[i]){
				a[i] = -1;
				break;
			}		
		}
	}
	
	for(int i = 0 ; i < n; i++){
		if(a[i] != -1){
			b[k++] = a[i];
		}
	}
	int change = 1;
	for(int i = k-1; i > 0 && change; i--){
		change = 0;
		for(int j = 0; j < i ; j++){
			if(b[j] > b[j+1]){
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
				change = 1;
			}
		}
	}
	printf("%d\n",k);
	for(int i = 0; i < k; i++){
		printf("%d ",b[i]);
	}
    return 0;
}
