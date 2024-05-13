#include<stdio.h>
int a=2;
void multiplyBy_4(){
    //int a=0;
    a=a*4;
}

int main(){
    //int a=1;
    printf("Before: a: %d\n",a);
    multiplyBy_4();
    a=3;
    multiplyBy_4();
    printf("After: a: %d\n",a);
    return 0;
}