#include <stdio.h>

// 함수 선언
void print_one(int *ptr, int rows);

int main()
{
    printf("[----- [송 동 선]  [2023078041] -----]\n");

    // 정수형 배열 one 선언 및 초기화
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);       // 배열 one의 시작 주소 출력
    printf("&one = %p\n", &one);     // 배열 one의 주소 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소 출력
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    // print_one 함수 호출 (인자로 배열의 첫 번째 요소의 주소와 요소의 개수 전달)
    print_one(&one[0], 5);
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    // print_one 함수 호출 (인자로 배열의 이름과 요소의 개수 전달)
    print_one(one, 5);
    return 0;
}

// 배열을 출력하는 함수
void print_one(int *ptr, int rows)
{
    int i;
    printf ("Address \t Contents\n");
    // 배열의 요소를 순회하며 주소와 값을 출력
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 주소와 해당 주소의 값 출력
    printf("\n");
}
