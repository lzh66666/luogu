#include <bits/stdc++.h>

using namespace std;
int n;

int ans = 0;
string word[100];//字符串数组，用来存储单词
string beginn;//用来存储开头字符
int used[100];//这个就是用来记录dfs时候每一个单词被使用了几次的数组

bool check(string s,string m,int k){//重点一，check函数判断接口可行性，k代表接口长度，以下同
    int lens = s.length();
    for (int i=0;i<k;i++){
        if(s[lens-k+i]!=m[i])
            return false;
    }
    return true;
}

void add(string &s,string m,int k){//拼接操作，因为要把m接到s上，所以对于s串不可以传参，因为我们要试图改变这个串
    int lenm = m.length();
    for (int i=k;i<lenm;i++)
        s+=m[i];
}

void dfs(string now){//这只是一个看似平淡无奇的dfs
    int x = now.length();
    ans = max(ans,x);//每次拼接之后更新一下答案
    for (int i=1;i<=n;i++){
        if (used[i]>=2)//如果有一个单词用完了，那这个单词就不能选了
            continue;
        int maxk = word[i].length();
        for (int j=1;j<=maxk;j++){//枚举接口长度
            if (check(now,word[i],j)){
                string temp = now;//重点二，使用字符串副本进行拼接
                add(temp,word[i],j);
                if (temp==now)//拼完之后如果发现长度没增加，也就是和原串一样，那这次拼接没有意义，剪掉
                    continue;
                used[i]++;
                dfs(temp);
                used[i]--;//这只是一个看似平淡无奇的回溯
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


/*题目描述
单词接龙是一个与我们经常玩的成语接龙相类似的游戏，现在我们已知一组单词，且给定一个开头的字母，要求出以这个字母开头的最长的“龙”
（每个单词都最多在“龙”中出现两次），在两个单词相连时，其重合部分合为一部分，例如 beastbeast和astonishastonish，如果接成一条
龙则变为beastonishbeastonish，另外相邻的两部分不能存在包含关系，例如atat 和 atideatide 间不能相连。

输入格式
输入的第一行为一个单独的整数n (n≤20)表示单词数，以下n行每行有一个单词，输入的最后一行为一个单个字符，表示“龙”开头的字母。你可
以假定以此字母开头的“龙”一定存在.

输出格式
只需输出以此字母开头的最长的“龙”的长度

输入输出样例
输入
5
at
touch
cheat
choose
tact
a
输出
23

题目分析
一个单词最多用两次
单词可以不全用完
不可以包含：一旦包含了和不用岂不是一样
按照贪心原则，重叠部分应该越少越好 
*/
