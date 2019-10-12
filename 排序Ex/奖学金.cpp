#include <stdio.h> 
#include <string.h>

typedef struct{
	int no;
	int a[3];
	int sum;
}Student;

int n;
Student stu[301]; 

void sort(){
	int change = 1;
	for(int i = n-1; i >= 0 && change; i--){
		change = 0;
		for(int j = 0; j < i ;j++){
			if(stu[j].sum < stu[j+1].sum){
				Student temp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = temp;
				change = 1;
			}
		}
	}
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < i ;j++){
			if(stu[j].sum == stu[j+1].sum){
				if(stu[j].a[0] < stu[j+1].a[0]){
					Student temp = stu[j];
					stu[j] = stu[j+1];
					stu[j+1] = temp;
				}
			}	
		}
	}
	
}

int main(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d%d%d",&stu[i].a[0],&stu[i].a[1],&stu[i].a[2]);
		stu[i].no = i+1;
		stu[i].sum = stu[i].a[0]+stu[i].a[1]+stu[i].a[2];
	}
	sort();
	for(int i = 0; i < 5; i++){
		printf("%d %d\n",stu[i].no,stu[i].sum); 
	} 
    return 0;
}
