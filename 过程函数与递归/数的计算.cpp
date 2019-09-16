#include <stdio.h>

//int main(){
//    int n,a[1001];
//    a[0]=a[1]=1;
//    scanf("%d",&n);
//    for(int i = 2;i <= n;i++){
//        if(i%2 == 0){
//            a[i] = a[i-1]+a[i/2];
//        }
//		else{
//            a[i] = a[i-1];
//        }
//    }
//    printf("%d",a[n]);
//}

int main(){
	int n;
    scanf("%d",&n);
    int f[1001]={0};
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=i/2;j++){
            f[i]+=f[j];
        }
        f[i]++;
    }
    printf("%d",f[n]);
    return 0;
}
