//��ӡ100~200֮�������
//�ж����� ��1�����Լ���1���߳������������°���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f1() {

	int i;
	int n;
	for (n = 2; n <= 10000; n++) {
		//����������Ĺ����Ե�
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++)
		{
			if (n%i == 0) {
				break;
			}
		}
		if (i == sqrtres + 1) {
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}

