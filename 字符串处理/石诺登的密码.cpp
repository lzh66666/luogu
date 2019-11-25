#include<bits/stdc++.h>
using namespace std;

int main(){
    char num[28][10]={"zero","one","two","three","four","five",
	"six","seven","eight","nine","ten","eleven","twelve", "thirteen", 
	"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", 
	"nineteen", "twenty","a","both","another","first","second","third"};
	
	int quyu[28]={0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
	
	int a[8];
	int k = 0;
	int flag = 0;
	
	char str[30];
	
	for(int i = 1; i <= 6; i++){
		scanf("%s",&str);
		for(int j = 1 ; j <= 26; j++){
			if(!strcmp(str,num[j])){
				a[++k] = quyu[j];
				break;
			}
		}
	}
	sort(a+1,a+k+1);
	for(int i = 1 ; i <= k; i++){
		if(flag)
			printf("%.2d",a[i]);
		else{
			if(a[i]){
				printf("%d",a[i]);
				flag = 1;
			}
		}
	}
	
	if(flag == 0){
		printf("%d",0);
	}
	
    return 0;
}
