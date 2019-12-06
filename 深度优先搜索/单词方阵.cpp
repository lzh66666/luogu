#include <bits/stdc++.h>

using namespace std;
int n;
int u[8]={0,-1,-1,-1,0,1,1,1};
int v[8]={1,1,0,-1,-1,-1,0,1};//八个方向
char le[200],chess[101][101];
bool ma[101][101];

bool DFS(int x,int y,char w,int p){//我在哪，我是什么字母，我现在的方向是哪
    if(w=='g'){						//最后一个字母判断成功，标记，返回
        ma[x][y]=1;
        return 1;
    }
    int xx=x+u[p],yy=y+v[p];
    if(xx>=1 && yy>=1 && xx<=n && yy<=n && chess[xx][yy]==le[w])//搜索，不解释
    if(DFS(xx,yy,le[w],p)){
        ma[x][y]=1;
        return 1;
    }
    return 0;
}

int main(){
	
    le['y']='i';le['i']='z';le['z']='h';le['h']='o';le['o']='n';le['n']='g';
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>chess[i][j];
		}	
	}
    	
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(chess[i][j]=='y'){//如果是单词开头
    			for(int k=0;k<=7;k++){//就八个方向搜索
    				if(DFS(i,j,'y',k)) 
						ma[i][j]=1; //判断是否成单词
    			}
			}
		}
	}
    	
    		
    			
    				
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	if(ma[i][j]) 
				cout<<chess[i][j];
       	 	else
				cout<<'*';
		}
        	
        cout<<endl;
    }
    return 0;
}


/*题目描述
给一n×n的字母方阵，内可能蕴含多个“yizhong”单词。单词在方阵中是沿着同一方向连续摆放的。摆放可沿着 8 个方向的任一方向，同一单词摆放
时不再改变方向，单词与单词之间可以交叉,因此有可能共用字母。输出时，将不是单词的字母用*代替，以突出显示单词。例如：

输入：
    8                     输出：
    qyizhong              *yizhong
    gydthkjy              gy******
    nwidghji              n*i*****
    orbzsfgz              o**z****
    hhgrhwth              h***h***
    zzzzzozo              z****o**
    iwdfrgng              i*****n*
    yyyygggg              y******g
输入格式
第一行输入一个数nn。(7≤n≤100)。

第二行开始输入n×n的字母矩阵。

输出格式
突出显示单词的n×n矩阵。

输入输出样例
输入
7
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
输出
*******
*******
*******
*******
*******
*******
*******
输入
8
qyizhong
gydthkjy
nwidghji
orbzsfgz
hhgrhwth
zzzzzozo
iwdfrgng
yyyygggg
输出 #2
*yizhong
gy******
n*i*****
o**z****
h***h***
z****o**
i*****n*
y******g
*/
