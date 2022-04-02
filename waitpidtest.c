#include "types.h"
#include "stat.h"
#include "user.h"

int* NULL = 0x0;

int main(int argc, char *argv[]) {

    if(fork() == 0) {
        int pid;
        if((pid = fork()) == 0) {
            waitpid(pid, NULL, 0);
        } else{
            exit(0);
        }
    }
    exit(0);
}