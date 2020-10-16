#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

//두수를 입력받는 함수
//get_num()
//두수중 큰 값 리턴
//get_max()

//void put_num(int* p);

//void put_str(char* p);



/*
int get_num();
int get_max(int a, int b);
void put_max(max);



//main함수
main() {
	int a, b;
	int max;
	a = get_num();
	b = get_num();
	max = get_max(a,b);
	printf("%d %d", a, b);
	put_max(max);
}


int get_num() {
	int num = 0;

	scanf("%d", &num);
	
	return num;

}

int get_max(int a, int b) {
	if (a > b){
		return a;
	}
	else {
		return b;
	}
}

void put_max(max) {
	printf("높은값은 %d", max);
}
*/


/*

main() {

	//char name[20];
	//scanf_s("%s", name);
	//printf("%s\n", name);



	//달팽이 만들기
	/*
	int num = 0;
	printf("달팽이의 크기를 입력하세요 : ");
	scanf("%d", num);
	printf("\n");
	*/

	/*
	int a = 10;
	int b = 5;
	int* pa, *pb;
	int tmp;
	pa = &a;
	pb = &b;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;


	printf("*******************\n");
 
	printf("a의 값 : %d\nb의 값 : %d\n", a,b);

	printf("*******************\n");

	*/

/*

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };

	char b[] = "abcdefghijklmnopqrstuvwxyz";

	put_str(b);
	printf("\n");

	puts(b);
	printf("\n");

	put_num(a);





}


void put_num(int* p) {
	int dx;
	for (dx = 0; dx < 10; dx++) {
		if (p[dx]==7) {
			break;
		}
		printf("%d ", p[dx]);
	}
}


void put_str(char* p) {
	char dx;
	for (dx = 0; p[dx] != NULL; dx++) {
		printf("%c", p[dx]);
	}
}

*/

/*
main() {

	int arr[] = {1,2,3,4,5};
	
	int* ptr = arr[0];

	for (int i=0; arr[i]!=NULL; ++i  ){
		arr[i] = *(ptr + i);
	}

	for (int i = 0; arr[i]!=NULL; ++i){
		printf("%d", arr[i]);
	}



}
*/

void get_sub_name(char* sub_name);
int get_exm_cnt();
void get_exm_rlt(float* exm_rlt, int exm_cnt);
float get_total(float* exm_rlt, int exm_cnt);
float get_average(float total, int exm_cnt);
char get_grade(float average);
void print_result(char sub_name, int exm_cnt, float* exm_rlt, float total, float average, char grade);



void main(void)
{
	char sub_name[15]; /* 과목 이름 */
	float exm_rlt[10]; /* 시험 점수 */
	int exm_cnt = 0; /* 시험 회수 */
	float total; /* 총점 */
	float average; /* 평균 */
	char grade; /* 학점 */

	get_sub_name(sub_name); /* 과목 이름 */


	exm_cnt = get_exm_cnt(); /* 시험 회수 */

	get_exm_rlt(exm_rlt, exm_cnt);/* 시험 점수*/

	total = get_total(exm_rlt, exm_cnt); /* 총점 계산 */

	average = get_average(total, exm_cnt); /* 평균 계산 */

	grade = get_grade(average); /* 학점을 계산합니다. */

	print_result(sub_name, exm_cnt, exm_rlt, total, average, grade); /* 모든 결과 */
}

void get_sub_name(char* sub_name) { /* 과목 이름 */

	printf(" 과목의 이름을 입력하세요 : ");
	gets(sub_name);
	printf("\n");
}
int get_exm_cnt() { /* 시험 회수 */

	printf("시험 횟수를 입력하세요 : ");
	int num = 0;
	scanf_s("%d", &num);
	printf("\n");
	return num;

}

void get_exm_rlt(float *exm_rlt,int exm_cnt) {/* 시험 점수*/

	
	int num = exm_cnt;

	for (int i=1; i!=num+1; ++i){
	printf("%d차 시험 점수는 : ", i);
	float score=0;
	scanf_s("%f", &score);
	exm_rlt[i - 1] = score;
	printf("\n");
	}

}

float get_total(float *exm_rlt, int exm_cnt) { /* 총점 계산 */
	int i = 0;
	int total = 0;
	while (i != exm_cnt) {
		total += exm_rlt[i];
		++i;
	}
	return total;
}

float get_average(float total, int exm_cnt) { /* 평균 계산 */
		int aver = 0;
		aver = total / exm_cnt;
		
		return aver;
}

char get_grade(float average) { /* 학점을 계산합니다. */
	if (average > 50) {
		return 'A';
	}
	else {
		return 'D';
	}
}
void print_result(char *sub_name,int exm_cnt,float *exm_rlt, float total, float average,char grade) { /* 모든 결과 */
	printf("과목 이름 :  ");
	puts(sub_name);
	printf("시험 횟수 : %d \n", exm_cnt);

	for (int i = 1; i != exm_cnt + 1; ++i) {
		printf("%d차 시험 점수는 : %f\n", i, exm_rlt[i-1]);
	}

	printf("총점 : %f\n", total);
	printf("평균 : %f\n", average);
	printf("학점 : %c\n", grade);

}


