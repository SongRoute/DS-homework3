#include <stdio.h>
#define MAX_SIZE 100

// 함수 선언
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

// 전역 변수 선언
float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- [송 동 선]  [2023078041] -----]\n");

    // input 배열 초기화
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;

    // for checking call by reference
    // 함수 호출 및 결과 출력
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);       // input 배열의 시작 주소 출력
    answer = sum1(input, MAX_SIZE);       // sum1 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer); // 배열의 합 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);       // input 배열의 시작 주소 출력
    answer = sum2(input, MAX_SIZE);       // sum2 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer); // 배열의 합 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);       // input 배열의 시작 주소 출력
    answer = sum3(MAX_SIZE, input);       // sum3 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer); // 배열의 합 출력
}

// 배열의 합을 구하는 함수
float sum1(float list[], int n)
{
    printf("list \t= %p\n", list);    // list 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // list 배열의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}

// 배열의 합을 구하는 함수 (포인터 사용)
float sum2(float *list, int n)
{
    printf("list \t= %p\n", list);    // list 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // list 배열의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}

// 배열의 합을 구하는 함수 (포인터 사용)
float sum3(int n, float *list)
{
    printf("list \t= %p\n", list);    // list 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // list 배열의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}