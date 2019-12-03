#include<bits/stdc++.h>
using namespace std;

int n, lens = 1, lenm = 1, lena = 1;
int sum[10010] = {0, 1}, maxn[10010] = {0, 1}, ans[10010];

/*struct tmp{
    long long l, r;
    bool operator < (const tmp x) const 
    {
        return l * r < x.l * x.r;
    }
}coin[1001]; //与下面的等价  */

struct node{
    long long l, r;
}coin[1001];

//从小到大进行排序 
bool cmp(node a,node b){
	return a.l*a.r < b.l*b.r;
}

//高精度乘法 
void muti(long long x){
    int tmp = 0;
    for(int i = 1; i <= lens; i++)
        sum[i] *= x;
    for(int i = 1; i <= lens; i++){
        tmp += sum[i];
        sum[i] = tmp %10;
        tmp /= 10;
    }
    while(tmp != 0){
        lens++;
        sum[lens] = tmp % 10;
        tmp /= 10;
    }
}

//高精度除法 
void div(long long x){
    memset(ans, 0, sizeof(ans));
    lena = lens;
    int tmp = 0;
    for(int i = lena; i >= 1; i--){
        tmp *= 10;
        tmp += sum[i];
        if(tmp >= x){
            ans[i] = tmp / x;
            tmp %= x;
        }
    }
    while(ans[lena] == 0){
        if(lena == 1)
            break;
        lena--;
    }
}
//高精度求最大值 
void max(){
    if(lena > lenm){
        for(int i = 1; i <= lena; i++)
            maxn[i] = ans[i];
        lenm = lena;
    }
    else if(lena == lenm){
        for(int i = lena; i >= 1; i--)
            if(maxn[i] < ans[i]){
                for(int j = 1; j <= lena; j++)
                    maxn[j] = ans[j];
                lenm = lena;
                break;
            }
    }
}

int main(){
    cin >> n;
    cin >> coin[0].l >> coin[0].r;
    for(int i = 1; i <= n; i++)
        scanf("%d %d", &coin[i].l, & coin[i].r);;
    sort(coin + 1, coin + n + 1, cmp);
    for(int i = 1; i <= n; i++){
        muti(coin[i - 1].l);
        div(coin[i].r);
        max();
    }
    for(int i = lenm; i >= 1; i--)
        cout << maxn[i];
    return 0;
}

/*注意高精度计算,以下结果只有60分,上述是高精度计算 
int n;

struct node{
	int l,r;
}a[10002];

bool cmp(node a,node b){
	return a.r*a.l < b.r*b.l; 
}

int main(){
    cin>>n;
    for(int i = 0; i <= n; i++) {
    	cin>>a[i].l>>a[i].r;
	}
	sort(a+1,a+n+1,cmp);
	long long max = a[0].l/a[1].r;
	long long mul = a[0].l*a[1].l;
	for(int i = 2; i <= n; i++) {
		max = max < mul/a[i].r ? mul/a[i].r : max;
		mul *= a[i].l;
	}
	
	cout<<max;
    return 0;
}
*/
/*题目描述
恰逢 H H国国庆，国王邀请 nn 位大臣来玩一个有奖游戏。首先，他让每个大臣在左、右手上面分别写下一个整数，国王自己也在左、右手上各写一个整数。
然后，让这 nn 位大臣排成一排，国王站在队伍的最前面。排好队后，所有的大臣都会获得国王奖赏的若干金币，每位大臣获得的金币数分别是：排在该大
臣前面的所有人的左手上的数的乘积除以他自己右手上的数，然后向下取整得到的结果。

国王不希望某一个大臣获得特别多的奖赏，所以他想请你帮他重新安排一下队伍的顺序，使得获得奖赏最多的大臣，所获奖赏尽可能的少。注意，国王的位
置始终在队伍的最前面。

输入格式
第一行包含一个整数 n，表示大臣的人数。

第二行包含两个整数 a和 b，之间用一个空格隔开，分别表示国王左手和右手上的整数。

接下来 n行，每行包含两个整数 a 和 b，之间用一个空格隔开，分别表示每个大臣左手和右手上的整数。

输出格式
一个整数，表示重新排列后的队伍中获奖赏最多的大臣所获得的金币数。

输入输出样例
输入 
3 
1 1 
2 3 
7 4 
4 6 
输出
2
说明/提示
【输入输出样例说明】

按 1、2、3 这样排列队伍，获得奖赏最多的大臣所获得金币数为 2；

按 1、3、2 这样排列队伍，获得奖赏最多的大臣所获得金币数为 2；

按 2、1、3 这样排列队伍，获得奖赏最多的大臣所获得金币数为 2；

按 2、3、1这样排列队伍，获得奖赏最多的大臣所获得金币数为 9；

按 3、1、2这样排列队伍，获得奖赏最多的大臣所获得金币数为 2；

按 3、2、1 这样排列队伍，获得奖赏最多的大臣所获得金币数为 9。

因此，奖赏最多的大臣最少获得 2 2个金币，答案输出 22。

【数据范围】

对于 20%的数据，有 1≤n≤10,0 < a,b < 8；

对于 40%的数据，有 1≤ n≤20,0 < a,b < 8；

对于 60%的数据，有 1≤n≤00；

对于 60%的数据，保证答案不超过 10^9；

对于 100%的数据，有 1 ≤ n ≤1,000,0 < a,b < 10000。
*/
