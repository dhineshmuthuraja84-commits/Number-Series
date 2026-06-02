#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int t=n;
    int c=0;
    while (n>0) {
        n/=10;
        c++;
    }
    n=t;
    int sum=0;
    while (n>0) {
        int r=n%10;
        int p=1;
        for (int i=0;i<c;i++) {
            p=p*r;
        }
        n/=10;
        sum+=p;
    }
    if (t==sum) {
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}
