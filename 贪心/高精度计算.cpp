#include <iostream>
#include <cstring>
#include <cstdio>
 
using namespace std;
const int INF = 1E8;
//高精度加法 
struct Data{
	int u[50], l;
	Data(){
		memset(u, 0, sizeof(u)), l = 0;
	}
	void change(string a){
		int len = a.size(), k = len / 8, i = 0;
		l = k + (len%8 > 0);
		for (len; len > 8; len -= 8)
			sscanf(a.substr(len-8, 8).c_str(), "%d", &u[i++]);//注释一
		if (len > 0) sscanf(a.substr(0, len).c_str(), "%d", &u[i]);
	}
	void print(){
		int k = l-1;
		printf("%d", u[k--]);
		while (k >= 0) printf("%8.8d", u[k--]);//注释二
		printf("\n");
	}
}a, b;
int main(){
	string aa, bb, ac;
	cin >> aa >> bb;
	int ka = 0, kb = 0, i;
	a.change(aa), b.change(bb);
	for (i = 0; i < 50; i++)
		a.u[i] += b.u[i], a.u[i+1] += a.u[i] / INF, a.u[i] %= INF;
	for (i = 49; a.u[i]==0 && i>0; i--);
	a.l = i + 1;
	a.print();
	return 0;
}
//高精度减法
/* 
#include <iostream>
#include <cstring>
#include <cstdio> 
using namespace std;
const int INF = 1E8;
struct Data{
	int u[50], l;
	Data(){
		memset(u, 0, sizeof(u)), l = 0;
	}
	void change(string a){
		int len = a.size(), k = len / 8, i = 0;
		l = k + (len%8 > 0);
		for (len; len > 8; len -= 8)
			sscanf(a.substr(len-8, 8).c_str(), "%d", &u[i++]);
		if (len > 0) sscanf(a.substr(0, len).c_str(), "%d", &u[i]);
	}
	void print(){
		int k = l-1;
		printf("%d", u[k--]);
		while (k >= 0) printf("%8.8d", u[k--]);
		printf("\n");
	}
}a, b;
int main(){
	string aa, bb, ac;
	cin >> aa >> bb;
	int ka = 0, kb = 0, i,t;
	a.change(aa), b.change(bb);
	for (i = 0; i < 50; i++)
		t = a.u[i] - b.u[i],(t < 0)?(t+=INF,a.u[i+1]--):t,a.u[i] = t; 
	for (i = 49; a.u[i]==0 && i>0; i--);
	a.l = i + 1;
	a.print();
	return 0;
}*/
//高精度乘法 
/*
for(int i = 0;i < LA-1;i++)
for(int j = 0;j < LB-1;j++)
	c[i+j] += a[i]*b[j];
for(int i = 0;i < LA+LB;i++)
if(c[i] >= 10){
	c[i+1] += c[i]/10;
	c[i] %= 10; 
}*/

