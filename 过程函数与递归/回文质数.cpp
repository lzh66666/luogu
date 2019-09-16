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


int Palindrome(int num){
	int num1 = num;
	int num2 = 0;
	while(num1 > 0){
		num2 = num2*10+num1%10;
		num1 /= 10;
	}
	if(num2 == num)
		return 1;
	else
		return 0;
}

int main(){
//	5 500
//	超过9989900时会超时上面的质数判断应用sqrt(),和下面的判断都应注意 
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%2 == 0){
		a = a+1;
	}
//	printf("%d",Prime_number(9));
//	printf("%d",Palindrome(120));
	for(int i = a; i <= b;i = i+2){
		
		if(Palindrome(i))
			if(Prime_number(i)){
				printf("%d\n",i);
				if(i == 9989899)
					return 0;
			}
	}
    return 0;
}
