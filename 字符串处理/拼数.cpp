/*
#include <stdio.h>
#include <string.h>

char a[21][1000];
int n;

int main(){ 
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s",a[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			char c[1000];strcat(c,a[i]);strcat(c,a[j]);
			char d[1000];strcat(d,a[j]);strcat(d,a[i]);
			if(strcmp(d,c) > 0){
				char temp[1000];
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
			*c = *d = NULL;
		}
	}
	
	for(int i = 0 ; i < n; i++){
		printf("%s",a[i]);
	}
    return 0;
}
*/

//�Ľ��� 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string s[25];
int n;

bool cmp(string a,string b) {
    return a+b>b+a;//�Զ�������������һ���ǳ��������a=321��b=32��a+b=32132��b+a=32321��������sort����������32>321�������32132>32321����� 
}

/*�������д��
bool cmp��string a��string b��{
    return a>b;
    �ᷢ��321>32�����������ԭ�����ַ����Լ��Ĺ�ϵ�����������趨�� 
}*/
int main() {
    cin>>n;
    for(int i=1; i<=n; i++) 
		cin>>s[i];
    sort(s+1,s+n+1,cmp);
    for(int i=1; i<=n; i++) 
		cout<<s[i];
    return 0;
}
