#include <stdio.h>


int main(){
    long long a = 0xaabbccdd12345678;
    printf("a = 0x%llx\n", a);
    printf("&a = %p\n", &a);
    long long *ptr = &a;
    printf("*ptr = 0x%llx\n", *ptr);
    printf("ptr = %p\n",  ptr);
    printf("&ptr = %p\n", &ptr);
}
