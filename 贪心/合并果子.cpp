#include<bits/stdc++.h>
 
using namespace std;
int n,x,ans;
priority_queue<int,vector<int>,greater<int> >q;//> >之间要有空格 

//升序序列 priority_queue<int,vector<int>,greater<int> >q;
// 升序序列 priority_queue<int,vector<int>,less<int> >q;
/*
top 访问队头元素
empty 队列是否为空
size 返回队列内元素个数
push 插入元素到队尾 (并排序)
emplace 原地构造一个元素并插入队列
pop 弹出队头元素
swap 交换内容 

*/

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) {
    	cin>>x;
		q.push(x);
	}
    while(q.size()>=2){
        int a=q.top(); 
		q.pop();
        int b=q.top();
		q.pop();
		
        ans+=a+b;
        q.push(a+b);
    }
    cout<<ans<<endl;
    return 0;
}
