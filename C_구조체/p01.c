#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

typedef struct subject {
	int subname[5];  //����, ����, ����, ����, ��ŷ
}sub;

typedef struct sung {
	char name[10];
	float avg;
	sub sub1;
}sun;

main() {

	sun man[10];
	int j = 0;
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; ++i) {
		int check = 0;   //�߰��Ұ��� ����� ������
		printf("�����͸� ���� (1. �߰� 2. ���)\n");
		scanf_s("%d", &check);
		if (check == 1)
		{
			printf("�̸��� �Է��ϼ��� : ");
			scanf("%s", man[i].name);
			printf("\n");
			printf("���̸� �Է��ϼ��� : ");
			scanf("%f", &man[i].avg);
			printf("\n");
			printf("���������� �Է��ϼ��� : ");
			scanf("%d", &man[i].sub1.subname[0]);
			printf("\n");
			printf("���������� �Է��ϼ��� : ");
			scanf("%d", &man[i].sub1.subname[1]);
			printf("\n");
			printf("���������� �Է��ϼ��� : ");
			scanf("%d", &man[i].sub1.subname[2]);
			printf("\n");
			man[i].sub1.subname[3] = (man[i].sub1.subname[0] + man[i].sub1.subname[1] + man[i].sub1.subname[2]);
			man[i].sub1.subname[4] = i;
			arr[i] = man[i].sub1.subname[3];
			printf("�����Ͱ� �ԷµǾ����ϴ�\n");
		}
		
		else {
			int tem = 0;
			//���� �������� �����
			for (int k = 0; k < i-1; ++k) {
				for (int d = k+1; d < i; ++d) {
					if (arr[k] > arr[d]) {
						tem = arr[k];
						arr[k] = arr[d];
						arr[d] = tem;
						k = -1;
						break;
					}
				}
			}

			//����� �־��ֱ�
			for (int k = 0; k < i; ++k) {
				for (int d = 0; d < i; ++d){
					if (arr[k]== man[d].sub1.subname[3]) {
						man[k].sub1.subname[4] = k;
					}
				}
			}
			

			//���������

			if (i == 9){
				printf("���̻� �Է��� �� �����ϴ�\n");
			}
			while (j < i) {

				printf("\n����	����	����	����	����	����	����\n");
				printf("----------------------------------------------------\n");
				printf("%s	%f	%d	%d	%d	%d	%d  \n", man[j].name, man[j].avg, man[j].sub1.subname[0], man[j].sub1.subname[1], man[j].sub1.subname[2], man[j].sub1.subname[3], man[j].sub1.subname[4]);
				++j;
			}
			break;
		}
		


	}
	

}









/*
struct num {

	int fir;
	int sec;
};

//����ü �ع� ���� ������ ��
int func1(int fir, int sec) {
	printf("%d\n", fir + sec);
	return fir + sec;
}

//����ü �����ּ� ������ ��
int func2(struct num* p) {
	printf("%d\n", p->fir * p->sec);
	return  p->fir * p->sec;
}

//����ü �迭�ּ� ������ ��
int func3(struct num* c) {
	printf("%d\n", c->fir + c->sec + (c + 1)->fir + (c + 1)->sec);
	return  c->fir + c->sec + (c + 1)->fir + (c + 1)->sec;
}

main() {

	struct num a = { 1,2 }, b = { 3,4 }, c[2] = { 5,6,7,8 };

	//����ü �ع� ���� ������ ��
	func1(a.fir, a.sec);

	//����ü �����ּ� ������ ��
	func2(&b);

	//����ü �迭�ּ� ������ ��
	func3(c);
}
*/


/*
int find(char** p, char* fnd) {

	for (int i = 0; i < 7;++i) {
		if (p[i] == fnd) {
			printf("ã���ô� ���ڿ��� %d ��°�� ����ֽ��ϴ�\n", i+1);
		}
	}
}

main() {

	char* a[] = { "aaa", "bbb", "ccc","ddd","eee","fff","ggg" };

	find(a, "ddd");

}
*/


/*
//void func(int argc, char** argv) {
//
//	int dx;
//	for (dx = 0; dx < argc; dx++) {
//		printf("%d\n", argv[dx]);
//	}
//}

int main(int argc, char** argv) {
	//char* a[] = { "aaa","bbb","ccc" };
	//func(3, a);
	int dx;
	for (dx = 0; dx < argc; dx++) {
		printf("%s\n", argv[dx]);
	}
}
*/

/*
void test() {
	puts("test");
}

main() {
	void* p;
	char* a = "hello";
	p = a;
	//p�� hello ����ϱ�
	printf("%s\n", (char*)p);

	//p�� hello ����ϱ�
	printf("%c\n", *(char*)p);

	//p�� test ����ϱ�
	p = test;
	((void (*) (void))p)();

}
*/



/*
int add(int a, int b) { return a + b; }


int temp(int(*p)(int,int), int a, int b) {
	int rlt;
	rlt = p(a,b);
	return rlt;
}


main() {

	int rlt;
	int a = 10, b = 5;
	rlt = temp(add, a,b);
	printf("%d\n", rlt);
}
*/


/*
void cold(void) { puts("cold"); }
void hot(void) { puts("hot"); }

void aircon(void (*p)(void)) { //�Լ��ּҰ��� �����͸� ���� �޴´�
	p();  // ���� �����͸� �����Ѵ�
}

main() {
	aircon(cold);  //aircon�Լ��� cold�� �ּҰ��� �����ش�
	aircon(hot);
}


int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int dvv(int a, int b) { return a / b; }


main() {
	int (*p[4])(int, int) = { add,sub,mul,dvv };

	for (int i = 0; i < 4; ++i) {
		printf("%d \n", p[i](10, 5));
	}




}
*/
