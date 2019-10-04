#include <stdio.h>

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[n];
	for(int i = 0; i < n; i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	
	int change = 1;
	for(int i = n-1; i > 0 && change; i--){
		change = 0;
		for(int j = 0; j < i; j++){
			if(b[j] < b[j+1]){
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
				
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				change = 1;
			}
		}
	}
	
	int x = m*1.5;
	int y = x;
	
	for(int i = y; i <= n; i++){
		if(b[i] == b[y-1])
			x++;
		else
			break;
	}
	
	printf("%d %d\n",b[y-1],x);
	
	for(int i = 0; i < x ; i++){
		int c = 0;
		if(b[i] == b[i+1]){
			for(int j = i; j < x-1; j++){
				if(b[j] == b[j+1]){ 
					c++;
				}
				else
					break; 
			}
			change = 1;
			for(int j = i+c; j > i && change; j--){
				change = 0;
				for(int k = i ; k < j; k++){
					if(a[k] > a[k+1]){
						int	temp = a[k];
						a[k] = a[k+1];
						a[k+1] = temp;	
						change = 1;
					}	
				}
			}
			i = i+c-1;	
		} 
	}
	
	for(int i = 0; i < x; i++){
		printf("%d %d\n",a[i],b[i]);
	}
    return 0;
}
