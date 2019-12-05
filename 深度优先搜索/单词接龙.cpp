#include <bits/stdc++.h>

using namespace std;
int n;

int ans = 0;
string word[100];//�ַ������飬�����洢����
string beginn;//�����洢��ͷ�ַ�
int used[100];//�������������¼dfsʱ��ÿһ�����ʱ�ʹ���˼��ε�����

bool check(string s,string m,int k){//�ص�һ��check�����жϽӿڿ����ԣ�k����ӿڳ��ȣ�����ͬ
    int lens = s.length();
    for (int i=0;i<k;i++){
        if(s[lens-k+i]!=m[i])
            return false;
    }
    return true;
}

void add(string &s,string m,int k){//ƴ�Ӳ�������ΪҪ��m�ӵ�s�ϣ����Զ���s�������Դ��Σ���Ϊ����Ҫ��ͼ�ı������
    int lenm = m.length();
    for (int i=k;i<lenm;i++)
        s+=m[i];
}

void dfs(string now){//��ֻ��һ������ƽ�������dfs
    int x = now.length();
    ans = max(ans,x);//ÿ��ƴ��֮�����һ�´�
    for (int i=1;i<=n;i++){
        if (used[i]>=2)//�����һ�����������ˣ���������ʾͲ���ѡ��
            continue;
        int maxk = word[i].length();
        for (int j=1;j<=maxk;j++){//ö�ٽӿڳ���
            if (check(now,word[i],j)){
                string temp = now;//�ص����ʹ���ַ�����������ƴ��
                add(temp,word[i],j);
                if (temp==now)//ƴ��֮��������ֳ���û���ӣ�Ҳ���Ǻ�ԭ��һ���������ƴ��û�����壬����
                    continue;
                used[i]++;
                dfs(temp);
                used[i]--;//��ֻ��һ������ƽ������Ļ���
            }
        }
    }
}

int main(){
    cin >> n;
    
    for (int i=1;i<=n;i++)
        cin >> word[i];
        
    cin >> beginn;
    
    dfs(beginn);
    
    cout << ans << endl;
    return 0;
}


/*��Ŀ����
���ʽ�����һ�������Ǿ�����ĳ�����������Ƶ���Ϸ������������֪һ�鵥�ʣ��Ҹ���һ����ͷ����ĸ��Ҫ����������ĸ��ͷ����ġ�����
��ÿ�����ʶ�����ڡ������г������Σ�����������������ʱ�����غϲ��ֺ�Ϊһ���֣����� beastbeast��astonishastonish������ӳ�һ��
�����Ϊbeastonishbeastonish���������ڵ������ֲ��ܴ��ڰ�����ϵ������atat �� atideatide �䲻��������

�����ʽ
����ĵ�һ��Ϊһ������������n (n��20)��ʾ������������n��ÿ����һ�����ʣ���������һ��Ϊһ�������ַ�����ʾ��������ͷ����ĸ�����
�Լٶ��Դ���ĸ��ͷ�ġ�����һ������.

�����ʽ
ֻ������Դ���ĸ��ͷ����ġ������ĳ���

�����������
����
5
at
touch
cheat
choose
tact
a
���
23

��Ŀ����
һ���������������
���ʿ��Բ�ȫ����
�����԰�����һ�������˺Ͳ�������һ��
����̰��ԭ���ص�����Ӧ��Խ��Խ�� 
*/
