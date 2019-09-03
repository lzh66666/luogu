#include<stdio.h>

int main(){
	int x,day;
	int j;
	int s=0;
	scanf("%d%d",&x,&day);
	for(int i = 0;i < day;i++,x++){
		if(x%7 == 0){
			x=0;
			continue;
		}	
		else if((x+7)%7 == 6)
			continue;
		s += 250;
	} 
	printf("%d",s);
    return 0;
}
