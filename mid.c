#include<stdio.h>
int main(void)
{
	printf("dd");
	return 0;
}
/*1. tmux 분리 방법
    컨트롤 b + %
	    cd jaesung2006 누르면 깃에 접속


		   나갈 때 -> control c

  2. Repository(저장소) - 프로젝트 저장 공간 
		      Commit - 작업/변경 내용 저장소에 반영
			     Branch (가지) - 같은 소스코드에서 다른 작업 수행하기 위함, 독립적으로 동시 진행
				                    향 후 병합하는 것 가능
									   Master (마스터) - 처음 저장소 만들때 생성, 새로운 브랜치 선언시 check out 선언
									                      - 통합 브랜치라고도 불림
														     Topic (토픽) - 여러 작업 동시 진행 할 때 통합 브랜치에서 토픽 브랜치 선언, 후에 통합 가능
															      
															    Remote Repository(원격 저장소) - 원격 저장소 전용 서버에서 관리(깃허브)
	   Local Repository(로컬 저장소) - 내 pc에 저장



    ls - al
    git add 파일이름
    git commit -m "파일이름"
    git push origin master
				      


    kill -l  시그널 집합
    kill -s (시그널번호) (프로세스번호)
   프로세스 번호 : ps -ef | grep (컴파일러 이름)
    mkdir (디렉토리이름) -> 디렉토리 생성 하지만 clone하면생성
    cp a.c ../b.c   (이렇게 하면은 전 디렉토리로 파일 복사)    
    testBIPE1 2 3
    mFIFO 2
    malarm
    msig 123
    msigact 123456
				   */
