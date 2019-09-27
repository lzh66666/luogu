#include <stdio.h>

int main() {
    int m,n;
	scanf("%d%d",&m,&n);
	int a[m];
	for(int i = 0; i < m; i++){
		a[i] = -1;
	}
	int b;
	int c = 0;
	int p = 1;
	int k = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&b);
		for(int j = 0; j < m; j++){
			if(a[j] == b){
				p = 0;
				break;
			}	
		}
		if(c < m){
			if(p){
				a[c] = b;
				c++;
			}
			else{
				p = 1;
			}
		}
		else{
			if(p){
				a[k++] = b;
				c++;
				if(k == m){
					k = 0;
				}
			}
			else{
				p = 1;
			}
		}
	} 
	printf("%d",c);
    return 0;
}
