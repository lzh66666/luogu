#include<bits/stdc++.h>
using namespace std;

int n,m;
int coun = 1;

int main(){
    int a,k;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
    	cin>>a;
    	if(k+a <= m){//判断k+a是否大于m,如果大于m,coun要+1,然后a独立为一段,如果小于等于,k就要加上a 
    		k+=a;
		}
		else{
			coun++;
			k = a;
		}
	}
	cout<<coun<<endl;
    return 0;
}

/*题目描述
对于给定的一个长度为N的正整数数列Ai ，现要将其分成连续的若干段，
并且每段和不超过MM（可以等于MM），问最少能将其分成多少段使得满足要求。

输入格式
第1行包含两个正整数N,MN,M，表示了数列Ai的长度与每段和的最大值，
第2行包含NN个空格隔开的非负整数Ai，如题目所述。

输出格式
一个正整数，输出最少划分的段数。
输入输出样例
输入
5 6
4 2 4 5 1
输出3
*/
