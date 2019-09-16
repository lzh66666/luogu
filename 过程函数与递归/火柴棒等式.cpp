#include <stdio.h>

int main(){
	int a[2000] = {6,2,5,5,4,5,6,3,7,6};
	for(int i = 10;i<2000;i++){
		if(i<100)
	 		a[i] = a[i%10]+a[i/10];
	 	else
	 		a[i] = a[i%10]+a[i/10%10]+a[i/100];
	}
	int n;
	scanf("%d",&n);
	int count = 0;
	for(int i = 0;i<1000;i++){
		for(int j = 0;j<1000;j++){
			if(a[i+j]+a[i]+a[j]+4 == n){
				count++;
				printf("%d = %d+%d\n",i+j,i,j);
			}
					
		}
	} 
	printf("%d",count);
    return 0;
}
