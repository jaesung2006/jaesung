#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

static void sig_usr(int signo){
    if(signo == SIGUSR1)
        printf("received SIGUSR1\n");
    else if (signo == SIGUSR2)
        printf("received SIGUSR2\n");
    else if (signo == SIGTERM)
        printf("received SIGTERM, Die Hard !!! ; ) \n");
}

int main(void){
    if(signal(SIGUSR1, sig_usr) == SIG_ERR)
        perror("cant catch SIGUSR1");
    if(signal(SIGUSR2, sig_usr) == SIG_ERR)
        perror("cant catch SIGUSR2");
    if(signal(SIGTERM, sig_usr) == SIG_ERR)
        perror("cant catch SiGTERM\n");
    for(;;)
        sleep(60);
    return (0);
}

