
//дһ������,ʵ��һ��������������Ķ��ֲ���
#include<stdio.h>
#include<stdlib.h>
//ͨ�������������ɶ��ֲ���
//�ڷǳ�ƣ���ͽ��ŵ������,��Ȼ����ֽ��д����
//���ݽṹ,�����������,�����������,Ҫ��ͬ��
//�����������
//C�����е�������Ϊ����������ʱ��,����ʽת��ָ��,ָ��������Ԫ�ص�ָ��(bug ��Ϊ�˱�֤�����Բ���)
//����ܶ�ʱ������ʽת��ָ��
//��Щʱ��ָ���ʹ�ú�����ǳ�����,Ҳ��[]ȡ�±�
int BinarySearch(int arr[],int size,int toFind) {
	int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) -1 �Ǵ����  4/4-1��ʽת��ָ���,sizeof����
	int right =size- 1;//���һ��Ԫ�ص��±�
	//[left,right]ǰ�պ������ ����������
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > toFind) {
			//�������
			right = mid - 1;
		}
		else if (arr[mid] < toFind) {
			//�ұ���
			left = mid + 1;
		}
		else {
			//�ҵ���
			return mid;
		}
	}
	return -1;
}





