#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//���������
//ð������
//��0��Ԫ�س���,�Ƚ����ڵ�����Ԫ�صĴ�С,�Ƿ��������Ҫ��,��������Ͼͽ���
void BUbbleSort(int arr[],int size) {
	//��ÿ������СΪ��
	//[0,bound),����������
	//[bound,size)����������
	//ÿ����һ����Сֵ�ŵ�ǰ��ȥ,Ҳ����ζ������������Ͷ�һ��Ԫ��
	//�������������һ��Ԫ��
	for (int bound = 0; bound < size; bound++) {
		//����Ҫһ��ѭ��,���ѭ���͸����ҵ���ǰ�������������Сֵ
		//������boundλ����
		for (int cur = size - 1; cur > bound; cur--) {
			//�Ƚ�����Ԫ�� ����������������ͽ���
			//������ֻ��Ҫ���������еĴ���С�ں�
			if (arr[cur - 1] > arr[cur]) {
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main() {
	int arr[4] = { 9,5,2,7 };
	BUbbleSort(arr, 4);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
//���������Ϊ��������,�Ǿͻ���ʽת��ָ�����.(ָ���������Ԫ��)
void Func(int arr[]) {
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
}
int main5() {
	int arr[4] = { 9,5,2,7 };
	Func(arr);
	return 0;
}
int main4() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8,},
		{9,10,11,12},
	};
	for (int i = 0; i < 3; i++) {
		//shift+alt+r:rename�Ի���(VA���)
		//VS��û�취�����Ϸ�������ע���ڵ�i
		//arr[i]�͵õ���һ������Ϊ4��һά����
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
//��ά����Ҳ��һ��һά����,ֻ���������ÿ��Ԫ��,����һ��һά����
int main3() {
	//����Ϊ3��һά����,ÿ��Ԫ�س���Ϊ4
	//�����Ǽ�ά����,�����ʱ����Զ��ֻ�е�һ��[]�����ֿ���ʡ��,����������ʡ��
	int str[3][4] = {
		//���ű��ʽ,ֵ�������һ��Ԫ�ص�ֵ
		//���2,6,0,0,0,0,0,0....
		(1,2),
	    (5,6),
		//���()����{}���1 2 0 0 5 6 0 0 0 0 0 0
		//�������ž���1 2 5 6 0 0 .....��ȫ0 
	};
	system("pause");
	return 0;
}

//��������һ����ͬ���͵ı��� 
int main2() {
	int arr[] = { 9,5,2,7 };
	for (int i = 0; i <4 ; i++) {
		//%p��ר��������ӡ��ַ��(ָ�������)
		//����ʮ�����Ƶķ�ʽ����ӡ
		//���ڴ�����������
		printf("%p\n", &arr[i]);
	}
	system("pause");
	return 0;
}
int main1() {
	//δ������Ϊ
	char str[] = { 'a','b','c' };
	//�����±�Խ��֮��û���ҵ�\0
	//����strlenֻ�������ַ���
	//[]�±�����
	printf("%d\n", strlen(str));
	system("pause");
	return 0;
}