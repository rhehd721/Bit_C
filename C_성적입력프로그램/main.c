#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// 데이터를 담을 구조체
typedef struct Data{
    
    char name[11];
    int score1;
    int score2;
    int score3;
    
}data;

int Choice(void);   // 메뉴선택하기

int Num(void);  // 등수산출

data* Student(void);    // 학생하나당 동적할당

void Print(void);   // 안내문구 출력

int compare(const void * a,const void * b );    // 등수비교 qsort(쓰지도 않음... 결국 함수갯수가...)

int name_qsort(const void * a,const void * b );     // 이름비교 qsort(쓰지도 않음... 결국 함수갯수가...)


int main(){
    
    char name[11];  // 이름비교에 쓰일 변수
    
    int tem;    // 학생수 받기
    tem =0;
    
    
    int a;  // 메뉴고르기
    a = 0;
    
    int rean;   //가끔 쓰인느 변수
    rean = 0;
    
    data * ptr; // malloc을 바라볼 함수
    
    // 학생수 입력받기
    tem = Num();
    
    int *result = (int*)malloc(sizeof(ptr)*tem); // 1,2,3,4... 등수
    int *qsort_result = (int*)malloc(sizeof(ptr)*tem); // qsort 등수
    int *score = (int*)malloc(sizeof(ptr)*tem); // qsort 등수
        
    data **arr = (data**)malloc(sizeof(ptr)*tem);   // malloc 주소값을 담을 배열
    
    char sort_name[tem][11];
    // 동적할당은 너무나 어려운것이야....
    // 이름들을 넣어보자....
    
    
    // 동적할당 해주기
    for (int i =0; i<tem; ++i){
        arr[i] = Student();
    }
    
    
    while(1){
        Print();    // 안내문구
        a = Choice();   // 메뉴선택하기를 선택하였을 경우
        if(a == 1){ // 입력선택
            for (int i =0; i<tem; ++i){
                ptr = arr[i];
                printf("\n%d 번째 학생의 이름을 입력하세요 : ",i+1);
                scanf("%s", ptr->name);
                printf("\n%d 번째 학생의 국어점수를 입력하세요 : ",i+1);
                scanf("%d", &(ptr->score1));
                printf("\n%d 번째 학생의 수학점수를 입력하세요 : ",i+1);
                scanf("%d", &(ptr->score2));
                printf("\n%d 번째 학생의 영어점수를 입력하세요 : ",i+1);
                scanf("%d", &(ptr->score3));
                printf("\n\n");
                if(ptr->score1 > 100 || ptr->score2 > 100 || ptr->score3 > 100){
                    --i;
                }
                else if (ptr->score1 < 0 || ptr->score2 < 0 || ptr->score3 < 0){
                    --i;
                }
            }
            continue;
        }
        
        else if(a == 2){    // 수정을 선택하였을 경우
            
              // 정렬되어있지 않은 이름 집어넣기
            for (int i =0; i<tem; ++i){
                ptr = arr[i];
                for (int j = 0 ; j <11; ++j){
                    sort_name[i][j] = (ptr->name)[j];
                }
                printf("\n 이름정렬 전 : %s \n", sort_name[i]);
            }
            
            
            for (int i = 65; i<123; ++i){
                for (int j =0; j<tem; ++j){
                    rean = sort_name[j][0];
                    if(rean == i){
                        printf("\n 이름정렬 후 : %s \n", sort_name[j]);
                    }
                }
            }
            
            
            printf("어떤힉생의 정보를 수정하시겠습니까? : ");
            scanf("%s", name);
            for (int i =0; i<tem; ++i){
                ptr = arr[i];
                if(strcmp(ptr->name, name)==0){
                    printf("\n%s학생의 이름을 수정하세요 : ",name);
                    scanf("%s", ptr->name);
                    printf("\n%s학생의 국어점수를 수정하세요(기존 %d) : ",ptr->name,ptr->score1);
                    scanf("%d", &(ptr->score1));
                    printf("\n%s학생의 수학점수를 수정하세요(기존 %d) : ",ptr->name,ptr->score2);
                    scanf("%d", &(ptr->score2));
                    printf("\n%s학생의 영어점수를 수정하세요(기존 %d) : ",ptr->name,ptr->score3);
                    scanf("%d", &(ptr->score3));
                    printf("\n\n");
                    break;
                }
            }
            continue;
        }
        
        
        else if(a == 3){    // 출력을 선택하였을 경우(현재 등수를 수정해야하는 상황)
            for (int i =0; i<tem; ++i){ // qsort전 국수영점수 합 넣어주기
                ptr = arr[i];
                result[i] = ((ptr->score1)+(ptr->score2)+(ptr->score3));
                qsort_result[i] = (ptr->score1)+(ptr->score2)+(ptr->score3);
                score[i] = (ptr->score1)+(ptr->score2)+(ptr->score3);
            }
            
            for (int i =0; i<tem; ++i){
                printf("\n 총점 정렬 전 : %d \n", qsort_result[i]);
            }
            
            //qsort(qsort_result, sizeof(ptr)*tem,sizeof(ptr),compare);  // qsort진행(실패!)
            // 점수들 sort하기
            // 야무지게 멋진 코드를 짜고 싶었지만 나약한 전 포기해버렸습니다.....
            for (int i =0; i<tem-1; ++i){
                if (rean == 0){
                    i = 0;
                }
                if(qsort_result[i] < qsort_result[i+1]){
                    rean = qsort_result[i];
                    qsort_result[i] =qsort_result[i+1];
                    qsort_result[i+1] = rean;
                    rean = 0;
                    i = 0;
                }
                else{
                    rean = 1;
                }
            }
            
            for (int i =0; i<tem; ++i){
                printf("\n 총점 정렬 후 : %d \n", qsort_result[i]);
            }
            
            rean = 0;
            
            for (int i =0; i<tem; ++i){ //  qsort를 한것과 안한것을 비교하여 등수 만들기
                ++rean;
                
                if(i > 0){  // 같은 점수면 같은 등수
                    
                    if(qsort_result[i] == qsort_result[i-1]){
                        --rean;
                    }
                    
                    else{   //  중복점수가 아니라면
                        for (int j =0; j<tem; ++j){ // 등수 넣어주기
                            if(qsort_result[i] == result[j]){
                                result[j] = rean;
                            }
                        }
                    }
                }
                
                else{   // 첫번째 점수일때
                    for (int j =0; j<tem; ++j){ // 등수 넣어주기
                        if(qsort_result[i] == result[j]){
                            result[j] = rean;
                        }
                    }
                }
            }
            
            for (int i =0; i<tem; ++i){ // 결과 출력
                ptr = arr[i];
                printf("\n %d번째 이름 : %s 국어 : %d 수학 : %d 영어 : %d 총점 : %d 등수 : %d \n",i,ptr->name, ptr->score1,ptr->score2,ptr->score3,score[i],result[i] );
            }
            continue;
        }
        
        
        else if(a == 0){    // 종료을 선택하였을 경우
            printf("\n프로그램을 종료합니다\n");
            break;
        }
        
        else{   // 잘못된 메뉴 선택하였을 경우
            printf("\n숫자를 다시 입력하세요\n");
        }

       }
   
    
    return 0;
}

//메인함수 종료

// 메뉴선택하기
int Choice(){
    int choice =0;
    scanf("%d",&choice);
    return choice;
}

// 학생수 입력받기
int Num(){
    int num =0;
    printf("입력할 학생의 수 : ");
    scanf("%d", &num);
    printf("\n\n");
    
    return  num;
}

// 학생하나당 동적할당
data* Student(){
    
    data *student;  // 구조체를 바라보는 포인터
    student = NULL; // 초기화
    
    student = (data*)malloc(sizeof(data));  // 구조체 포인터가 malloc을 가르킴
    
    return student; // malloc주소값 넘기기
    
}


// 안내문구 출력
void Print(){
    
    printf("성적관리 프로그램\n1. 개인성적입력\n2. 개인성적 수정\n3. 전체성적 출력\n0. 종료\n");
    
}

int compare(const void * a,const void * b ){
    int num1 = **(int**)a;
    int num2 = **(int**)b;
    
    if(num1 < num2){
        return 1;
    }
    if(num1 > num2){
        return -1;
    }
    return 0;
}


int name_qsort(const void * a,const void * b ){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if(num1 < num2){
        return -1;
    }
    if(num1 > num2){
        return 1;
    }
    return 0;
}
