#include <stdio.h>
#include <string.h>

char a[102];
char b[102];
char c[102];

int main(){ 
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
//	gets(a);
//	gets(b);
//	gets(c);
	
	int flag1 = 0;
	int flag2 = 0;
	int count = 0;
	
	for(int i = 0 ; i < strlen(a) ; i++){
		for(int j = 0 ; j < strlen(a) ; j++){
			if(a[i] == a[j]){
				if(b[i] != b[j]){
					flag1 = 1;
					break;
				}
			}
		}
	}
	
	for(int j = 0; j < strlen(a); j++){
		for(int i = 0 ; i < strlen(a) ; i++){
			if(b[i] != b[j]){
				count++;
			}
		}	
		if(count < 25){
			flag2 = 1;
			break;
		} else{
			count = 0;
		}
	}
	if(flag1 == 0 && flag2 == 0){
		for(int j = 0 ; j < strlen(c) ; j++){
			for(int i = 0 ; i < strlen(a) ; i++){
				if(c[j] == a[i]){
					c[j] = b[i];
					break;
				}
			}	
		}
//		puts(c);
		printf("%s",c);
	}
	
	else{
		printf("Failed");
	}
	
    return 0;
}
