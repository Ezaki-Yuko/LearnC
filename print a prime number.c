//打印100~200之间的素数
//判断素数 从1除到自己减1或者除到根号他以下包括根号他
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f1() {

	int i;
	int n;
	for (n = 2; n <= 10000; n++) {
		//核心是里面的功能性的
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

