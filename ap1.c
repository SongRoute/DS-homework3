#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [송 동 선]  [2023078041] -----]\n");

    int list[5];
    // 정수형 포인터 배열 plist 선언 및 초기화
    int *plist[5] = {NULL,};

    // 동적 메모리 할당을 통해 plist[0]이 가리키는 메모리에 int형의 크기만큼 할당
    plist[0] = (int *)malloc(sizeof(int));

    // list 배열에 값 할당
    list[0] = 1;
    list[1] = 100;

    // plist[0]이 가리키는 메모리에 값 할당
    *plist[0] = 200;

    printf("list[0] = %d\n", list[0]);
    printf("&list[0] = %p\n", &list[0]);
    // list의 시작 주소 출력
    printf("list = %p\n", list);
    // list 배열의 주소 출력
    printf("&list = %p\n", &list);

    printf("----------------------------------------\n\n");

    // list[1] 출력
    printf("list[1] = %d\n", list[1]);
    // list[1]의 주소 출력
    printf("&list[1] = %p\n", &list[1]);
    // *(list+1)의 값 출력
    printf("*(list+1) = %d\n", *(list + 1));
    // list+1의 값 출력 (다음 요소의 주소)
    printf("list+1 = %p\n", list+1);

    printf("----------------------------------------\n\n");

    // *plist[0]의 값 출력
    printf("*plist[0] = %d\n", *plist[0]);
    // &plist[0]의 주소 출력
    printf("&plist[0] = %p\n", &plist[0]);
    // &plist의 주소 출력
    printf("&plist = %p\n", &plist);
    // plist의 주소 출력
    printf("plist = %p\n", plist);
    // plist[0]의 값 출력 (동적으로 할당받은 메모리 주소)
    printf("plist[0] = %p\n", plist[0]);
    // plist[1]~plist[4]의 값 출력 (모두 NULL로 초기화되어 있음)
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    // 동적으로 할당한 메모리 해제
    free(plist[0]);
}