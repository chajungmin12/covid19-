#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid19.h"

//�Է¹��� ����ü�迭�� original ������ �־������ν� �߰�Ȯ���ڸ� ����Ȯ���ڷ� �ʱ�ȭ���ش�.
int plus(int original) {
	printf("�߰� �Ͻ� �α��� �����ּ���: ");
	int plus_coronic;
	scanf("%d", &plus_coronic);
	original += plus_coronic;

	return original;
}