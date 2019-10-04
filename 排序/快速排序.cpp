#include <stdio.h>

void QuickSort(int a[],int low,int high){
    int mid=a[(low+high)/2];
    int i=low,j=high;
    do{
        while(a[low]<mid) 
			low++;
        while(a[high]>mid) 
			high--;
        if(low<=high){
            int temp = a[low];
            a[low] = a[high];
            a[high] = temp;
            low++;
            high--;
        }
    }while(low<=high);
    if(i<high) 
		QuickSort(a,i,high);
    if(low<j) 
		QuickSort(a,low,j);
}

 
int main() {
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 1; i <= n; i++){
		scanf("%d",&a[i]);
	}
	QuickSort(a,1,n);
	for(int i = 1; i <= n; i++){
		printf("%d ",a[i]);
	}
    return 0;
}
