//��������û�в����ͷ���ֵvoid
//static�����÷�������һ���ֲ����� �������ڱ�Ϊ������������
//����һ��ȫ�ֱ��� �޸������� ��Ϊ��ǰ�ļ�
//���κ��� �޸������� ��Ϊ��ǰ�ļ�
/*
#include<stdio.h>
#include<stdlib.h>
//����������û�к����壬ֻ��һ����ͷ֧Ʊ�����߱�������������һ������
//1.���߱���������һ������ΪAdd�ĺ���
//2.�����������������������double����
//3.�����������һ������ֵ������Ҳ��double
extern double Add(double x, double y);

int main() {
	double  a = 10.0;
	double  b = 20.0;
	double  c = Add(a, b);
	//%d��ӡʮ�����з��ŵ����� ����Ҫ��ȱһ����
	//%f���ܴ�ӡһ��������.
	printf("c=%f\n", c);

	system("pause");
	return 0;

}
double Add(double x, double y) {

	int sum = x + y;
	//return x + y;
	return sum;
}
//warning���棨���������� error����
//Ҫ�Ѿ��浱�ɴ�������������Ӧ��Ҫ��������еľ���.
//�汾������ �鿴��ÿһ�д��붼��˭�ĵ�
//��������Ҫ�ں������õ��Ϸ�������ͻ�����Ҳ�����������
//�����Ҫ�������棬��Ҫ���Ϸ����Ϻ�������.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ʹ�ú� ���Զ���һ������
//���������ض���һ�����͵ı���
//�껹��Ӱ�쵽����������Ϊ.#define _CRT_SECURE_NO_WARNINGS�������include������ scanf
//�껹�ܶ���һ������Ƭ�Σ������ں�����Ч����
//........
//��ı����൱���ı��滻
#define SIZE 5

//typedef unsigned int unit;
#define unit unsigned int

int main() {
	//printf("SIZE=%d\n", SIZE);
	//system("pause");
	unit a = 10;

	scanf("%d\n", &a);
	system("pause");
	return 0;
}
*/
//#define Add(x,y)x+y
//�ı��滻 �൱����Add(x,y)�滻x+y
//û������
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	//printf("%d\n", Add(10, 20));

	int x = 10;
	int* p = &x;
	printf("%d\n", *p);
	//*p��int* p  *���������Σ���������*��Ȼ��ͬ
	//�����*����������ӷ��ʲ�������Ҳ�����������ò�������
	//�����*p ����ָ�� p �д�ĵ�ַ���ҵ������ַ�ж�Ӧ�����ݣ�x��
	//x���ĸ��ֽڣ�ȡ��ַ�õ���С���Ǹ���0X100��
	//���� p ����һ��ָ�����͵ı���������ǵ�ַ
	//����ָ�����д��int* p������Ҫд��int *p
	//��Ϊ���ǵ�int* ��C�����о���һ�ֵ������������ͣ���int double float���ǲ��еĹ�ϵ
	// p��int*���͵�

	system("pause");
	return 0;
}
//C�����������ѵĲ���ָ�룬���Ƕ��ڴ�����
//Java����̫��ע�ڴ� ��ѧϰ
//Ҫ�����ָ��Ҫ������ڴ�
//����� CPU �洢�����ڴ���棩 �����豸 ����豸
//ֱ�۵İ��ڴ���������ǵ��������ȣ��������кܶ������
//ÿ�������С1���ֽڣ���8bit��ÿ�����������������ƺ�
//���ƺŴ�0��ʼ�����������ۼӣ��������ǵ��ڴ滹ͦ��
//ƽʱ���ǿ����ķ����Ҳ������һ���Ƚϴ�����֣����������֣���������ַ��
//ָ��Ҳ��һ����������������б�����һ�������������������һ���ض��ĺ��壬
//��ʾ�ڴ��е�һ����ַ
//ָ���������Ҳռ���ڴ�ռ䣨������
//10=>ʮ��������
//0x10=>ʮ���������� 0x/0X��ͷ�� ABCDEF
//����ϰ����ʹ��ʮ����������ʾ��ַ
*/

//�ṹ����һ���û��Զ��������. 
//���Խ������е��������ƴװһ�£����ܹ����µ��Զ�������
/*
#include<stdio.h>
#include<stdlib.h>
//��ʱ�൱�ڴ�����һ���µ����� struct Student
struct Student {
	//��Ա/����/�ֶΣ��������У�
	char name[20];
	int age;
	int score;
};

int main() {
	struct Student s = {"����",18,100};

	//���ڽṹ�壬����ĵ�ʹ�÷�ʽ��ʹ�����ĳ�Ա
	// . ��Ա���������

	//��ӡһ���ַ���
	printf("%s\n", s.name);
	//Ҳ���Խ����޸�
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}
*/


//��֧����ѭ�����
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	//����� һ��ֻ�� ;
	//���֧���
	//if����е�{}����ʡ�� ����else����һ����䲻�������Ƿ����㶼�����
	//���仰˵if else ���û��{}ֻ��һ�������������֧�еĴ���
	//����Ӵ�����
	int choice = 0;
	printf("�������д������1��ʾ�ᣬ0��ʾ���ᣬ2��ʾ�����п�");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("����õ���offer��\n");
	}
	else if(choice==0){
		printf("�ؼ�������ɣ�\n");
	}
	else if (choice == 2) {
		printf("�����ľͺã�\n");
	}
	else {
		printf("������������!\n");
	}
    system("pause");
	return 0;
}

