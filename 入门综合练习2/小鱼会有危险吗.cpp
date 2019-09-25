#include <stdio.h>

//int main(){
//	double s,x;
//	scanf("%lf%lf",&s,&x);
//	double z = 7.0;
//	double sum = 0.0;
//	for(int i = 0; i < 100; i++){
//		sum += z;
//		z *= 0.98;
//		printf("%lf ",sum);
//		if(s <= x && x+s >= sum){
//			printf("y");
//			break;
//		}
//		else if(sum >= s-x && sum+z <= s+x){
//			printf("y");
//			break;
//		}
//		else if(sum+z > s+x ){
//			printf("n");
//			break;
//		}
//	}
//    return 0;
//}

int main(){
    double v=7,s,x,l=0;
    scanf("%lf%lf",&s,&x);
    while(l<s-x){
        l+=v;
        v*=0.98;
    }
    if(v*0.98<=s+x-l)
		printf("y");
    else 
		printf("n");
}
