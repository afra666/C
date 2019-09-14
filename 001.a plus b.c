正确1：直接使用printf
#include "stdio.h"
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
    return 0;
}
正确2：使用printf_s
#include "stdio.h"
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf_s("%d",a+b);
    return 0;
}

=========================
错误1：不加return 0
#include "stdio.h"
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
}
错误2：使用void main不加return
#include "stdio.h"
void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
}
