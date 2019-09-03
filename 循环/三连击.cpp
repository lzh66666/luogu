//#include <stdio.h>
//
//int main() {
//	int a[3],b[3],c[3];
//    for(int i = 123;i <= 333;i++){
//    	a[0] = i/100;
//    	b[0] = i/10%10;
//    	c[0] = i%10;
//    	if(a == b || a == c || b == c || a == 0 || b == 0 || c == 0)
//    		continue;
//    	int j = i*2;
//    	a[1] = j/100;
//    	b[1] = j/10%10;
//    	c[1] = j%10;
//    	int k = i*3;
//    	a[2] = k/100;
//    	b[2] = k/10%10;
//    	c[2] = k%10;
//    	int sum = 0;
//    	int ji = 1;
//    	for(int m =0;m < 3;m++){
//    		sum += a[m] + b[m] + c[m];
//    		ji *= a[m] * b[m] * c[m];
//		}
//		if(sum == 1+2+3+4+5+6+7+8+9 && ji == 1*2*3*4*5*6*7*8*9){
//			printf("%d %d %d\n",i,j,k);
//		}
//	} 
//    return 0;
//}

#include<stdio.h>
#include<string.h>
int a[10];
int main(){
    for (int x=123;x<=329;x++){     //枚举
        int i=x,j=x*2,k=x*3;
        int o=i,p=j,q=k;
        int flag=0;                         //清零
        memset(a,0,sizeof(a));
        while(i>0){                        //取数
            a[i%10]++;
            i/=10;
        }
        while(j>0){
            a[j%10]++;
            j/=10;
        }
        while(k>0){
            a[k%10]++;
            k/=10;
        }
        for (int w=1;w<=9;w++){  //判断
            if(a[w]!=1) flag=1;
        }
        if(flag==0) 
			printf("%d %d %d\n",o,p,q);  //输出
    }
    return 0;
}
