#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#define MAX_SEND_SIGNUM 1000000
int main(int argc, char *argv[])
{
	int i;
	pid_t pid;
	puts("insert PID");
	scanf("%ld", &pid);
	getchar(); // fflush(stdin);
	printf("%s: sending signal %d to process %ld %d times\n", argv[0], SIGUSR2, (long)pid, MAX_SEND_
			for(i = 0; i < MAX_SEND_SIGNUM; i++)
			if(kill(pid, SIGUSR2) == -1)
			fprintf(stderr, "kill error [%s]\n", strerror(errno));
			printf("%s: exiting\n", argv[0]);
			exit(EXIT_SUCCESS);
			return 0;
			}
// 시그널 siguser2에 대해 1000000번을 설정한 pid프로세스에 전송
