//#include<stdio.h>
//
//错误的代码,和为相同的数只算一次 
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	int c = 0;
//	
//	for(int i = 0;i < n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i = 0;i < n;i++){
//		for(int j = 0;j < n;j++){
//			if(j != i) 
//				for(int k = 0;k < n;k++){
//					if(j != k && k != i) 
//						if(a[i] == a[j] + a[k]) 
//							c++;
//				}
//		}
//	}
//	printf("%d",c/2);
//    return 0;
//}

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int c = 0;
	int b[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(j != i) 
				for(int k = 0;k < n;k++){
					if(j != k && k != i) 
						if(a[i] == a[j] + a[k] && b[i] == 0){
							c++;
							b[i] = 1;
						} 
				}
		}
	}
	printf("%d",c);
    return 0;
}
