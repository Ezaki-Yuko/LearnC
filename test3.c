//��֧��� if switch
//if������������������� �������� ��ִ��if���ź���Ĵ��룬��������ִ��else
//��ν�ĳ���������ʹ����ͼ�����ʾ ��������� ���Ǽ�
//switch������ı������������ͱ��� break������ ��֧���������ִ��
//
//ѭ��
//continue�ͼ�����һ��
//while�������ѭ��������{����������ִ��}�������ͽ�����ѭ��
//forѭ����whileѭ��֮������໥ת��
//forѭ�������whileѭ������һ��������
//for����ʼ������ ִֻ��һ�� ;�����ж���� ;�������� ѭ�����£�
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//��ӡ1-10
	int num = 1;
	while (num <= 10) {
		printf("%d\n", num);
		num++;//�������
	}

	//��ӡ1-10 for�汾
	for (int num = 1; num <= 10; num++) {
		printf("%d\n", num);
	}
	//forѭ����ѭ����ʼ����ѭ��������ѭ������������䣬����һ�� ��������©
	//forִ�е����̣�1.��ʼ����䣨int num=1��2.ѭ��������num<=10��3.ѭ���壨printf��4.ѭ������������䣨num++��5.���ʽ��
	//break��while��for��������һ����
	//continue
	//while�е�continue������ִ�е����ж�ѭ������
	//for�е�continue������ִ�е��ǣ����ʽ3��Ȼ�����Ǳ��ʽ2



	system("pause");
	return 0;
}

*/

/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//��1-100������3�ı���
	
	int num = 1;
	while (num <= 100) {
		if (num % 3 != 0) {
			//����3�ı���
			num += 1;
			continue;//����continueִ��ѭ������num<=100������ȱnum++
		}
		//��3�ı���
		printf("%d\n", num);
		num += 1;
		}
		
	for (int num = 1; num < 101; num += 1) {
		//���ʽ1����û�� д��for����һ�����������ı� ������forѭ���������main������
		//���ʽ3Ҳ����ʡ�ԣ�ʡ�Ժ��ʽ������while
		//���ʽ2Ҳ����ʡ�ԣ������ֺŲ�����ʡ�ԣ�Ĭ��Ϊ�棬һֱִ��
		if (num % 3 != 0) {
			continue;//continue֮��ִ�б��ʽ3����ִ�б��ʽ2���ֻ�ص�num++
		}
		printf("%d\n", num);
	}

	system("pause");
	return 0;
}

//���� ���ʵ�ʱ��Ҳ����ǰ�պ��
//������Ҫ��ѭ�������޸�ѭ������
//[1,100]ǰ�պ�գ�����1��Ҳ����100
//[1,100)ǰ�պ󿪣�����1��������100
//forѭ�����Ʊ�����ȡֵ��������ǰ�պ�
//�������Ǻ��£������׳������������һЩԼ��
//ҵ��ͨ�õ����� �Ժ�Ӵ������������ĸ���󲿷�Ĭ�϶���ǰ�պ󿪵ķ�ʽ��
//���������е�for��������������ѭ��
//if(num>0){break;}�Ϳ��Խ���ѭ����
//������һ��ѭ����������ѭ��
//C�����е����еı����Ŷ���Ӣ�ķ���
//д����Ҫѡ����ʵ����壬Ҫ�ø����ַ�֮�����ֶȱȽϸ�
// 

*/

/*
//�ѹ�
//360 ������
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k == 0; i++, k++) {
		//k=0;�Ǹ�ֵ���,����ֵΪ0,�����Ǽ� ��ִ��ѭ��
		//�����ǱȽϻ��Ǹ�ֵ,����ǱȽ�k==0��ѭ����һ��
		k++;
		printf("hehe\n");
	}
	system("pause");
	return 0;
}
*/

/*
//do..whileѭ��

#include<stdio.h>
#include<stdlib.h>

int main() {
	//��ӡ1=10
	int num = 1;
	do {
		printf("%d\n", num);
		num += 1;


	} while (num<=10);

	system("pause");
	return 0;
}

//do...while ��ѭ�����ж�

*/
//��ϰ��
/*
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Factor(int n) {
	int result = 1;
	for (int i = 1; i <= n; i += 1) {
		result *= i;

	}
	return result;
}


int main() {
	//����n�Ľ׳�
	//printf("������һ��N:");
	//int n = 0;
	//scanf("%d", &n);
	//int b=Factor(n);
	//printf("reslut=%d\n", b);

	//����1!+2!+3!+...+10!
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += Factor(i);
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

//10!�������� �������ܴ�����ֿ��Ա�����
//����(cache)������г�����˼�뷽��

*/

/*
//��ʾ����ַ��������ƶ�,���м���
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//Windowsϵͳ����
#include<Windows.h>


int main() {
	char str1[] = "Welcome to bit!";
	char str2[] = "###############";

	int left = 0;
	int right = strlen(str1)-1;
	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		left += 1;
		right -= 1;
		//cls:clear screen cmd������ ����
		//��������ͼƬ�Ĳ�������
		system("cls");
		printf("%s\n", str2);
		Sleep(500);
		//��λ�Ǻ���

	}
	system("pause");
	return 0;
}

//Sleep��ʾ˯��,����Ҫ����CPU,����Ϣһ���
//Sleep��strlen,printf,system�б��ʵ�����
//strlen��C���Եı�׼�⺯��
//Sleep����ϵͳ�ĺ��� ֻ��Windowsϵͳ������ ��λ�Ǻ���(ms)
//Linux�ϵ�Sleep������sleep ��λ����(s)

*/


