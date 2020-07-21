#include <stdio.h>


int main(){
    long long a = 0xaabbccdd12345678;
    unsigned char *uc_ptr = &a;
    __uint16_t *u16_ptr = &a;
    unsigned int *u32_ptr = &a;
    unsigned long long *u64_ptr = &a;
    printf("unsigned char (%d byte): 0x%x \n", sizeof(unsigned char), *uc_ptr);
    printf("unsigned int16 (%d byte) : 0x%x \n",sizeof(__uint16_t), *u16_ptr);
    printf("unsigned int (%d byte): 0x%x \n", sizeof(unsigned int), *u32_ptr);
    printf("unsigned long long (%d byte): 0x%llx \n",sizeof(unsigned long long), *u64_ptr);
}
