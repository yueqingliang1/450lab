//
// Created by Yueqing Liang on 4/1/22.
//

//#include "types.h"
//#include "stat.h"
#include "user.h"
//#include "stdio.h"


int* NULL = 0x0;


void longtask(void){
    int i;
    for(i = 0; i < 3000; i++) {
        if(i % 100 == 0) {
            printf(1, "i: %d", i);
        }
    }
}


int main(void) {
    int pid;
    updateprior(15);
    pid = fork();
    if (pid == 0) {
        longtask();
        updateprior(5);
        longtask();
    } else {
        longtask();
    }
    return 0;
}