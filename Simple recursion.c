//�����ĵݹ�
//һ������Ҳ�ܵ����Լ�.�����,ʵ�ʴ���ִ�й����п��ܻ�Ƚϸ���
//�����ĵ��õ�ִ�й��� 
//�������þͻ���뵽�������ڲ�ִ��,����return���,�����ͽ�����,�ص�����λ�ü���ִ��
//дһ������,����һ������ֵ(�޷�������),����˳���ӡ����ÿһλ.
#include<stdio.h>
#include<stdlib.h>
void PrintNum(unsigned int num) {
	if (num > 9) {
		PrintNum(num / 10);
	}
	//ifû��else���if��������û�б�ķ�ֱ֧�Ӽ��������������
	printf("%d\n", num % 10);
}

int main() {
	PrintNum(1234);
	system("pause");
	return 0;
}

