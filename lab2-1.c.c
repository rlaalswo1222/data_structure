#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("[----- [김민재] [2021041070] -----]\n");
printf("Size of char: %ld byte\n",sizeof(charType)); // char형 변수의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(integerType)); // int형 변수의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(floatType)); // float형 변수의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double형 변수의 크기 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); // 자료형 char의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(int)); // 자료형 int의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(float)); // 자료형 float의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(double)); // 자료형 double의 크기 출력
printf("-----------------------------------------\n");
/*char형 포인터 크기를 출력. 포인터형이 차지하는 메모리상 크기가 4바이트이므로
4바이트 출력. 포인터는 주소값이므로 타입에 상관없이 모두 4바이트를 출력 */
printf("Size of char*: %ld byte\n",sizeof(char*)); 
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
return 0;
}