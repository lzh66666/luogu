#include<stdio.h>

int main(){
	int a[10];
	for(int i = 0;i < 10;i++){
		scanf("%d",&a[i]);
	} 
	int count = 0;
	int h;
	scanf("%d",&h);
	for(int i = 0;i < 10;i++){
		if(h+30 >= a[i])
			count++;
	}
	printf("%d",count);
    return 0;
}
