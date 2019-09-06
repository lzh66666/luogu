#include <stdio.h>

//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n],b[n];
//	int c = 0;
//	for(int i = 0;i < n;i++){
//		scanf("%d",&a[i]);
//		b[i] = 1;
//	}
//	for(int i = 0;i < n-1;i++){
//		int k = i;
//		for(int j = i+1;j < n;j++){	
//			if(a[k] < a[j]){
//				k = j;
//				b[c]++;
//			}
//			else
//				break;
//		}
//		c++;
//	}
//	int max = b[0];
//	for(int i = 1;i < n;i++){
//		if(max < b[i])
//			max = b[i];
//	}
//	printf("%d",max);
//    return 0;
//}

int main()
{
    int n,max=0,b=0;
    scanf("%d",&n);
    int a[n];
    int c = 0;
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
        if (b < a[i]){
			c++;
			b = a[i];
		}
        else
            if (max < c){
				max = c;
				b = a[i];
				c = 1;
			}
            else {
                b = a[i];
                c = 1;
            }
    }
    if (max == 0) 
		printf("%d\n",n);
    else  
		printf("%d\n",max);
    return 0;
}
