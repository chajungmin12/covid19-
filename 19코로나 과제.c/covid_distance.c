#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid19.h"

//파일입출력을 통해 '사회적 거리 두기 국민 행동 지침 안내'를 알려준다.
//파일입출력을 통해 기록하였던 메모장을 가져와 읽어준다.
//'사회적 거리 두기 조정'은 주기적으로 바뀌므로 메모장을 통해 유동적으로 수정할 수 있게 해준다.
int distance(void) {
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("파일 열기 실패");
		return 0;
	}

	for (int i = 0; i <10; i++) {
		char str[100000];
		fgets(str, sizeof(str), fp);
		printf(str);
	}
	fclose(fp);

	printf("\n--------------------------------------------------------------------\n");
	return 0;
}