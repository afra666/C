#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",(1+n)*n/2);
    return  0;
}


易错1：没加return
易错2：（n/2）加了括号
