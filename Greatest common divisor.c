//�������������Լ��
//��ͨ(һ��)�㷨 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int f15() {
	int a, b;
	int max;
	scanf("%d%d", &a, &b);
	//��������� ��Ŀ�����
	int smaller = a < b ? a : b;
	int i;
	for (i = 1; i < smaller; i++) {
		if (a%i == 0 && b%i == 0) {
			max = i;
		}
	}

	printf("max=%d\n", max);
	system("pause");
	return 0;
}


//�����㷨:ŷ������㷨 շת����� ������Ϊ���ʱ������ ������Ϊ���Լ��


int f16() {
	int a, b;
	int max;

	scanf("%d%d", &a, &b);
	int c;

	c = a % b;
	while (c) {
		a = b;
		b = c;
		c = a % b;
	}

	printf("max=%d\n", b);
	system("pause");
	return 0;

}
