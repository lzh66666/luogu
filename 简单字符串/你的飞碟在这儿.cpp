#include<stdio.h>

int main(){
//	COMETQ  HVNGAT  GO 
//	ABSTAR  USACO   STAY

	char a[7];//a[6],b[6]»á±¨´í 
	char b[7]; 
	scanf("%s",a);
	scanf("%s",b);
	
	int c,mul1 = 1,mul2 = 1;
	
	int i = 0;
	while(a[i]){
		c = a[i] - 'A' + 1;
		mul1 *= c;
		i++;
	}
	i = 0;
	while(b[i]){
		c = b[i] - 'A' + 1;
		mul2 *= c;
		i++;
	}
	if(mul1%47 == mul2%47)
		printf("GO");
	else
		printf("STAY");
    return 0;
}
