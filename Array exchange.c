//������A�е����ݺ�����B�е����ݽ��н���.(����һ����)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f4() {
	int a[5] = { 1,2,3,4,5, };
	int b[5] = { 5,6,7,8,9 };

	int i;
	for (i = 0; i < 5; i++)//�������
	{
		printf("%d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	putchar('\n');
	int temp;
	for (i = 0; i < 5; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i < 5; i++)//�������
	{
		printf("%d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}




