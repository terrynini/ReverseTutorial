#include <stdio.h>

int add(int a, int b){
    int ma = a*2;
    int mb = b*3;
    return ma+mb;
}

int main(){
    printf("%d", add(1,6));
}
