#include <stdio.h>

int main(){
	int n;
	int i = 0;
	int j = 0;
    scanf("%d", &n);
    while(n > j) {
        i++;
        j += i;
    }
    if(i%2 == 1)
        printf("%d/%d",j-(n-1),i-(j-(n-1))+1);
    else
        printf("%d/%d",i-(j-(n-1))+1,j-(n-1));
    return 0;
}


