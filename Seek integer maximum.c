//��10�����������ֵ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f18() {
	int Max = 0;
	int temp = 0;
	int i;
	for (i = 0; i < 10; i++) {
		//scanf�����ո�͵��˴����������
		//��Ȼ������������ʱ��һ�������������ݣ������ÿո����
		scanf("%d", &temp);
		if (i == 0) {
			Max = temp;
		}
		else if (temp > Max) {
			Max = temp;
		}

	}
	printf("%d\n", Max);
	return 0;
}

//�ڶ���
int f19()
{
	int num = 0;
	int max = num;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
		}
	}
	printf("max=%d\n", max);
}

//��ʮ�������δ�ֵ

int f20() {
	int max = 0x80000000;
	int next = 0x80000000;
	int temp = 0;

	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &temp);
		if (temp > max) {
			next = max;
			max = temp;
		}
		else if (temp > next&&temp != max) {
			next = temp;
		}
	}
	if (next == 0x80000000) {
		printf("ʮ���������,�����ڴδ�ֵ!\n");
	}
	else {
		printf("%d\n", next);
	}
	system("pause");
	return 0;
}
