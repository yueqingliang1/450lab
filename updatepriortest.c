//
// Created by Yueqing Liang on 4/1/22.
//

#include "stdio.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "defs.h"

int* NULL = 0x0;


void longtask(void){
    int i;
    for(i = 0; i < 3000; i++) {
        int i = i / 100;
        if(i == 0) {
            cprintf(i);
        }
    }
}


int main(int argc, char *argv[]) {
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
}