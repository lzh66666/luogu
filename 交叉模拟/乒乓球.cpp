#include <stdio.h>
#include <math.h>

void solve(int a[],int fz){
	int w = 0;
	int l = 0;
	for(int i = 0;;i++){
		if(a[i] == 1)
			w++;
		else if(a[i] == 2)
			l++;
		else if(a[i] == 0){
			printf("%d:%d",w,l);
			break;
		}
		if(abs(w-l) >= 2){
			if(l>=fz || w>=fz){
				printf("%d:%d\n",w,l);
				w = 0;
				l = 0;
			}
		}
	}
} 

int main() {
	int a[62501];
	char s;
	
	s = getchar();
	for(int i = 0; s && s != 'E'; i++){
		if(s == '\r' || s == '\n')
			a[i] = 3;
		else if(s == 'W')
			a[i] = 1;
		else{
			a[i] = 2;
		}
		s = getchar();
	}
	
	solve(a,11);
	printf("\n\n");
	solve(a,21);
    return 0;
}
