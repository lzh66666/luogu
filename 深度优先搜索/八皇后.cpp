#include <bits/stdc++.h>

using namespace std;
int n;

int ans[50],sum;
bool flag[4][50];

void dfs(int i){
    int j;
    if(i > n){
        sum++;
        if(sum > 3) //只需要前三个 
			return ;
        for(int i = 1;i <= n; ++i)    
			printf("%d ",ans[i]);
        printf("\n");
        return ;
    }
    for(j = 1; j <= n; ++j)
        if( !flag[1][j] && (!flag[2][i+j]) && (!flag[3][i-j+n]) ){
	        ans[i] = j;
	        flag[1][j] = 1;
	        flag[2][i+j] = 1;
	        flag[3][i-j+n] = 1;
	        dfs(i+1);
	        flag[1][j] = 0;
	        flag[2][i+j] = 0;
	        flag[3][i-j+n] = 0;
	    }
}

int main(){
	
    cin>>n;
    dfs(1);
    cout<<sum;
	return 0;
}


/*题目描述
检查一个如下的6 x 6的跳棋棋盘，有六个棋子被放置在棋盘上，使得每行、每列有且只有一个，每条对角线(包括两条主对角线的所有平行线)上至多有一个棋子。


上面的布局可以用序列2 4 6 1 3 5来描述，第i个数字表示在第i行的相应位置有一个棋子，如下：

行号 1 2 3 4 5 6

列号 2 4 6 1 3 5

这只是跳棋放置的一个解。请编一个程序找出所有跳棋放置的解。并把它们以上面的序列方法输出。解按字典顺序排列。请输出前3个解。最后一行是解的总个数。

//以下的话来自usaco官方，不代表洛谷观点

特别注意: 对于更大的N(棋盘大小N x N)你的程序应当改进得更有效。不要事先计算出所有解然后只输出(或是找到一个关于它的公式），这是作弊。如果你坚持
作弊，那么你登陆USACO Training的帐号删除并且不能参加USACO的任何竞赛。我警告过你了！

输入格式
一个数字N (6 <= N <= 13) 表示棋盘是N x N大小的。

输出格式
前三行为前三个解，每个解的两个数字之间用一个空格隔开。第四行只有一个数字，表示解的总数。

输入输出样例
输入
6
输出
2 4 6 1 3 5
3 6 2 5 1 4
4 1 5 2 6 3
4
*/
