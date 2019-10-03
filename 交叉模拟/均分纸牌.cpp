#include <stdio.h>

int n;
int c = 0;

void solve(int a[],int aver){
	for(int i = 0; i < n; i++){
		a[i] -= aver;
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 0)
			continue;
		a[i+1] += a[i];
		c++;
	}
}

int main() {
	scanf("%d",&n);
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		sum += a[i];
	} 
	int aver = sum /n;
	solve(a,aver);
	printf("%d",c);
    return 0;
}
