/*
  �к�    : ��ǻ�Ͱ��к�
  �й�    : 202203455
  �̸�    : ������
  ��������: ������ �ڷγ�Ȯ���ڸ� ����ϴ� ���α׷�, ����� ����Ȯ���ڿ� �߰�Ȯ���ڸ� �߰��� �� �ִ� ���α׷�,
            �ڷγ� ���� ������ �˷��ִ� ���α׷�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "covid19.h"

/*19�ڷγ�.c �ҽ����Ͽ� main�Լ��� �ۼ�*/
/*�����Լ��� switch���� �Ἥ 3���� ī�װ��� �� �� �ִ� �Լ��̴�*/
int main(void) {
	int select;
	printf("<ī�װ��� �����Ͻÿ�>\n");
	printf("--------------------------------------------------------------------\n");
	printf("[1]������ �ڷγ� ��Ȳ\n");
	printf("[2]��ȸ�� �Ÿ� �α� ���� �ൿ ��ħ �ȳ�\n");
	printf("[3]�ڷγ�19 ���� 10���� �ൿ��Ģ\n");
	printf("[4]���α׷� ����\n");
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
		printf("���α׷��� �����մϴ�.");
		break;
	}
}