#include<bits/stdc++.h>
 
using namespace std;

int n;

struct node{
	int i,j;
}a[1000002];

bool cmp(node a,node b){
	if(a.j != b.j){
		return a.j < b.j;
	}else{
		return a.i < b.i;
	}
}

int main(){
	int coun = 1;
    cin>>n;
    for(int i = 0; i < n; i++){
    	cin>>a[i].i>>a[i].j;
	}
	
	sort(a,a+n,cmp);
	int j = 0;
	for(int i = 1; i < n; i++){
    	if(a[j].j <= a[i].i){
    		j = i;
    		coun++;
		}
	}
	cout<<coun;
    return 0;
}

/*题目解析 
在一个数轴上有n条线段，现要选取其中k条线段使得这k条线段两两没有重合部分，问最大的k为多少。

最左边的线段放什么最好？

显然放右端点最靠左的线段最好，从左向右放，右端点越小妨碍越少

其他线段放置按右端点排序，贪心放置线段，即能放就放*/


/*题目背景
快noip了，yyy很紧张！

题目描述
现在各大oj上有n个比赛，每个比赛的开始、结束的时间点是知道的。

yyy认为，参加越多的比赛，noip就能考的越好（假的）

所以，他想知道他最多能参加几个比赛。

由于yyy是蒟蒻，如果要参加一个比赛必须善始善终，而且不能同时参加2个及以上的比赛。

输入格式
第一行是一个整数n ，接下来n行每行是2个整数ai,bi(ai<bi)，表示比赛开始、结束的时间。

输出格式
一个整数最多参加的比赛数目。

输入输出样例
输入
3
0 2
2 4
1 3
输出
2
说明/提示
对于20%的数据，n≤10；
对于50%的数据，n≤1000；
对于70%的数据，n≤100000；
对于100%的数据，n≤1000000，0≤ai＜bi≤1000000。
*/
