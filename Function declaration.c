
//�����������Ͷ���

#include<stdio.h>
#include<stdlib.h>
extern double Max(double , double );//�������� extern�ؼ��� Ҳ����ʡ�� ������ʡ��
//�����൱����һ����ͷ֧Ʊ ���ѱ�����������һ������
#include"calc.h"//�����Ըĳ�<calc.h>
//#include< >����ϵͳĿ¼�в���ͷ�ļ�(��������װ�����Ŀ¼)
//#include""���ڵ�ǰ��ĿĿ¼�в���,Ȼ����ȥϵͳĿ¼�в���
#include"calc.h"//ֱ�ӵ���ͷ�ļ�calc.h
//�൱�ڰ�.h�ļ������ݸ���ճ������ǰ����λ��
//ͨ�������,������׼��ͷ�ļ�,��ʹ��<>,�����Լ���ͷ�ļ���ʹ��""
//�������⿴��������װ������(��Ŀ����ϵͳ)
int main() {
	printf("%f\n", Max(10.0, 20.0));
	system("pause");
	return 0;
}

double Max(double x, double y) {
	if (x > y) {
		return x;
	}
	return y;
}




