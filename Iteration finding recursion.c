//��1+2+3+.....+n
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int f12() {
	int i;
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (i = 0; i <= n; i++) {
		sum += i;
		//sum*=i;������printf sum��ֵ���Ǵ�1��nÿ�ν׳˵����
	}
	//i�Ǳ仯��,sum��ͳ����
	//��׳˾��ǰ�for��ĳ�ʼi���1,sum*=i;
	printf("%d", sum);
	system("pause");
	return 0;
}

//���Ҫ��ǰn��׳���ӵĺ� �ǽ׳˾ͱ���˱仯�� ��sum��ͳ�ƽ׳�
//��ͷȥβ��д�м��㷨Ϊ
//int i;
//int n;
//scanf("%d",&n);
//int sum=0;
//int temp=1;
//for(i=1;i<=n;i++){
//temp*=i;
//sum+=temp;
//i��һ���仯��,temp�Ƕ����仯��
//���˱������ۼƾ��ǵ���
//}
//printf("%d\n",sum);
//return 0;

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮��,����a��һ������,
//ѭ����10+n;
//��ÿһ��ĵ��ƹ�ʽ
//����:2+22+222+2222+22222


int f13() {
	//n��Ϊ����,m��Ϊ����
	int i;
	int n;
	int m;
	scanf("%d%d", &n, &m);

	int sum = 0;
	int temp = 0;
	for (i = 1; i <= m; i++) {
		temp = temp * 10 + n;
		sum += temp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

//����1/1-1/2+1/3-1/4+1/5 ......+1/99-1/100��ֵ.
//����������
//�ҵ��ƹ�ʽ sum��tempͳ������ Ψһ�����sum��ô���

int f14() {
	//����Ҫn,mȷ����һ����
	int i;
	double sum = 0;
	double temp = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		temp = flag * 1 / (double)i;
		//����ȡ������ߵ�flag*1.0/i;
		flag *= -1;
		//flag�����仯����
		sum += temp;
	}
	printf("%.4lf\n", sum);
	//������λС��
	system("pause");
	return 0;
}



