//�����������Ӵ�С���.
//���ν��� ð��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int f17() {
	int a;
	int b;
	int c;
	//%dʮ���� %xʮ������ %oʮ����
	scanf("%d%d%d", &a, &b, &c);
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}