*/
//�棨true��/�٣�false��=>����

//choice==1���Ǹ�����



//���ִ����ŵķ�񶼿��� ��ǿ��Ҫ�� �����뱣֤������һ�� ����������һ�� ���߸�����һ��
//�󲿷ֱ�������Ƽ�д��ͬһ�У�Java��
//����Щ����ǿ�Ʊ����{д��ͬһ�У�GO��

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	//C�����з���ֵ������ʾ�棬0������ʾ��
	//Ϊ��ִ��if��䣬Ϊ��ִ��else
	int choice = 0;
	printf("�������д������1��ʾ�ᣬ0��ʾ���᣺");
	scanf("%d", &choice);
	//printf("%d\n", choice == 1);
	if (choice) {
		printf("hehe\n");
	}
	else {
		printf("haha\n");
	}
	system("pause");
	return 0;
}

//��������else Ҫ�淶�ļӴ�����{}

*/


/*
//�ж�һ�����Ƿ�Ϊ����
//����1��ʾ���������������ʾ��ż�� ��ð��չ淶
//����������������Ҫ�ú���ƴ��
#include<stdio.h>
#include<stdlib.h>
int IsOdd(int x) {
	//���д��x%2==0������1 �����1�Ļ���x==-11�Ͳ���1������-1���Ͳ���������
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {

	printf("%d\n", IsOdd(11));

	system("pause");
	return 0;
}
*/

/*
//���1-100֮�������

#include<stdio.h>
#include<stdlib.h>

int IsOdd(int x) {
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {

	int num = 1;
	while (num <= 100) {
		if (IsOdd(num)) {
			printf("%d\n", num);
		}
		num += 1;
	}

	system("pause");
	return 0;
}

*/


/*
//switchҲ�Ƿ�֧��䣬���ʺ�ȥ��ʾ���֧�����
//�û�����һ��1-7������
//�������1�ʹ�ӡ����һ
//����2�ʹ�ӡ���ڶ�
//........

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("��������������ڼ���1-7����");
	int day = 0;
	scanf("%d", &day);
	//switch(��Ҫȥ���ж��֧�жϵı���)
	switch (day) {
	case 1:
		//������ƥ���ֵ
		printf("����һ��\n");
		break;      //������Ҫ
		//break������ǰ��switch���
	case 2:
		printf("���ڶ���\n");
		break;
	case 3:
		printf("��������\n");
		break;
	case 4:
		printf("�����ģ�\n");
		break;
	case 5:
		printf("�����壡\n");
		break;
	case 6:
		printf("��������\n");
		break;
	case 7:
		printf("�����죡\n");
		break;
	default :
		printf("������������\n");
		break;
	}
	//
	system("pause");
	return 0;
}

//switch�����еı�����ֻ��������
//break��� ������©
//switch��̫�ܱ�︴�ӵ�����
//switchҲ֧��Ƕ�� ���ǳ���
//switch ����ɵĹ��� if-elseҲ��ȫ����ʤ��
//���ȿ���ʹ��if-else�������ر�������ʹ��switch
*/


/*
//�ж����ڻ�����ĩ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("��������������ڼ���1-7����");
	int day = 0;
	scanf("%d", &day);
	//switch(��Ҫȥ���ж��֧�жϵı���)
	switch (day) {
	case 1:
		//������ƥ���ֵ
		  //������Ҫ
		//break������ǰ��switch���
	case 2:
	case 3:
	case 4:
	case 5:
		printf("���ڣ�\n");
		break;
	case 6:
	case 7:
		printf("��ĩ��\n");
		break;
	default:
		printf("������������\n");
		break;
	}
	system("pause");
	return 0;
}
*/
/*
//ѭ����� while for do..while
//while��1��ӡ��10
#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 1;
	//���while�����;ʲôҲ�����ӡ���� ����ѭ����ѭ��
	//while(num<=10)
    //;�����
	//��Ҫʡ�Դ�����
	//whileִ�еĻ�������
	//1.�ж�whileѭ������
	//2.�������������ִ��ѭ����
	//3.�������������������ѭ��
	//4.���ѭ����ִ�����ˣ��ٴ��ж�ѭ������
	while (num <= 10) {
		printf("%d\n", num);
		num += 1;
	}

	system("pause");
	return 0;
}


*/

//break ������ǰ��ѭ����䣬��������ѭ��
//continue �������ѭ����ֱ�ӽ�����һ��ѭ��
#include<stdio.h>
#include<stdlib.h>

int main() {
	//��1-100���ҵ���һ����3����������
	//��1-100���ҵ����б�3����������
	int num = 1;
	/*
	while (num <= 100) {
		if (num % 3 != 0) {
			
			num++;
			continue;
			
		}
		printf("%d\n", num);
		num++;
	}
	*/
	while (num <= 100) {
		if (num % 3 == 0) {

			printf("%d\n", num);
		}
	     num++; 
	}
	system("pause");
	return 0;
}















