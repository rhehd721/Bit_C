# C Language

## 비트연산
1. & : AND 연산
2. | : OR 연산
3. ^ : XOR 연산
4. ~ : 단항연산(모든 비트 반전)
5. '<<' : 비트열 왼쪽으로 이동 
6. '>>' : 비트열 오른쪽으로 이동 (ex. Num >> 2;)

## 자료형
### 정수형
1. char : 1Byte (-128 ~ +127)
2. short : 2Byte (-32,768 ~ +32,767)
3. int : 4Byte (-2,147,483,648 ~ +2,147,483,647)
4. long : 4Byte (-2,147,483,648 ~ +2,147,483,647)
5. long long : 8Byte
### 실수형
1. float : 4Byte
2. double : 8Byte
3. long double : 8Byte 이상
### Unsigned
음수를 표형하는 자리수를 없애 양수만을 표현

|운영체제|char|short|int|long|포인터|
|------|---|---|------|---|---|
|Window|1Byte|2Byte|4Byte|4Byte|8Byte|
|Unix|1Byte|2Byte|4Byte|8Byte|8Byte|

## ASCII
A = 65

## Literal 상수
할당된 메모리에 이름이 존재하지 않는 데이터

## 반복문
### while
```c
while(1){
    printf("Hello World!");
}
```
### do ~ while
```c
do{
    printf("Hello World!");
} while(1);
```
### for
```c
for (int i = 0; i < 10; ++i){
    printf("Hello World!");
}
```

## 조건문
### if
```c
int Num = 0;
scanf("%d", &Num);

if (Num > 10){
    printf("Num > 10 \n");
}
else if (Num < 10){
    printf("Num < 10 \n");
}
else{
    printf("Num = 10 \n");
}
```
### continue, break
1. continue : 이후 내용을 건너뛰고 다시 시작
2. break : 하나의 반복문을 빠져나온다.

### switch
```c
int Num = 0;
printf("Num은 1 ~ 3 사이 정수);
scanf("%d", &Num);

switch(Num){
    case 1:
        printf("Num = 1");
        break;
    case 2:
        printf("Num = 2");
        break;
    case 2:
        printf("Num = 3");
        break;
    default:
        printf("error");
}
```

## 함수
```c
// 반환형태 + 함수이름 + 입력형태
void main (void){
    printf("Hello World");
    return NULL;
}
```

## 전역변수, static 변수, register 변수
1. 전역변수 : 선언시 기본 0으로 초기화
2. static 변수 : 지역변수에 static 선언시 전역변수의 성격을 지니게 된다.
3. register 변수 : CPU 내에 존재하는 레지스터에 공간 할당

## 재귀함수
```c
void Recursive(void){
    printf("Hello World!");
    Recursive();
}
```
재귀함수를 이용한 펙토리얼 구현
```c
void Factorial(int Num){
    if (Num == 0){
        return 1;
    }
    else{
        return Num * Recursive(Num -1);
    }
}
```

## arr(배열)
arr == &arr[0]
```c
int int_arr[] = {1, 2, 3, 4, 5};
char char_arr[] = "Hello World!";
// char_arr 경우 \0문자를 신경써서 크기를 지정한다.
```
### NULL 문자
ASCII Code 0

문자열의 끝을 알기위한 문자

## ptr(포인터)
주솟값을 가지고 있는 변수
```c
int main(){
    int Num = 5;
    int ptr_Num;
    ptr_Num = &Num;

    return 0;
    // ptr_Num = Num의 주솟값을 가지고 있다.
    // *ptr_Num == Num
}
```

## 포인터와 배열
arr == &arr[0]

*arr == *ptr == arr[0]

prt + 1 = ptr에 sizeof(*ptr)을 더한 값

즉, arr + 1 != &arr +1
|비교|포인터 변수|배열의 이름|
|------|---|---|
|이름은 존재하는가?|존재한다|존재한다|
|무엇을 나타내거나 저장하는가?|메모리의 주소 값|메모리의 주소 값|
|주솟값 변경이 가능한가?|가능하다|불가능하다.|
arr[i] == *(arr + i)

## 포인터 배열
포인터로 이루어진 배열
```c
int main(){
    int * int_arr[2];
    int num1 = 10, num2 = 20;
    arr[0] = &num1;
    arr[1] = &num2;

    prtinf("num1 : %d, num2 : %d", *int_arr[0], *int_arr[1]);

    return 0;
``` 

## Call-by-value vs Call-by-reference
1. Call-by-value : 단순히 값을 전달
2. Call-by-reference : 주소 값을 전달

## const
```c
int main(){
    int num = 20;
    const int * ptr = &num;
    * ptr = 30; // error
    * num = 40; // compile 성공
    // const는 ptr가 가르키는 값의 변경을 막아준다.
``` 

## 다차원 배열
```c
int arr[3][5]; // 5개짜리 배열이 3개 존재
```

## 더블 포인터
```c
int num = 10;
int * num_ptr = &num;
int ** num_ptr_ptr = &num_ptr;
// * num_ptr_ptr == ptr
// *(*num_ptr_ptr) == num
```

