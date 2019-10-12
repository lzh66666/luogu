#include <bits/stdc++.h>

using namespace std;

int n,k;

typedef struct{
	int sum,num;
}Array;

Array a[100000];

bool cmp(Array x,Array y){
	if(x.sum != y.sum)
		return x.sum > y.sum;
	else
		return x.num < y.num;
}
int main(){
	scanf("%d%d",&n,&k);
	int E[11];
	
	for(int i = 1; i <= 10; i++){
		scanf("%d",&E[i]);
	}
	for(int i = 1; i <= n; i++){
		scanf("%d",&a[i].sum);
		a[i].num = i;
	}
	sort(a+1,a+1+n,cmp);

	for(int i = 1; i <=n; i++){
		a[i].sum += E[(i-1)%10+1];
	}
	sort(a+1,a+1+n,cmp);
	
	for(int i = 1; i <= k; i++){
		printf("%d ",a[i].num);
	}
    return 0;
}
