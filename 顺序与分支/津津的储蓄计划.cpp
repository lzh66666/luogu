#include <stdio.h>

int main() {
   int a;
   int b = 0;
   int j = 0; 
   int sum = 0;
   for(int i = 1;i <= 12;i++){
   		scanf("%d",&a);
   		if(b+300 < a){
		   j = i;
		   b = 0;
		}
		else{
			if(300+b-a >= 100)
				sum += ((300+b-a)/100*100);
			b = ((300+b-a)%100);
		}
   } 
   if(j)
		printf("-%d",j);
	else
		printf("%d",(int)(sum*1.2)+b);
    return 0;
}