/*
//ģ���û���¼�龰,ֻ�ܵ�½����,ֻ����������������,���������˳���¼
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	//VC6 bug ������ ���Բ���Ҫ��i�Ķ����ϳ���
	//����һ������
	int i = 0;//�ŵ�����Ͳ�����������forѭ������
	for (; i < 3; i++) {
		char password[1024] = { 0 };
		printf("����������:");
		scanf("%s", password);
		//�ַ���Ҳ�ܱȽϴ�С.ASCII���ȱȵ�һ���ַ� �������� �ֵ���
		//strcmp���ǰ��� �ֵ��� �Ƚ��ַ�����С
		//��� ��һ���ַ��� С�� �ڶ���,����<0������.
		//��� ��һ���ַ��� ���� �ڶ���,����>0������.
		//������ ����0
		if (strcmp(password, "888888") == 0) {
			//�����ֵ�
			printf("��½�ɹ�!\n");
			break;
			//
		}
		else {
			printf("������������,������!");

		}

	}
	if ( i == 3) {
		printf("���Ѿ��������!\n");
	}
	
	system("pause");
	return 0;
}

*/

/*
//˳�����
#include<stdio.h>
#include<stdlib.h>

int main() {
	//����һ������ ȥ����ĳ�������Ƿ��������д���
	int arr[] = { 9,5,2,7 };
	//�����ڶ����ʱ��[]��������ֿ���ʡ�Ե�
	//����ڳ�ʼ����ʱ�����ָ������ĳ��ȾͿ���ʡ��
	//9527(LZSb)
	//tql̫ǿ�� cy����
	//�ٶ����� �й���������̱� �Ļ�������ʹ���
	int toFind = 2;
	for(int i = 0; i < 4; i++) {
		if (arr[i] == toFind) {
			printf("�ҵ���!�±���:%d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}

*/

//���һ����������� ����ʹ�ö��ֲ��� Ҳ���۰���� �ӿ�Ч��
//����:����(��С����),����(�Ӵ�С)


/*
//�������ǳ���Ҫ
#include<stdio.h>
#include<stdlib.h>

int main() {

	int arr[] = {1,3,4,5,6,7,8,9};
	int toFind = 2;
	//�۰���� �����������

	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	//sizeof(arr)��arr���ֽ��� 
	//����Ŀ�ά����,�����Ǿ�����Ҫ�Ķ���
	//�Ķ�ԽС,��ά����Խ��
	//C++�� arr.size()
	//Java��arr.length
	//Python��len(arr)
	//[left,right]���������� �غ�Ҳ��Ԫ��
	while (left <= right) {
		int mid = (left + right) / 2;
		//�ɶ���
		if (arr[mid] < toFind) {
			//���ұ���
			left = mid + 1;
		}
		else if (arr[mid] > toFind) {
			//����߲���,����right
			right = mid - 1;
		}
		else {
			//�ҵ���
			printf("�ҵ����Ԫ����,�±���:%d\n",mid);
			break;
		}

	}
	if (left > right) {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}

*/


//��������Ϸ 1-100֮�������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Game() {
	//1.ϵͳ�Զ�����һ������,�����
	//ʱ����һֱ�ڱ��
	//������Ӳ��̶ܹ�,���������ÿ�ζ������仯������
	//time_t=>unsigned long long 
	//srand=>unsigned int
	//ǿ������ת��
	//ÿ��������������Ӷ���һ��
	//50��������15��
    //70��=>2040������ ʱ�����Χ���int
	//time�����õ��Ľ����Ϊʱ���
	//ʱ���:�����ǵ�1970��1��1��0ʱ0��0����Ϊ��׼ʱ��,���㵱ǰʱ�̺ͻ�׼ʱ�̵�����֮��
	int toGuess = rand() % 100 + 1;
	//����ÿ���������ò�ͬ�ĳ�ʼֵ,�õ�����������оͲ�ͬ��,����Ծ͸�����
	//��ͬ��������������첻ͬ�������
	//��������������α���
	//ÿ�δ����ж�һ��
	while (1) {
		//2.���û�����һ������
		printf("������һ������(1-100):");
		int num = 0;
		scanf("%d", &num);

		if (num < toGuess) {
			printf("����!\n");
		}
		else if (num > toGuess) {
			printf("����!\n");
		}
		else {
			printf("��ϲ��,�¶���!\n");
			break;
		}
	}
}



int main() {
	srand((unsigned int)time(0));
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}


int Menu() {
	printf("===============\n");
	printf("1.��ʼ��Ϸ!\n");
	printf("2.�˳���Ϸ!\n");
	printf("===============\n");
	printf("����������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

//����һ��Ҫ��Debug�н���
//��ϵ�:��ĳ��ǰ����굥��,����һ����ɫԲ��
//Ctrl+F5������(���в�����) ������F5
//�м�ͷ��ԲȦ���Ǹ����и��жϵ����һ��
//Ctrl+���������Զ�λ�������ĺ�����
//��������ϵ��F5,���ǳ����ܵ���һ��,��������ִ�д�ϵ����һ��
//�����ڸ���,����,�����˴�ϵ�,ͨ��ԲȦ�ڵļ�ͷ,���жϳ�����ܵ���һ����















