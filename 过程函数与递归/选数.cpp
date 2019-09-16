#include <stdio.h>

int m,n;
int c = 0;

int judge(int k){
	for(int i = 2;i < k;i++){
		if(k%i == 0){
			return 0;
		}
	}
	return 1;
}

void  Recursion(int i,int count,int sum,int a[]){
	if(count == m && judge(sum))
		c++;
	for(int j = i;j < n;j++)
		Recursion(j+1,count+1,sum + a[j],a);
}

int main(){
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	Recursion(0,0,0,a);
	printf("%d",c);
    return 0;
}
