#include<bits/stdc++.h>
using namespace std;

int n;

typedef struct{
	int j;
	int data;
}SS; 
 
SS a[1002];

bool cmp(SS a,SS b){
	if(a.data != b.data){
		return a.data < b.data;
	}else{
		return a.j < b.j;
	}
}
int main(){
    cin>>n;
    
    for(int i = 0; i < n; i++){
    	cin>>a[i].data;
    	a[i].j = i+1;
	}
	sort(a,a+n,cmp);
	for(int i = 0; i < n; i++){
		cout<<a[i].j<<" ";
	}
	double ave = 0;
	for(int i = 1; i < n; i++){
		ave += (1.0*a[i-1].data/n);
		a[i].data += a[i-1].data;
	}
	cout<<endl;
	printf("%0.2f",ave);
    return 0;
}

/*��Ŀ����
��n������һ��ˮ��ͷǰ�Ŷӽ�ˮ������ÿ���˽�ˮ��ʱ��ΪTi�������ҳ���n�����Ŷӵ�һ��˳��ʹ��n���˵�ƽ���ȴ�ʱ����С��

�����ʽ
�����ļ������У���һ��Ϊn���ڶ��зֱ��ʾ��1���˵���n����ÿ�˵Ľ�ˮʱ��T1��T2������Tn��ÿ������֮����1���ո�

�����ʽ
����ļ������У���һ��Ϊһ���Ŷ�˳�򣬼�1��n��һ�����У��ڶ���Ϊ�������з����µ�ƽ���ȴ�ʱ��(��������ȷ��С�������λ)��

�����������
����
10 
56 12 1 99 1000 234 33 55 99 812
���
3 2 7 8 1 4 9 6 10 5
291.90
*/
