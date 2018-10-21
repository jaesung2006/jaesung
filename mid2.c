/*sigaction 함수란 ? 시그널 핸드러를 만들때 사용#include<signal.h>

sa_handler : 시그널 발생시 실행된 함수 설치/dlf과 ign 지정 가능 (전자는 기본행동 후자는 시그널 무시)

sa_mask : 핸들러함수가 실행되는 블럭되어야 하는 시그널 마스크 제공

sa_flags : 프로세스 행위 수정 밑에 중에서 하나 이상의 것들에 의해 만들어짐

SA_NOCLDSTOP : 시그넘이 SIGCHLD이면 중단되었을 때 자식 프로세스는 이를 통지 못받음

SA_ONESHOT, SA_RESETHAND : 시그널처리기 호출되면 기본 상태에 대한 시그널 액션 재 저장

SA_RESTART : 시그널 재 시작

SA_NOMASK, SA_NODEFER : 시그널 처리기로부터 수신 안 받음

SIG_SETMASK : 시그널을 블럭화된 시그널로 저장

KILL 함수 이용하여 시그널 보냄

pid > 0 pid에 대응되는 시그널 보냄
pid == 0 모든 시그널 보냄
pid == -1 1번 제외 보냄

sig4번 함수
call sigaction
^C              --> signalHandler 함수 실행
start handler
^Z              --> 블록화 됨(sigstop 시그널을 보내지만 블록화됨)
	end handler
	                --> 블록화 되었던 ^Z(sigstop) 시그널 해제되어 프로세스 멈춤
					[1]+ Stopped                       ./a.out
*/


