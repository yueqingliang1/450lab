//
// Created by Yueqing Liang on 4/1/22.
//

#include "types.h"
#include "stat.h"
#include "user.h"

int* NULL = 0x0;


void longtask(){
    for(i = 0; i < 3000; i++) {
        int i = i / 100;
        if(i == 0) {
            printf();
        }
    }
}


int main(int argc, char *argv[]) {

    updateprior(15);
    pid = fork();
    if (pid == 0) {
        longtask();
        updateprior(5);
        longtask();
    } else {
        longtask();
    }
}