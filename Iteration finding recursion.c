//求1+2+3+.....+n
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
		//sum*=i;在里面printf sum的值就是从1到n每次阶乘的输出
	}
	//i是变化量,sum是统计量
	//求阶乘就是把for里的初始i变成1,sum*=i;
	printf("%d", sum);
	system("pause");
	return 0;
}

//如果要求前n项阶乘相加的和 那阶乘就变成了变化量 用sum来统计阶乘
//掐头去尾简写中间算法为
//int i;
//int n;
//scanf("%d",&n);
//int sum=0;
//int temp=1;
//for(i=1;i<=n;i++){
//temp*=i;
//sum+=temp;
//i是一级变化量,temp是二级变化量
//有人变有人累计就是迭代
//}
//printf("%d\n",sum);
//return 0;

//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和,其中a是一个数字,
//循环乘10+n;
//找每一项的递推公式
//例如:2+22+222+2222+22222


int f13() {
	//n作为底数,m作为次数
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

//计算1/1-1/2+1/3-1/4+1/5 ......+1/99-1/100的值.
//迭代法问题
//找递推公式 sum把temp统计起来 唯一变的是sum怎么变的

int f14() {
	//不需要n,m确定是一百项
	int i;
	double sum = 0;
	double temp = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		temp = flag * 1 / (double)i;
		//或者取精度最高的flag*1.0/i;
		flag *= -1;
		//flag辅助变化符号
		sum += temp;
	}
	printf("%.4lf\n", sum);
	//保留四位小数
	system("pause");
	return 0;
}



