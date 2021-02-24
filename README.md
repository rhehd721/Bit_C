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
