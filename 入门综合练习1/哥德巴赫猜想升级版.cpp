#include <stdio.h>
#include <math.h>

int Prime_number(int num){
	for(int i = 2; i <= sqrt(num); i++){
		if(num%i == 0){
			return 0;
		}
	}
	return 1;
} 
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 2; i < n; i++){
		for(int j = 2; j < n; j++){
			if(Prime_number(i) && Prime_number(j) && n-i-j >= 2 && Prime_number(n-i-j)){
				printf("%d %d %d",i,j,n-i-j);
				return 0;
			}
		}
	}
    return 0;
}

