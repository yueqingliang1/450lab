//
// Created by Yueqing Liang on 4/1/22.
//

# include <studio.h>
#include "types.h"
#include "stat.h"
#include "user.h"

int* NULL = 0x0;


void longtask(){
    int i;
    for(i = 0; i < 3000; i++) {
        int i = i / 100;
        if(i == 0) {
            printf(i);
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