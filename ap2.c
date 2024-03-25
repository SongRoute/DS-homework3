#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("[----- [송 동 선]  [2023078041] -----]\n");

    // 정수형 배열 list 선언
    int list[5];
    // 정수형 포인터 배열 plist 선언
    int *plist[5];

    // list 배열에 값 할당
    list[0] = 10;
    list[1] = 11;

    // 동적 메모리 할당을 통해 plist[0]이 가리키는 메모리에 int형의 크기만큼 할당
    plist[0] = (int *) malloc(sizeof(int));

    // list 배열과 각 요소들의 주소 출력
    printf("list[0] \t= %d\n", list[0]); // list[0]의 값 출력
    printf("list \t\t= %p\n", list);      // list 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]);// list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list + 0);// list의 시작 주소 + 0 출력 (list의 시작 주소와 같음)
    printf("list + 1 \t= %p\n", list + 1);// list의 시작 주소 + 1 출력 (다음 요소의 주소)
    printf("list + 2 \t= %p\n", list + 2);// list의 시작 주소 + 2 출력 (두 번째 요소의 주소)
    printf("list + 3 \t= %p\n", list + 3);// list의 시작 주소 + 3 출력 (세 번째 요소의 주소)
    printf("list + 4 \t= %p\n", list + 4);// list의 시작 주소 + 4 출력 (네 번째 요소의 주소)
    printf("&list[4] \t= %p\n", &list[4]);// list[4]의 주소 출력

    // 동적으로 할당한 메모리 해제
    free(plist[0]);
}