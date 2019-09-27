#include <stdio.h>

int main() {
    int m,n,k,l,d;
	scanf("%d%d%d%d%d",&m,&n,&k,&l,&d);
	int xi,yi,pi,qi;
	int x[1001],y[1001];
	int c[1001],o[1001];
	for(int i = 0; i < 1001; i++){
		x[i] = 0;y[i] = 0;c[i] = 0;o[i] = 0;
	}
	for(int i = 0; i < d; i++){
		scanf("%d%d%d%d",&xi,&yi,&pi,&qi);
		int min;
		if(xi == pi){
			min = yi > qi?qi:yi;
			x[min]++;
		}
		else{
			min = xi > pi?pi:xi;
			y[min]++;
		}	
	}
	for(int i = 0; i < k; i++){
		int max = -1;
		int p;
		for(int j = 0; j < m;j++){
			if(y[j] > max){
				max = y[j];
				p = j;
			} 
		}
		y[p] = 0;
		c[p]++;
	}
	for(int i = 0; i < l; i++){
		int max = -1;
		int p;
		for(int j = 0; j < n;j++){
			if(x[j] > max){
				max = x[j];
				p = j;
			} 
		}
		x[p] = 0;
		o[p]++;
	}
	for(int i = 0; i < 1001; i++){
		if(c[i])
			printf("%d ",i);
	}
	printf("\n");
	for(int i = 0; i < 1001; i++){
		if(o[i])
			printf("%d ",i);
	}
    return 0;
}
