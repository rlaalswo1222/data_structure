#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("[----- [�����] [2021041070] -----]\n");
printf("Size of char: %ld byte\n",sizeof(charType)); // char�� ������ ũ�� ���
printf("Size of int: %ld bytes\n",sizeof(integerType)); // int�� ������ ũ�� ���
printf("Size of float: %ld bytes\n",sizeof(floatType)); // float�� ������ ũ�� ���
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double�� ������ ũ�� ���
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); // �ڷ��� char�� ũ�� ���
printf("Size of int: %ld bytes\n",sizeof(int)); // �ڷ��� int�� ũ�� ���
printf("Size of float: %ld bytes\n",sizeof(float)); // �ڷ��� float�� ũ�� ���
printf("Size of double: %ld bytes\n",sizeof(double)); // �ڷ��� double�� ũ�� ���
printf("-----------------------------------------\n");
/*char�� ������ ũ�⸦ ���. ���������� �����ϴ� �޸𸮻� ũ�Ⱑ 4����Ʈ�̹Ƿ�
4����Ʈ ���. �����ʹ� �ּҰ��̹Ƿ� Ÿ�Կ� ������� ��� 4����Ʈ�� ��� */
printf("Size of char*: %ld byte\n",sizeof(char*)); 
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
return 0;
}