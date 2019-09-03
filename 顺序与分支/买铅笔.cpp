#include <stdio.h>

int main() {
    int a,b,c,d;
    int p = 0;
    scanf("%d",&a);
    for(int i = 0;i < 3;i++){
    	scanf("%d%d",&b,&c);
    	d = a/b;
    	if(d*b != a)
    		d++;
    	if(i == 0 || p > d*c)
    		p = d*c;	
	}
	printf("%d",p);
    return 0;
}
