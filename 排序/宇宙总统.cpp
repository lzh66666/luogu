#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	
	char a[1000];
	char b[1000];
	b[0] = '\0';
	int d = 1;
	
	for(int i = 0; i < n ; i++){
		scanf("%s",a);
		if(strlen(a) < strlen(b));
		else if(strlen(a) == strlen(b)){
			for(int j = 0; j < strlen(a) ; j++){
				if(a[j] < b[j])
					break;
				else if(a[j] > b[j]){
					strcpy(b,a);
					d = i+1;
					break;
				}
				
			}
		}
		else{
			strcpy(b,a);
			d = i+1;
		}
		a[0] = '\0';
	}
	
	printf("%d\n",d);
	puts(b);
    return 0;
}
