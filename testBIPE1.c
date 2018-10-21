/* ch-pipe1.c */
/* 파이프 사용 #1 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
int main(void) {
	int pfd[2]; /* 파이프용 파일 지시자 */
	char buf[30];
	/* 파이프 생성 */
		if(pipe(pfd) == -1) {
			perror("pipe error");
			exit(1);
			}
	/* pfd[1]은 쓰기 전용 */
		printf("Writing to the file descriptor #%d\n", pfd[1]);
		write(pfd[1], "pipe!", 5);
	/* pfd[0]은 읽기 전용 */
		printf("Reading from the file descriptor #%d\n", pfd[0]);
		read(pfd[0], buf, 5);
		printf("%s\n", buf);
		return 0;
}
// 파일 시스템의 파일을 통해 구현된 파이프
// 표준 입력 및 추력 대신
// 여러 프로세스가 파일을 읽고 쓸 수 있슴
// 단방향 데이터 채널
