//�������������������� nums1 �� nums2��
//�� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ����������
//ð������
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	int nums1[4] = {2,5,6,8};
	int nums2[5] = {1,3,4,6,7};
	int nums3[9] = {0};
	int j;
	int t;
	for (i=0;i<=3;i++) {
		nums3[i] = nums1[i];
	}
	for (i=0;i<=4;i++) {
		nums3[4 + i] = nums2[i];
	}
	for (j = 0; j < 8; j++) {
		for (i = 0; i < 8 - j; i++) {
			if (nums3[i] > nums3[i + 1]) {
				t = nums3[i]; nums3[i] = nums3[i + 1]; nums3[i + 1] = t;
			}
		}
	}
	for (i = 0; i < 9; i++) {
		printf("%d\n", nums3[i]);
	}
	system("pause");
	return 0;
}





