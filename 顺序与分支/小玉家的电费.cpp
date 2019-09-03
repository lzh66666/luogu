#include <stdio.h>

int main() {
    int w;
    double q=0;
	scanf("%d",&w);
	if(w <= 150) 
		q = w*0.4463;
	else if(w <= 400)
		q = 150*0.4463 + (w - 150)*0.4663;
	else
		q = 150*0.4463 + (400 - 150)*0.4663 + (w - 400)*0.5663;
	q = (int)(q*10 + 0.5)/10.0;
	printf("%0.1lf",q);
    return 0;
}
