#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while (t--) {
        int n, k;
        scanf("%d%d",&n,&k);

        int op=0;
        if(k>1){
       while(n){
            op += n%k;
            n /= k;
        }
        }
        else{
            op = n;
        }
       printf("%d\n",op);
}
    return 0;
}
