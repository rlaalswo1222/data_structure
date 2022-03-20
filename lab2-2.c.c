#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [김민재] [2021041070] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i의 값 1234 출력 
printf("address of i == %p\n", &i); //i의 주소값 출력
printf("value of ptr == %p\n", ptr); // ptr의 값 출력
printf("address of ptr == %p\n", &ptr); // ptr의 주소값 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // i의 값 1234 출력
printf("address of i == %p\n", &i); // i의 주소값 출력
printf("value of ptr == %p\n", ptr); //포인터변수 ptr에 담긴 i의 주소값 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소값 출력
printf("value of *ptr == %d\n", *ptr); // 간접참조연산자를 통해 i의 값 출력
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i의 값 1234 출력 
printf("address of i == %p\n", &i); //i의 주소값 출력
printf("value of ptr == %p\n", ptr); // 포인터변수 ptr에 담긴 i의 주소값 출력 
printf("address of ptr == %p\n", &ptr); // ptr의 주소값 출력
printf("value of *ptr == %d\n", *ptr); // 간접참조연산자를 통해 i의 값 출력
printf("value of dptr == %p\n", dptr); // 이중포인터변수 dptr에 담긴 ptr의 주소값 출력
printf("address of dptr == %p\n", &dptr); // dptr의 주소값 출력
printf("value of *dptr == %p\n", *dptr); // 간접참조연산자를 통해 ptr의 값 출력
printf("value of **dptr == %d\n", **dptr); //이중 간접참조연산자를 통해 i의 값 출력
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); // 
printf("value of i == %d\n", i); // 포인터변수 ptr의 값이 7777로 바뀌므로 i의 값도 동시에 변경
printf("value of *ptr == %d\n", *ptr); // 간접참조연산자를 통해 i의 값 출력
printf("value of **dptr == %d\n", **dptr); // 이중 간접참조연산자를 통해 i의 값 출력
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); 
printf("value of i == %d\n", i); /* 포인터변수 dptr의 값이 8888로 바뀌므로 ptr의 값이 8888로 변경, 동시에 ptr은 i의 포인터
변수이므로 i의 값도 8888로 변경 */
printf("value of *ptr == %d\n", *ptr); // 간접참조연산자를 통해 i의 값 출력
printf("value of **dptr == %d\n", **dptr);// 이중 간접참조연산자를 통해 i의 값 출력
return 0;
}