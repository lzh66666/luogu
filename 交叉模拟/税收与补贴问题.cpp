#include <stdio.h>
#include <math.h>
int main() {
	
    int a[100001];
    a[0]=0;
    
	int n;
	scanf("%d",&n);
	
	int s,p,j = 0;
	scanf("%d%d",&s,&p);
	int r = s;
	
	while(s != -1 && p != -1){
		a[s] = p;
		for(int i = j+1; i < s;i++) {
			a[i] = a[i-1]+(p-a[j])/(s-j);
		}
		j = s;
		scanf("%d%d",&s,&p);	
	}
	scanf("%d",&s);
	while(a[j] >= s){
		j++;
		a[j] = a[j-1]-s;
	}
	for(int i = r; a[i]; i++){
    	printf("%d ",a[i]);
	}
	
	double result = 0.0;
	double c = 0.0;
	double max = 100001;
	double min = 0.0;
	
	for(int i = r; i <= j; i++){
//		(n-r+x)*a[n] >= (x+i-r)*a[i]预售价的利润≥其他价的利润 
//		n为期望价格,r为成本价,求x的解 
		result = 1.0*(a[n]*(n-r)-a[i]*(i-r))/(a[i]-a[n]);
		c = a[n] - a[i];
		if(c>0){
			min = min>result?min:result;
		}
		else {
			max = max>result?result:max;
		}
		printf("\n%lf %lf\n",min,max) ;
	}
	
	if(min>0){
		printf("%d",(int)ceil(min));
	}
	else if(max < 0){
		printf("%d",(int)floor(max));
	}
	else if(min > max){
		printf("NO SOLUTION");
	}
	else{
		printf("0");
	}
	
    return 0;
}
