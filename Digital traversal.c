//��λ���� ����������ÿһ����λ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int f7() {
	int n = 123456;

	int i;
	for (i = n; i; i /= 10)//��λ����
	{
		printf("%d ", i % 10);
	}
	system("pause");
	return 0;
}


//�ж�һ����m�������ǲ��ǻع��� ����12321���ǻع���
//���Խ������������ �ж�������������Ƿ���� 

int f8() {
	int n = 1234;
	int m = 8;//������
	int i;

	int sum = 0;
	for (i = n; i; i /= m)//��λ����
		//��10 ������ʮ�������µ�
	{
		sum = sum * m + i % m;
		//i%m������ɶ�n��m������ÿһλ�ı���
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

//��д��������һ��1��100�����������г��ֶ��ٸ�����9.

int f9() {

	int i;
	int count = 0;

	for (i = 0; i <= 100; i++)

	{
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}

	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

//ˮ�ɻ���,1Nλ��,�������֮N�η��͵��ڸ���
//��дһ����λ����

int f10() {
	int i;
	int a, b, c;
	for (i = 100; 1 < 1000; i++)
	{
		a = i % 10;
		b = 1 / 10 % 10;
		c = 1 / 100;

		if (i == a * a*a + b * b*b + c * c*c) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//��������ܶ�λ��ˮ�ɻ���

int f11() {
	int i;
	int addflag = 10;
	int n = 1;
	int sum = 0, j;

	for (i = 1; 1 < 100000000; i++)
		//���η����̶�
	{
		if (i == addflag)
		{
			n++;
			addflag *= 10;
		}
		for (j = i; j; j /= 10) {
			sum += pow(j % 10, n);
		}
		if (sum == i) {
			printf("%d\n", sum);
		}
		sum = 0;
	}
	system("pause");
	return 0;
}
