
#include<stdio.h>

int main(){
    long f0=0,f1=1,f2=1,f3=1;
    int n;
    int i = 3;
    scanf("%d",&n);
    for (i = 3; i <=n; i++) {
        f3=(f2+f1)%10007;
        f1=f2;
        f2=f3;
    }
    printf("%d",f3);
    return 0;
}

易错1：for内部不能加int i
