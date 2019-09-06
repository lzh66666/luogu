#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i = 0;i < n;i++){
		if(i == 0)
			printf("%d ",i);
		else{
			int c = 0;
			for(int j = i-1;j >= 0;j--){
				if(a[i] > a[j] )
					c++;
			}
			printf("%d ",c);	
		}
		
	}
    return 0;
}
