#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a <= 10000 && b <= 9)
    	printf("%d",(a*10+b)/(1*10+9)); 
    return 0;
}
