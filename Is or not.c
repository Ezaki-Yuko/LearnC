
//��ϰ дһ�������ж�һ�����ǲ�������
//�����ڼ�������зǳ��ش������
//����������ܴ���������,�õ�����һ���ܴ����,������̺�����
//�����һ���ܴ������ʽ�ֽ�������ܴ����������
#include<stdio.h>
#include<stdlib.h>
//�������1����Ϊ������,�������0�Ͳ�������
int IsPrime(int num) {
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	//�򵥴ֱ���,��һ��num�ܱ���Щ������
	//�ҷ���
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			return 0;
		}

	}
	return 1;
}

int main() {
	printf("%d\n", IsPrime(99));

	system("pause");
	return 0;
}
//дһ�������ж�һ���ǲ�������
//�������� ��ͨ����
#include<stdio.h>
#include<stdlib.h>
int IsLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	else if (year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	printf("%d\n", IsLeapYear(2020));
	system("pause");
	return 0;

}

//������Ƕ��
//��������ʽ���� һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
