/*signal-check.c*/

#include<stdio.h>
#include<signal.h>

int main(void){

	sigset_t set;

	sigemptyset(&set);
	sigaddset(&set, SIGINT);

	//SIGINT가 등록되었는지 확인
	switch(sigismember (&set, SIGINT)){
		case 1: printf("SIGINT는 포함되어 있습니다.\n");
				break;
		case 0: printf("SIGINT는 없습니다.\n");
				break;
		default: printf("sigismember(호출에 실패했습니다.\n)");
	}

	switch(sigismember(&set,SIGYS)){
		case 1: printf("SIGYS는 포함되어 있습니다.\n");
				break;
		case 0: printf("SIGYS는 없습니다.\n");
				break;
		default: printf("SIGYS 호출에 실패\n");
	}
	return 0;

}

