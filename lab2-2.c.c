#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [�����] [2021041070] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i�� �� 1234 ��� 
printf("address of i == %p\n", &i); //i�� �ּҰ� ���
printf("value of ptr == %p\n", ptr); // ptr�� �� ���
printf("address of ptr == %p\n", &ptr); // ptr�� �ּҰ� ���
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // i�� �� 1234 ���
printf("address of i == %p\n", &i); // i�� �ּҰ� ���
printf("value of ptr == %p\n", ptr); //�����ͺ��� ptr�� ��� i�� �ּҰ� ���
printf("address of ptr == %p\n", &ptr); //ptr�� �ּҰ� ���
printf("value of *ptr == %d\n", *ptr); // �������������ڸ� ���� i�� �� ���
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i�� �� 1234 ��� 
printf("address of i == %p\n", &i); //i�� �ּҰ� ���
printf("value of ptr == %p\n", ptr); // �����ͺ��� ptr�� ��� i�� �ּҰ� ��� 
printf("address of ptr == %p\n", &ptr); // ptr�� �ּҰ� ���
printf("value of *ptr == %d\n", *ptr); // �������������ڸ� ���� i�� �� ���
printf("value of dptr == %p\n", dptr); // ���������ͺ��� dptr�� ��� ptr�� �ּҰ� ���
printf("address of dptr == %p\n", &dptr); // dptr�� �ּҰ� ���
printf("value of *dptr == %p\n", *dptr); // �������������ڸ� ���� ptr�� �� ���
printf("value of **dptr == %d\n", **dptr); //���� �������������ڸ� ���� i�� �� ���
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); // 
printf("value of i == %d\n", i); // �����ͺ��� ptr�� ���� 7777�� �ٲ�Ƿ� i�� ���� ���ÿ� ����
printf("value of *ptr == %d\n", *ptr); // �������������ڸ� ���� i�� �� ���
printf("value of **dptr == %d\n", **dptr); // ���� �������������ڸ� ���� i�� �� ���
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); 
printf("value of i == %d\n", i); /* �����ͺ��� dptr�� ���� 8888�� �ٲ�Ƿ� ptr�� ���� 8888�� ����, ���ÿ� ptr�� i�� ������
�����̹Ƿ� i�� ���� 8888�� ���� */
printf("value of *ptr == %d\n", *ptr); // �������������ڸ� ���� i�� �� ���
printf("value of **dptr == %d\n", **dptr);// ���� �������������ڸ� ���� i�� �� ���
return 0;
}