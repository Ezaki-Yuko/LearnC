
//给定一个字符串 S ，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char s[100];
	char letter[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m;
	int i;
	int j;
	int a;
	int b;
	char temp;
	scanf("%s", s);
	j = strlen(s) - 1;
	for (i = 0; i < j; i++) {
		for (m = 0; m <= 51; m++) {
			if (s[i] == letter[m]) {
				a = 1;
				break;
			}
			else {
				a = 0;
			}
		}
		for (m = 0; m <= 51; m++) {
			if (s[j] == letter[m]) {
				b = 1;
				break;
			}
			else {
				b = 0;
			}
		}
		if (a==1&&b==1) {
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
		else if (a==0&&b==1) {
			j++;
		}
		else if (a == 1 && b == 0) {
			i--;
		}
		else if (a==0&&b==0) {

		}
		j--;
		
	}
	printf("%s\n", s);
	system("pause");
	return 0;
}










