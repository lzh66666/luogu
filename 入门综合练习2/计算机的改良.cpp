#include <stdio.h>
#include <math.h>

int l, r;
char x;

void solve() {
    char c = '1';
    int f1 = 1, f2 = 1, tmp = 0;
    while (c != '\n') {
    	scanf("%c",&c);
        if (c >= '0'&&c <= '9') {
            tmp *= 10;
            tmp += c-'0';
        } 
		else {
            if (c >= 'a' && c <= 'z') {
                if (tmp == 0) 
					l += f2 * f1;
                else
					l += tmp * f2 * f1;
                x = c;
            } 
			else 
				r += tmp * (-f2) * f1;
            tmp = 0;
        }
        if (c == '+') {
            f1 = 1;
        } 
		else if (c == '-') {
            f1 = -1;
        } 
		else if (c == '=') {
            f2 = -1;
			f1 = 1;
        }
    }
    if (tmp != 0) 
		r += tmp * (-f2) * f1;
}

int main() {
    solve();
    printf("%c=%0.3f", x, 1.0 * r / l == 0 ? abs(1.0 * r / l) : 1.0 * r / l);
    return 0;
}
