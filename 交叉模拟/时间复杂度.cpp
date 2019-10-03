#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	int c,d,e,m,n,o,h,k;
	int f[27],g[27],l[100];
	char a[100],b[100];
	int s[11];
    scanf("%d",&o);
    int x = 0;
    while(o>0)
    {
        c = d = m = n = e = h = k = 0;
		o--;
        memset(f,0,sizeof(f));
		memset(l,0,sizeof(l));
		
		do{
			for(int i=0;b[i];i++)
				a[i]=b[i];
			scanf("%s",b);
		}while(b[0]!='O');
		
		
        for(int i=0; i<strlen(a); i++) 
			c = c*10+a[i]-'0';
			
        for(int i=4; i<strlen(b)-1; i++) 
			d = d*10+b[i]-'0';
        while(c > 0){
        	
            c--;
			scanf("%s",a);
            if(a[0] == 'F'){
                e++;
				scanf("%s",a); 
                if(f[a[0]-96]) 
					e=-1;
                else {
                	f[a[0]-96] = 1;
					g[e] = a[0]-96;
				}
				
                scanf("%s",a);
                scanf("%s",b);
                
                if(a[0]!='n' && b[0]=='n' && k==0) {
                	h++;
					l[e]=1;
				}
                else if(((strlen(a)==strlen(b) && a > b) || (strlen(a)>strlen(b)) || (a[0]=='n' && b[0] != 'n')) && k == 0) 
					k=1;
					n=e;
            }
			else{
                m = m>h?m:h; 
				f[g[e]]=0;
                if(l[e] == 1){ 
					h--;
					l[e] = 0;
				} 
                e--;
                if(n>0 && e<n){
					k = 0;
					n = 0;
				} 
            }
            if(e==-1) { 
				s[x++]= 0;
				c=-1;
			} 
			
        }
        if(e > 0) 
			s[x++] = 0;
        if(e == 0 && m == d) 
			s[x++] = 1;
        if(e == 0 && m != d) 
			s[x++] = 2;
    }
    for(int i = 0 ; i < x; i++){
    	if(s[i] == 0)
    		printf("ERR\n");
    	else if(s[i] == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
    return 0;
} 
