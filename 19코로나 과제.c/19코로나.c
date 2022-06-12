/*
  학부    : 컴퓨터공학부
  학번    : 202203455
  이름    : 차정민
  과제주제: 지역별 코로나확진자를 기록하는 프로그램, 기록한 누적확진자에 추가확진자를 추가할 수 있는 프로그램,
            코로나 감염 예방을 알려주는 프로그램.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "covid19.h"

/*19코로나.c 소스파일에 main함수를 작성*/
/*메인함수는 switch문을 써서 3가지 카테고리를 고를 수 있는 함수이다*/
int main(void) {
	int select;
	printf("<카테고리를 선택하시요>\n");
	printf("--------------------------------------------------------------------\n");
	printf("[1]지역별 코로나 현황\n");
	printf("[2]사회적 거리 두기 국민 행동 지침 안내\n");
	printf("[3]코로나19 예방 10가지 행동수칙\n");
	printf("[4]프로그램 종료\n");
	printf("--------------------------------------------------------------------\n");
	scanf("%d", &select);
	switch (select)
	{
	case 1:
		covid19_area();
		break;
	case 2:
		distance();
		break;
	case 3:
		habit();
		break;
	default:
		printf("프로그램을 종료합니다.");
		break;
	}
}