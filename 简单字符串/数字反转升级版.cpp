#include <stdio.h>
#include <string.h>

int main(){
	//0.000000    0.0
	//0.000001    0.1
	//00000000	  0
	//10000000    1
	//780%        87%
	//12345       54321
	//700/27      7/72
	//700/027     7/720
	char s[21];
	gets(s); 
	int n = strlen(s);
	int k = 0;
	for(int i = n-1;i>=0;i--){
		if(s[i] == '.' || s[i] == '/' || s[i] == '%'){
			k = i; 
			break; 
		}
	}
	if(k == 0){
		int m = 0; 
		for(int i = n-1;i >= 0;i--){
			if(i == n-1)
				while(s[i] == '0'){
					i--;
					m++;
				}
			if(m == n)
				printf("%c",s[i+1]);			
			printf("%c",s[i]);
		}
	}
	else{
		int m = 0;
		for(int j = k-1;j >= 0;j--){
			if(j == k-1 && s[j] == '0' && k != 1){
				while(s[j] == '0' && j >= 0){
					j--;
					m++;
				}
			}
			if(m == k && k != 1)
				printf("%c",s[j+1]);
			if(j >= 0)
				printf("%c",s[j]);
		}
		printf("%c",s[k]);
		if(s[k] == '.'){
			for(;k < n-1 && s[k+1] == '0' ;k++);
			if(k == n-1)
				printf("%c",s[k]); 
		}	
		for(int j = n-1;j > k ;j--){
			if(j == n-1 && s[j] == '0'){
				while(s[j] == '0')
					j--;
			}
			printf("%c",s[j]);
		} 
		
	}
    return 0;
}

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	int chang,d,i,e=0;
//	char size[600];
//	gets(size);
//	
//	chang = d = strlen(size);
//	
//	for(i = 0;i < chang;i++)
//	    if(size[i] == '/' || size[i] == '.' || size[i] == '%')
//	        d=i;
//	for(i = d-1;i >= 0;i--){
//	    if(e == 0 && size[i] == '0') 
//			continue;
//	    e += 1; 
//	    printf("%c",size[i]);
//	}
//	
//	if(e == 0 && i == -1)
//		printf("0");
//	e=0;
//	
//	printf("%c",size[d]);
//	
//	if(d != chang-1 || d != chang){
//	    if(size[d] == '/'){
//	        for(i = chang-1;i > d;i--){
//	            if(e == 0 && size[i] == '0') 
//					continue;
//	            break; 
//	        }
//	        for(int j = i;j > d;j--)
//	        	printf("%c",size[j]);
//	    	return 0;
//	    }
//		else{
//		    for(i = d+1;i < chang;i++){
//		        if(e == 0 && size[i] == '0'){
//					size[i] = ' ';
//					continue;
//				}
//		    	e += 1;
//		    }
//		    for(i = d+1;i <= chang;i++){
//		        if(size[i] == '0') 
//					continue;
//		        if(i == chang && size[chang-1] == ' ') 
//					size[chang-1]='0';
//		    }
//		    for(i = chang-1;i > d;i--)
//		        printf("%c",size[i]);
//		    return 0;
//		}
//	}
//}
