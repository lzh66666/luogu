#include<bits/stdc++.h>
 
using namespace std;
int n,x,ans;
priority_queue<int,vector<int>,greater<int> >q;//> >֮��Ҫ�пո� 

//�������� priority_queue<int,vector<int>,greater<int> >q;
// �������� priority_queue<int,vector<int>,less<int> >q;
/*
top ���ʶ�ͷԪ��
empty �����Ƿ�Ϊ��
size ���ض�����Ԫ�ظ���
push ����Ԫ�ص���β (������)
emplace ԭ�ع���һ��Ԫ�ز��������
pop ������ͷԪ��
swap �������� 

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
