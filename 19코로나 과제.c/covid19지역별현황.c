#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "covid19.h"

#define SIZE 8

//코로나19 지역별 현황 (주요 지역 8개)
//각지역 누적확진자와 신규확진자 작성하는 프로그램

//구조체를 이용하여, 지역이름과 확진자수를 보다 편리하게 작성할 수 있게 해준다.
struct area_select {
	char name[20];
	int coronic;
};
//선언한 구조체와 반복문을 이용하여 지역확진자를 기록한다. 
int covid19_area(void) {
	printf("코로나확진자 8개의 지역을 입력하세요.\n");
	printf("[예시)8개 지역 --> 경기,서울,부산,경남,인천,경북,대구,충남]\n");
	printf("[참고] 6월 10일 기준 지역별 누적확진자 현황\n");
	printf("경기:4,948,774\n서울:3,635,708\n부산:1,097,720\n경남:1,094,759\n인천:1,076,197\n경북:783,343\n대구:764,763\n충남:717,298\n");
	printf("--------------------------------------------------------------------\n");
	struct area_select where[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("지역이름을 입력하시오:");
		scanf("%s", where[i].name);
		printf("현재 확진자수를 입력하시오:");
		scanf("%d", &where[i].coronic);
	}
	printf("--------------------------------------------------------------------\n");
	//기록한 지역확진자를 반복문을 통해 화면에 띄어 확인한다.
	while (1) {
		for (i = 0; i < SIZE; i++)
			printf("지역이름: %s 확진자수: %d\n", where[i].name, where[i].coronic);

		printf("--------------------------------------------------------------------\n");
		printf("확진자 추이를 보고싶은 지역을 선택하시오: ");
		char want_select[20];
		int result;
		scanf("%s", want_select);

		for (int j = 0; j < SIZE; j++) {
			if (strcmp(where[j].name, want_select) == 0) {
				printf("%s를 선택하셨습니다.\n", where[j].name);
				result = j;
			}
		}
		printf("\n선택하신 지역 '%s'의 현재확진자수는 %d명입니다\n", where[result].name, where[result].coronic);
		printf("--------------------------------------------------------------------\n");
		//기록한 누적확진자에 신규확진자를 추가할 수 있게, 반복문과 문자열비교를 통해 간결하게 써준다.
		printf("신규확진자를 추가하시겠습니까? [네 or 아니요(프로그램을 종료합니다.)]\n");

		char answer[10];

		scanf("%s", &answer);
		while (1) {
			if (strcmp(answer, "네") == 0) {
				int last = plus(where[result].coronic); //plus함수를 통해 신규확진자를 추가해준다.
				where[result].coronic = last;
				printf("--------------------------------------------------------------------\n");
				printf("신규확진자를 추가하시겠습니까? [네 or 아니요(프로그램을 종료합니다.)]\n");
				break;
			}
			//더 이상 신규확진자를 추가하고싶지 않을 때는 프로그램을 종료한다.
			else if (strcmp(answer, "아니요") == 0) {
				printf("프로그램을 종료합니다.\n");
				printf("--------------------------------------------------------------------\n");
				return 0;
			}
			else {
				printf("다시 입력해주세요.\n");
				printf("--------------------------------------------------------------------\n");
				break;
			}
		}
	}
	return 0;
}