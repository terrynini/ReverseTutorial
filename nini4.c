#include <stdio.h>


void flow1(){
    int money = 1000;
    if( money*3 == 3000){
        puts("you are 1450");
    }else{
        puts("triple stimulus vouchers? NO it's zero");
    }
}

void flow2(){
    int Z = 100;
    int B = -100;
    if( Z>B ){
        puts("Z>B !!");
    }else if( B>Z ){
        puts("B>Z !!");
    }else{
        puts("Z=B !!");
    }
}

void flow3(){
    unsigned int agree = 939090; 
    unsigned int disagree = 25051;
    if( agree > disagree && 939090 > 574996){
        puts("2 thanks, 3 regrets, 1 blessing");
    }else{
        puts("pe~ko~pekopeko");
    }
}

int main(){
    flow1();
    flow2();
    flow3();
    return 0;
}
