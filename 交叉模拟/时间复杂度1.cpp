#include <stdio.h>
#include <string.h>

int n,ques,f4,f5,len,now_,cym,line,judge[11],f6,f7,f8,f9,f10,f11;

bool use[30];
char s[1001],ss[1001],s1[1001];

int getmath(){
    int k=0;
    while((ss[now_] >= '0') && (ss[now_] <= '9')){
        k *= 10;
        k += ss[now_]-'0';
        now_++;
    }
    now_++;
    return k;
}

int digui(){
    int ans=-3,fuzadu,flag;
    now_++;
    
    if(use[ss[now_]-'a'] == true)
        return -2;
    use[ss[now_]-'a']=true;
    
    flag = ss[now_]-'a';
    now_++;
    
    if( (ss[now_] >= '0') && (ss[now_] <= '9') )
    {
        f4 = getmath();
        if(ss[now_] != 'n')
        {
            f11 = getmath();
            if(f4 > f11)
                fuzadu=-1;
            else
                fuzadu=0;
        }
        else
        {
            fuzadu=1;
            now_++;         
        }
    }
    else
    {
        now_++;
        if(ss[now_] == 'n')
        {
            now_++;
            fuzadu = 0;           
        }
        else
        {
            getmath();
            fuzadu = -1;
        }
    }
    
    ans = -3;
    while(now_ <= len)
    {
        if(ss[now_] == 'F')
        {
            f5 = digui();
            if(f5 == -2)
            {
                use[flag] = false;
                return -2;
            }
            if(f5 == -1)
            {
                if((ans ==-3))
                	ans = -1;
                continue;
            }
            if(f5==0)
            {
                if( (ans==-3) || (ans == -1) )
                ans = 0;
                continue;
            }
            ans = ans>f5?ans:f5;
        }
        if(ss[now_] == 'E')
        {
            now_++;
            use[flag]=false;
            
            if(ans >= 0)
            	if(fuzadu==1)
            		ans++;          
            if(ans == -3)
                ans=fuzadu;         
            if(fuzadu == -1)
          		ans = 0;
            use[flag] = false;
            return ans;         
        }
    }
    use[flag] = false;
    
    return -2;
}

int zero(){
    f7=-3;  
    while(now_<=len)
    {
        if(ss[now_]=='F')
        {
            f6=digui();
            if(f6 == -2)
                return -2;
            else
                f7 = f7>f6?f7:f6;
            continue;
        }
        if(ss[now_]=='E')
            return -2;
    }
    return f7;
}

int main(){
    scanf("%d",&n);
    gets(s1);
    
    for(int w=1;w<=n;w++){
        gets(s1);
        f8=0;
		f9=0;
		
        while( (s1[f8] >= '0') && (s1[f8] <= '9') ){
            f9 *= 10;
            f9 += s1[f8]-'0';
            f8++;
        }       
        
        line=f9;
        
        if(s1[f8+3] == '1')
        	ques=0;
        else{
        	f8 += 5;
			ques = 0;
        	while(s1[f8] != ')'){
            	ques *= 10;
            	ques += s1[f8]-'0';
            	f8++;
        	}           
        }

        len=0;
        for(int i = 1; i <= line; i++){
            gets(s);
            
            for(int j = 0; j <= strlen(s); j++){
                if(( !( (s[j] >= '0') && (s[j]<='9') ) ) && ( (s[j-1] >= '0') && (s[j-1] <= '9') ) ){
                    len++;
                    ss[len]='/';
                }
                if( (s[j]=='E') || (s[j]=='F') || ( ( s[j]>='a' ) && ( s[j] <= 'z' ) ) || ( (s[j]>='0') && (s[j]<='9') )){
                    len++;
                    ss[len]=s[j];
                }
            }
        }
        
        now_=1;
        cym=zero();
        
        if(cym == -2){
            judge[w]=-1;
            continue;
        }
        if(ques == cym)
        	judge[w] = 1;
        else
        	judge[w] = 0;
    }
    
    for(int i = 1; i <= n; i++){
        if(judge[i] == -1)
        	printf("ERR");
        if(judge[i] == 0)
        	printf("No");
        if(judge[i] == 1)
        	printf("Yes");
        printf("\n");
    }
    return 0;
}
