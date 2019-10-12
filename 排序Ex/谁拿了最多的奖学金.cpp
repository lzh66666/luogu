#include <stdio.h> 
#include <string.h>

int n;
int sum = 0;
typedef struct{
	char name[21];
	int q_score;
	int c_score;
	char ganbu;
	char sheng;
	int num;
	int prize;
}Student;

Student stu[102],s;

void judge(){
	for(int i = 0; i < n; i++){
		if(stu[i].q_score > 80 && stu[i].num >= 1)
			stu[i].prize += 8000;
		if(stu[i].q_score > 85 && stu[i].c_score > 80)
			stu[i].prize += 4000;
		if(stu[i].q_score > 90)
			stu[i].prize += 2000;
		if(stu[i].q_score > 85 && stu[i].sheng == 'Y')
			stu[i].prize += 1000;
		if(stu[i].c_score > 80 && stu[i].ganbu == 'Y')
			stu[i].prize += 850; 
		sum += stu[i].prize;
	}
}
void sort(){
	s = stu[0];
	for(int i = 1 ; i < n ; i++){
		if(stu[i].prize > s.prize)
			s = stu[i];
	}
}
int main(){
	scanf("%d",&n);
	getchar();
	for(int i = 0 ; i < n; i++){
		scanf("%s",stu[i].name);
		scanf("%d%d",&stu[i].q_score,&stu[i].c_score);
		getchar();
		scanf("%c %c",&stu[i].ganbu,&stu[i].sheng);
		getchar();
		scanf("%d",&stu[i].num);
		stu[i].prize = 0;
	}
	judge();
	sort();
	printf("%s\n%d\n%d",s.name,s.prize,sum);
    return 0;
}
