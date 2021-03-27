#include <stdio.h>
int max_of_four(int a, int b, int c, int d);
 
int main() {
    int w, x, y, z;
    scanf("%d %d %d %d", &w, &x, &y, &z);
    int ans = max_of_four(w, x, y, z);
    printf("%d", ans);
    return 0;
}
    
    int  max_of_four(int a,int b,int c,int d){
        int l;
        l= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d; 
        return l;
    }
 