#include <stdio.h>
#include <string.h>

int main(){
	char a[101],b[101],c[101],d[101];
	int e['Z'+2]; 
	int i;
	for(i = 'A';i <= 'Z';i++){
		e[i] = 0;
	}
	gets(a);gets(b);gets(c);gets(d);
//	puts(a);puts(b);puts(c);puts(d);
	i = 0;
	while(a[i]){
		if(a[i] >= 'A' && a[i] <= 'Z')
			e[a[i]]++;
		i++;
	}
	i = 0;
	while(b[i]){
		if(b[i] >= 'A' && b[i] <= 'Z')
			e[b[i]]++;
		i++;
	}
	i = 0;
	while(c[i]){
		if(c[i] >= 'A' && c[i] <= 'Z')
			e[c[i]]++;
		i++;
	}
	i = 0;
	while(d[i]){
		if(d[i] >= 'A' && d[i] <= 'Z')
			e[d[i]]++;
		i++;
	}
	int max = e['A'];
	int j = 0;
	for(i = 'B';i <= 'Z';i++){
		if(max < e[i]){
			max = e[i];
			j = i;
		}		
	}
	int m = max;
	for(i = 0;i < max;i++){
		for(int k = 'A';k <= 'Z';k++){
			if(e[k] >= m)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
		m--;
	}
	for(i = 0;i < 26;i++){
		printf("%c ",'A'+i);
	}
    return 0;
}
