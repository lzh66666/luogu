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

/*题目描述
有n个人在一个水龙头前排队接水，假如每个人接水的时间为Ti，请编程找出这n个人排队的一种顺序，使得n个人的平均等待时间最小。

输入格式
输入文件共两行，第一行为n；第二行分别表示第1个人到第n个人每人的接水时间T1，T2，…，Tn，每个数据之间有1个空格。

输出格式
输出文件有两行，第一行为一种排队顺序，即1到n的一种排列；第二行为这种排列方案下的平均等待时间(输出结果精确到小数点后两位)。

输入输出样例
输入
10 
56 12 1 99 1000 234 33 55 99 812
输出
3 2 7 8 1 4 9 6 10 5
291.90
*/
