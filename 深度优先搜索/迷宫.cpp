#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

int map[6][6];                      	//地图的标记
bool temp[6][6];						//走过的标记；
int dx[4] = {0,0,1,-1};					//打表；
int dy[4] = {-1,1,0,0};					//打表；
int total,fx,fy,sx,sy,T,n,m,l,r;		//total计数器,l，r是障碍的横坐标和纵坐标；

void walk(int x,int y){					//定义walk；
    if( x==fx && y==fy ){				//fx表示结束x坐标，fy表示结束y坐标；
        total++;						//总数增加；
        return;							//返回，继续搜索；
    }else{
        for(int i = 0;i <= 3; i++){		//0~3是左，右，下，上四个方向；

            if(temp[x+dx[i]][y+dy[i]]==0 && map[x+dx[i]][y+dy[i]]==1){	//判断没有走过和没有障碍；
                temp[x][y]=1;			//走过的地方打上标记；
                walk(x+dx[i],y+dy[i]);
                temp[x][y]=0;			//还原状态；
            }

        }
    }
}

int main(){
    cin >> n >> m >> T;					//n，m长度宽度，T障碍个数
    for(int ix = 1;ix <= n; ix++)
        for(int iy=1;iy <= m; iy++)
            map[ix][iy]=1;				//把地图刷成1；
    cin >> sx >> sy;					//起始 x，y
    cin >> fx >> fy;					//结束 x，y
    for(int u = 1 ; u <= T; u++){
        cin >> l >> r;					//l，r是障碍坐标；
        map[l][r] = 0;
    }
    walk(sx,sy);
    cout << total;						//输出总数；
    return 0;
}


/*题目背景
给定一个N*M方格的迷宫，迷宫里有T处障碍，障碍处不可通过。给定起点坐标和终点坐标，问: 每个方格最多经过1次，有多少种从起点坐标到
终点坐标的方案。在迷宫中移动有上下左右四种方式，每次只能移动一个方格。数据保证起点上没有障碍。

题目描述
无

输入格式
第一行N、M和T，N为行，M为列，T为障碍总数。第二行起点坐标SX,SY，终点坐标FX,FY。接下来T行，每行为障碍点的坐标。

输出格式
给定起点坐标和终点坐标，问每个方格最多经过1次，从起点坐标到终点坐标的方案总数。

输入输出样例
输入
2 2 1
1 1 2 2
1 2
输出
1
说明/提示
【数据规模】

1≤N,M≤5
*/
