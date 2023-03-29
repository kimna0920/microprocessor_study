#include<stdio.h>
int main(){
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int (*p)[4] = a;
    printf("%p\n", *p);
    printf("%p\n", *a);
    printf("%d\n", p[2][1]);
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(p));
    return 0;
}
