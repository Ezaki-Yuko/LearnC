
//�ж�1000��--2000��֮�������
//�����߼���д��
//����:���������4�ı����Ҳ���100�ı��������߹���������������ģ�����400�ı���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f2() {

	int y = 1900;
	//�ж�����
	if (y % 400 == 0 ||
		y % 100!0 && y % 4 == 0)
	{
		printf("%d", y);
	}
	system("pause");
	return 0;
}


//�ж�һ�������Ƿ�Ϸ�

int f3() {

	int y = 0;
	int m = 0;
	int d = 0;

	scanf("%d%d%d", &y, &m, &d);

	int flag = 0;

	if (y % 400 == 0 ||
		y % 100 != 0 && y % 4 == 0)
	{
		flag = 1;
	}
	if (d > 31 || m > 12 || d < 1 || m < 1 ||
		(m == 4 || m == 6 || m == 9 || m == 11) && d>30 ||
		(m == 2) && d>28 + flag || y < 1)
	{
		printf("���Ϸ�\n");
	}
	else {
		printf("�Ϸ�\n");
	}
	system("pause");
	return 0;
}

