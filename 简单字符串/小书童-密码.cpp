#include <stdio.h>

int main(){
	char a[51];
	int n;
	scanf("%d%s",&n,a);
	int i = 0;
	while(a[i]){
		putchar((a[i]-'a'+n)%26+'a');
		i++; 
	} 
    return 0;
}
