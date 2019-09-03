#include <stdio.h>

int main() {
   int a,b;
   int max = 0,sum = 0;
   int j;
   for(int i = 1;i <= 7;i++){
		scanf("%d%d",&a,&b);
		sum = a+b;
		if(sum > max && sum > 8){
			max = sum;
			j = i;
		}
   } 
   printf("%d",j);
    return 0;
}
