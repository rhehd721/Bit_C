#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

//�μ��� �Է¹޴� �Լ�
//get_num()
//�μ��� ū �� ����
//get_max()

//void put_num(int* p);

//void put_str(char* p);



/*
int get_num();
int get_max(int a, int b);
void put_max(max);



//main�Լ�
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
	printf("�������� %d", max);
}
*/


/*

main() {

	//char name[20];
	//scanf_s("%s", name);
	//printf("%s\n", name);



	//������ �����
	/*
	int num = 0;
	printf("�������� ũ�⸦ �Է��ϼ��� : ");
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
 
	printf("a�� �� : %d\nb�� �� : %d\n", a,b);

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
	char sub_name[15]; /* ���� �̸� */
	float exm_rlt[10]; /* ���� ���� */
	int exm_cnt = 0; /* ���� ȸ�� */
	float total; /* ���� */
	float average; /* ��� */
	char grade; /* ���� */

	get_sub_name(sub_name); /* ���� �̸� */


	exm_cnt = get_exm_cnt(); /* ���� ȸ�� */

	get_exm_rlt(exm_rlt, exm_cnt);/* ���� ����*/

	total = get_total(exm_rlt, exm_cnt); /* ���� ��� */

	average = get_average(total, exm_cnt); /* ��� ��� */

	grade = get_grade(average); /* ������ ����մϴ�. */

	print_result(sub_name, exm_cnt, exm_rlt, total, average, grade); /* ��� ��� */
}

void get_sub_name(char* sub_name) { /* ���� �̸� */

	printf(" ������ �̸��� �Է��ϼ��� : ");
	gets(sub_name);
	printf("\n");
}
int get_exm_cnt() { /* ���� ȸ�� */

	printf("���� Ƚ���� �Է��ϼ��� : ");
	int num = 0;
	scanf_s("%d", &num);
	printf("\n");
	return num;

}

void get_exm_rlt(float *exm_rlt,int exm_cnt) {/* ���� ����*/

	
	int num = exm_cnt;

	for (int i=1; i!=num+1; ++i){
	printf("%d�� ���� ������ : ", i);
	float score=0;
	scanf_s("%f", &score);
	exm_rlt[i - 1] = score;
	printf("\n");
	}

}

float get_total(float *exm_rlt, int exm_cnt) { /* ���� ��� */
	int i = 0;
	int total = 0;
	while (i != exm_cnt) {
		total += exm_rlt[i];
		++i;
	}
	return total;
}

float get_average(float total, int exm_cnt) { /* ��� ��� */
		int aver = 0;
		aver = total / exm_cnt;
		
		return aver;
}

char get_grade(float average) { /* ������ ����մϴ�. */
	if (average > 50) {
		return 'A';
	}
	else {
		return 'D';
	}
}
void print_result(char *sub_name,int exm_cnt,float *exm_rlt, float total, float average,char grade) { /* ��� ��� */
	printf("���� �̸� :  ");
	puts(sub_name);
	printf("���� Ƚ�� : %d \n", exm_cnt);

	for (int i = 1; i != exm_cnt + 1; ++i) {
		printf("%d�� ���� ������ : %f\n", i, exm_rlt[i-1]);
	}

	printf("���� : %f\n", total);
	printf("��� : %f\n", average);
	printf("���� : %c\n", grade);

}


