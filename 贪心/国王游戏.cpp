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
}coin[1001]; //������ĵȼ�  */

struct node{
    long long l, r;
}coin[1001];

//��С����������� 
bool cmp(node a,node b){
	return a.l*a.r < b.l*b.r;
}

//�߾��ȳ˷� 
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

//�߾��ȳ��� 
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
//�߾��������ֵ 
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

/*ע��߾��ȼ���,���½��ֻ��60��,�����Ǹ߾��ȼ��� 
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
/*��Ŀ����
ǡ�� H H�����죬�������� nn λ������һ���н���Ϸ�����ȣ�����ÿ����������������ֱ�д��һ�������������Լ�Ҳ���������ϸ�дһ��������
Ȼ������ nn λ���ų�һ�ţ�����վ�ڶ������ǰ�档�źöӺ����еĴ󳼶����ù������͵����ɽ�ң�ÿλ�󳼻�õĽ�����ֱ��ǣ����ڸô�
��ǰ��������˵������ϵ����ĳ˻��������Լ������ϵ�����Ȼ������ȡ���õ��Ľ����

������ϣ��ĳһ���󳼻���ر��Ľ��ͣ�������������������°���һ�¶����˳��ʹ�û�ý������Ĵ󳼣������;����ܵ��١�ע�⣬������λ
��ʼ���ڶ������ǰ�档

�����ʽ
��һ�а���һ������ n����ʾ�󳼵�������

�ڶ��а����������� a�� b��֮����һ���ո�������ֱ��ʾ�������ֺ������ϵ�������

������ n�У�ÿ�а����������� a �� b��֮����һ���ո�������ֱ��ʾÿ�������ֺ������ϵ�������

�����ʽ
һ����������ʾ�������к�Ķ����л������Ĵ�����õĽ������

�����������
���� 
3 
1 1 
2 3 
7 4 
4 6 
���
2
˵��/��ʾ
�������������˵����

�� 1��2��3 �������ж��飬��ý������Ĵ�����ý����Ϊ 2��

�� 1��3��2 �������ж��飬��ý������Ĵ�����ý����Ϊ 2��

�� 2��1��3 �������ж��飬��ý������Ĵ�����ý����Ϊ 2��

�� 2��3��1�������ж��飬��ý������Ĵ�����ý����Ϊ 9��

�� 3��1��2�������ж��飬��ý������Ĵ�����ý����Ϊ 2��

�� 3��2��1 �������ж��飬��ý������Ĵ�����ý����Ϊ 9��

��ˣ��������Ĵ����ٻ�� 2 2����ң������ 22��

�����ݷ�Χ��

���� 20%�����ݣ��� 1��n��10,0 < a,b < 8��

���� 40%�����ݣ��� 1�� n��20,0 < a,b < 8��

���� 60%�����ݣ��� 1��n��00��

���� 60%�����ݣ���֤�𰸲����� 10^9��

���� 100%�����ݣ��� 1 �� n ��1,000,0 < a,b < 10000��
*/
