#include <stdio.h>

int main() {
	int p1,p2,p3;
	char ch[101];
    scanf("%d%d%d%s",&p1,&p2,&p3,ch);
    
    int i = 0;
    while(ch[i]){
    	
        char bf=ch[i-1];
		char af=ch[i+1];
		char f=ch[i];
		
        if(f=='-' && af>bf && (bf>='0' && af<='9'|| bf>='a' && af<='z')){
        	char j,p;
            for(p3 == 1? j = bf+1 : j = af-1; p3 == 1? j < af : j > bf; p3 == 1? j++: j--){
                p = j;
                if(p1 == 2)
                    p = (p >= 'a')?p-32:p;
                else if(p1 == 3) 
					p = '*';
                for(int k=0; k < p2; k++)
                    printf("%c",p);
            }
        } 
        else
            printf("%c",f);
        i++;
    }
    return 0;
}
