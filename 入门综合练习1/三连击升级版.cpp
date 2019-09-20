#include<stdio.h>
#include<string.h>

int a[10];
int count = 0; 
int main(){
	int d,e,f;
	scanf("%d%d%d",&d,&e,&f);
    for (int x=1;x<=1000/f;x++){
        int i=x*d,j=x*e,k=x*f;
        if(j>999 || k>999)
        	break;
        int o=i,p=j,q=k;
        int flag=0;
        memset(a,0,sizeof(a));
        while(i>0){
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
        for (int w=1;w<=9;w++){
            if(a[w]!=1) flag=1;
        }
        if(flag==0){
			printf("%d %d %d\n",o,p,q);
			count++;
		}
			
    }
    if(!count)
    	printf("No!!!");
    return 0;
}

