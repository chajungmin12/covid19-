#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid19.h"

//����������� ���� '��ȸ�� �Ÿ� �α� ���� �ൿ ��ħ �ȳ�'�� �˷��ش�.
//����������� ���� ����Ͽ��� �޸����� ������ �о��ش�.
//'��ȸ�� �Ÿ� �α� ����'�� �ֱ������� �ٲ�Ƿ� �޸����� ���� ���������� ������ �� �ְ� ���ش�.
int distance(void) {
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����");
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