## 배열 포인터 vs 포인터 배열
arr[i] == *(arr + i)
1. 배열 포인터 : n개의 배열을 바라보는 포인터
    * ex. int (* arr_ptr)[n]
2. 포인터 배열 : 포인터가 n개 있는 배열
    * ex. int * arr_ptr[n]

## Void
존재하지 않는 형

## int argc, char * argv[]
1. int argc : argv의 길이
2. char * argv[] : 프로그램 실행시 전달받은 인자 배열(단, 첫번째 인자는 프로그램 실행 경로)

## standard stream
1. stdin : 표준 입력 스트림 (키보드)
2. stdout : 표준 출력 스트림 (모니터)
3. stderr : 포준 에러 스트림 (모니터)

## 문자 출력 : putchar, fputc
1. int putchar(int c) : 매개변수로 들어온 문자 c를 standard output(표준출력)에 문자로 출력해주는 함수
2. int fputc(int c, FILE * stream) : FILE * 가 가르키는 파일에 첫번째 인자를 넣어준다.

## 문자 입력 : getchar, fgetc
1. int getchar(void) : standard input(표준입력) 으로 부터 입력받은 문자를 반환하는 함수
2. int fgetc(FILE * stream) : FILE * 가 가르키는 파일에서 문자를 읽어온다.

## buffer
데이터를 임시로 모아두는 메모리 공간

## 구조체
하나 이상의 변수를 묶어 새로운 자료형을 정의하는 도구
```c
struct Ex{
    int num1;
    int num2;
    char name[10];
};
```

구조체 초기화
```c
struct Ex person = {5, 10, "ho"};
```

구조체 배열 및 초기화
```c
struct Ex person[3] = {
    {1, 10, "hi"},
    {2, 20, "hello"},
    {3, 30, "world"}
};
```

## typedef
자료형에게 새로운 이름을 지어주는 것
* ex. typedef int INT;

## 구조체 정의와 typedef 선언
```c
typedef struct name{
    char name1[10];
    char name2[20];
} Name;
```

## File 개방 모드
1. r : 읽기 (파일없으면 에러)
2. w : 쓰기 (파일없으면 생성)
3. a : 덧붙여 쓰기 (파일없으면 생성)
4. r+ : 읽기/쓰기 (파일없으면 에러)
5. w+ : 읽기/쓰기 (파일없으면 셍성)
6. a+ : 읽기/덧붙여 쓰기 (파일없으면 생성)

## 개행 \n
1. Window : \r\n
2. Mac : \r
3. Unix : \n

## 동적할당

### 메모리의 구성
1. 코드 영역 : 프로그램의 코드가 저장되는 메모리 공간
2. 데이터 영역 : 전역변수와 static 변수가 할당되는 공간 (프로그램 종료 시까지 남아있게 된다)
3. 힙 영역 : 사용자에 의해 메모리 공간이 동적으로 할당되고 해제
4. 스택 영역 : 지역변수와 매개변수가 저장되는 메모리 공간 (함수를 빠져나가면 소멸)

### malloc
```c
#include <stdio.h>
void * malloc(size_t size);
void free(void * ptr);
````
malloc Ex
```c
void * ptr = malloc(4); // 4Byte 할당
free(ptr); // 4Byte 매모리 해제
```

### realloc
```c
#include <stdio.h>
void * realloc(void * ptr, size_t size);
````
realloc Ex
```c
int * arr = (int *)malloc(sizeof(int)*3); // 길이가 3인 int형 배열 할당
arr = (int *)realloc(arr, sizeof(int)*5) // 길이가 5인 int형 배열로 확장!
```

## 자주 사용하는 함수 모음

### memset ( memory + setting )
- 원형
    - void* memset(void* ptr, int value, size_t num);
    - void* ptr : 세팅하고자 하는 메모리의 시작 주소.
    - value : 메모리에 세팅하고자 하는 값
        - ** int 타입으로 받지만 내부에서는 unsigned char 로 변환되어서 저장 **
    - size_t num : 길이
```c
// EX

#include<string.h> // #include<memory.h> 도 괜찮습니다.

char arr[] = "blockdmask";
memset(arr, 'c', 5 * sizeof(char));
print(arr);
```

### strcpy ( string copy )
- 원형
    - char *strcpy(char *_Dest, char const *_Source);
```c
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s2[10];              // 크기가 10인 char형 배열을 선언

    strcpy(s2, s1);        // s1의 문자열을 s2로 복사
    
    printf("%s\n", s2);    // Hello

    return 0;
}
```

### strcmp ( string compare )
- 원형
    - int strcmp(const *_Str1, char const *_Str2);
```c
#include <stdio.h>
#include <string.h>    // strcmp 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "Hello";
    char *s2 = "Hello";

    int ret = strcmp(s1, s2);    // 두 문자열이 같은지 문자열 비교

    printf("%d\n", ret);         // 0: 두 문자열이 같으면 0

    return 0;
}
```
