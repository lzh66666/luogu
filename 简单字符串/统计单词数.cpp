#include <stdio.h>
#include <string.h>
int main(){
	char a[11];
	char b[1000001];
	
	gets(a);
	gets(b);
	
	int i = 0;
	while(a[i]){
		if(a[i] >= 'a')
			a[i] -= ('a' - 'A');
		i++;
	} 
	i = 0;
	while(b[i]){
		if(b[i] >= 'a')
			b[i] -= ('a' - 'A');
		i++;
	}
//	puts(a);
//	puts(b);
	int j,count = 0;
	int k = -1;
	for(i = 0,j = 0; b[i] != '\0'; ++i){
        if((i == 0 || b[i-1] == ' ' || j) && b[i] == a[j]){
        	++j;
            if(a[j] == '\0' && (b[i+1] == '\0' || b[i+1] == ' ')){
                if(k == -1) 
					k = i+1-j;
                count++;
            }
        }
		else 
			j=0;
    }
    
    if(count == 0)
		printf("-1\n"); 
	else
		printf("%d %d",count,k);
    return 0;
}
