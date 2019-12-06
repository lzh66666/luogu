#include <bits/stdc++.h>

using namespace std;
int n;
int u[8]={0,-1,-1,-1,0,1,1,1};
int v[8]={1,1,0,-1,-1,-1,0,1};//�˸�����
char le[200],chess[101][101];
bool ma[101][101];

bool DFS(int x,int y,char w,int p){//�����ģ�����ʲô��ĸ�������ڵķ�������
    if(w=='g'){						//���һ����ĸ�жϳɹ�����ǣ�����
        ma[x][y]=1;
        return 1;
    }
    int xx=x+u[p],yy=y+v[p];
    if(xx>=1 && yy>=1 && xx<=n && yy<=n && chess[xx][yy]==le[w])//������������
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
    		if(chess[i][j]=='y'){//����ǵ��ʿ�ͷ
    			for(int k=0;k<=7;k++){//�Ͱ˸���������
    				if(DFS(i,j,'y',k)) 
						ma[i][j]=1; //�ж��Ƿ�ɵ���
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


/*��Ŀ����
��һn��n����ĸ�����ڿ����̺������yizhong�����ʡ������ڷ�����������ͬһ���������ڷŵġ��ڷſ����� 8 ���������һ����ͬһ���ʰڷ�
ʱ���ٸı䷽�򣬵����뵥��֮����Խ���,����п��ܹ�����ĸ�����ʱ�������ǵ��ʵ���ĸ��*���棬��ͻ����ʾ���ʡ����磺

���룺
    8                     �����
    qyizhong              *yizhong
    gydthkjy              gy******
    nwidghji              n*i*****
    orbzsfgz              o**z****
    hhgrhwth              h***h***
    zzzzzozo              z****o**
    iwdfrgng              i*****n*
    yyyygggg              y******g
�����ʽ
��һ������һ����nn��(7��n��100)��

�ڶ��п�ʼ����n��n����ĸ����

�����ʽ
ͻ����ʾ���ʵ�n��n����

�����������
����
7
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
aaaaaaa
���
*******
*******
*******
*******
*******
*******
*******
����
8
qyizhong
gydthkjy
nwidghji
orbzsfgz
hhgrhwth
zzzzzozo
iwdfrgng
yyyygggg
��� #2
*yizhong
gy******
n*i*****
o**z****
h***h***
z****o**
i*****n*
y******g
*/
