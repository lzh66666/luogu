#include <stdio.h>
#include <math.h>

int m,n,k;

typedef struct{
	int type;
	int data;
}Array;

typedef struct{
	Array a[22][22];
	int i,j;
	int type;
}S;

void Max(S &s){
	int max = 0;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(s.a[i][j].type ==1 && max < s.a[i][j].data){
				max = s.a[i][j].data;
				s.i = i;
				s.j = j;
			}
		}
	}
	if(max == 0){
		s.a[s.i][s.j].data = 0;
	}
	s.a[s.i][s.j].type = 0;
}

int main() {
	scanf("%d%d%d",&m,&n,&k);
	S s;
	int i,j;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			scanf("%d",&s.a[i][j].data);
			if(s.a[i][j].data == 0)
				s.a[i][j].type = 0;
			else
				s.a[i][j].type = 1;
		}
	}
	
	Max(s);
	i = 0;
	j = s.j;
	int sum = 0;
	int c = 0;
	while(s.a[s.i][s.j].data != 0){
		sum += (abs(s.i-i)+abs(s.j-j))+1;
		if(sum+s.i<=k){
			c += s.a[s.i][s.j].data;
		}
		i = s.i;
		j = s.j;
		Max(s);
	}
	printf("%d",c);
    return 0;
}
