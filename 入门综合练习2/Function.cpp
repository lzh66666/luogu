#include <bits/stdc++.h>
//³¬Ê± 
//int w(int a,int b,int c){
//	if(a <= 0 || b <= 0 || c <= 0){
//		return 1;
//	}
//	else if(a > 20 || b > 20 || c>20){
//		return w(20,20,20);
//	}
//	else if(a < b && b <c){
//		return w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
//	} 
//	else{
//		return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
//	}
//}
//int main(){
//    int a[1000],b[1000],c[1000],d[1000];
//    int j = 0; 
//    for(int i = 0; i < 1000; i++){
//    	scanf("%d%d%d",&a[i],&b[i],&c[i]);
//    	if(a[i] == -1 && b[i] == -1 && c[i] == -1){
//    		break;
//		}
//		d[j++] = w(a[i],b[i],c[i]);
//	}
//	for(int i = 0; i < j; i++){
//		printf("w(%d, %d, %d) = %d\n",a[i],b[i],c[i],d[i]);
//	}
//    return 0; 
//}

//ÓÅ»¯

int f[30][30][30];
int w(int a,int b,int c){
	if(a <= 0 || b <= 0 || c <= 0){
		return 1;
	}
	if(a > 20 || b > 20 || c>20){
		return w(20,20,20);
	}
	if(a < b && b <c){
		if(f[a][b][c] == -1)
			f[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	} 
	else if(f[a][b][c] == -1){
		f[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	return f[a][b][c];
}

int main(){
	memset(f,-1,sizeof(f));
	int a[1000],b[1000],c[1000],d[1000];
    int j = 0; 
    for(int i = 0; i < 1000; i++){
    	scanf("%d%d%d",&a[i],&b[i],&c[i]);
    	if(a[i] == -1 && b[i] == -1 && c[i] == -1){
    		break;
		}
		d[j++] = w(a[i],b[i],c[i]);
	}
	for(int i = 0; i < j; i++){
		printf("w(%d, %d, %d) = %d\n",a[i],b[i],c[i],d[i]);
	}
    return 0; 
} 
