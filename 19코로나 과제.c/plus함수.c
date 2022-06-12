#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid19.h"

//입력받은 구조체배열을 original 변수에 넣어줌으로써 추가확진자를 누적확진자로 초기화해준다.
int plus(int original) {
	printf("추가 하실 인구를 적어주세요: ");
	int plus_coronic;
	scanf("%d", &plus_coronic);
	original += plus_coronic;

	return original;
}