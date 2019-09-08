#include<stdio.h>

int main(){
//	0-670-82162-4	Right 
//	0-670-82162-0	0-670-82162-4
	char a[13];
	scanf("%s",a);
	int i = 0,j = 0;
	int b[9];
	int c,d = 0;
	
	while(i<12){
		if(a[i] != '-'){
			b[j++] = a[i] - '0';
			c += (b[j-1]*(i+1-d));
		}
		else
			d++;
		i++;
	}
	
	if((c%11 == a[12] - '0') || ((c%11 == 10) && (a[12] == 'X')))
		printf("Right");
	else{
		if(c%11 == 10)
			a[12] = 'X';
		else
			a[12] = c%11 + '0';
		printf("%s",a); 
	}
		
    return 0;
}

//#include <stdio.h>
//int main(){
//  char a[14], mod[12] = "0123456789X";
//  scanf("%s",a);
//  int j = 1, b = 0;
//  for(int i = 0; i < 12; i++) {
//        if(a[i] == '-') 
//			continue;
//    b += (a[i]-'0')*j++; 
//  }
//  if(mod[b%11] == a[12]) 
//  	printf("Right");
//  else {
//      a[12] = mod[b%11];
//      printf("%s",a);
//  }
//  return 0;
//}
