#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>
/*
int main()
{
    /*float a = 12.0f;
    float b = 6.0f;

    int c = 0x12345678;

    //printf("���� �̸��� %s �Դϴ�\n","�ں�ȣ");
    //printf("���� ���̴� %d �Դϴ�\n",26);

    //int num = 10;
    //int b = sizeof(num);
    //printf("%d \n", b);

    //int a = 4;

    //if (a > 10) {
    //    printf("10���� ũ��\n");
    //}
    //else {
    //    printf("10���� �۴�\n");
    //}

    //char x = 'A';
    //printf("���ϴ� ���ڸ� �Է��ϼ���");
    //scanf_s("%c", &x);

    //if (x > 96) {
    //    printf("�ҹ����Դϴ�\n");
    //    printf("%c\n", x^32);
    //}
    //else {
    //    printf("�빮���Դϴ�\n");
    //    printf("%c\n", x ^ 32);
    //}

    //¦�� ���
	int y = 0;
	y = 2;
	printf("¦�����");

	while (y <= 100) {
		printf("%d ", y);
		y = y + 2;

	}

	printf("\n");


	//�ټ����� ���
	y = 0;
	printf("\n");

	char str = '*';
	while (y < 5) {
		printf("***** \n");
		y = y + 1;
	}

	//10���� ���
	y = 1;
	printf("\n");
	int x = 0;

	while (y <= 100) {
		x = 0;
		printf("\n");
		while (x < 10) {
			printf("%d ", y);
			y = y + 1;
			x = x + 1;
		}
	}

	//*�� -
	y = 0;
	printf("\n");
	x = 4;
	int z = 0;

	while (z < 5) {
		y = 0;
		while (y <= 4) {
			if (y == x) {
				printf("-");
				--x;
			}
			else {
				printf("*");
			}

			++y;
		}
		++z;
		printf("\n");
	}

    //Ʈ�������1
	printf("\n");
	y = 4;
	x = 0;
	z = 4;

	while (x <= 5) {
		;
		printf("\n");
		while (z <= y) {

			printf("*");

			++z;
		}
		++x;
		z = 4;
		++y;
	}

	const int pass = 1234;
	int i = 3;
	int num = 0;
	printf("��й�ȣ�� �Է��ϼ���\n");
	scanf_s("%d", &num);
	while (i >= 1) {
		if (pass == num) {
			printf("���");
			break;
		}
		else{
			printf("��ȸ�� %d�� ���ҽ��ϴ�\n", i);
			printf("��й�ȣ�� �Է��ϼ���\n");
			scanf_s("%d", &num);
			--i;
		}

	}
	if (i == 0) {
		printf("������ �⵿�մϴ�");
	}
	
	

}
*/

//���� 4�ٿ� �ش��ϴ� �Լ��� ���� �ϼ��Ͻÿ�(�� �Լ� 4�� �����)
/*
int get_passwd(void);
void chance(int cnt);
int compare(int a, int b);
void police(int cnt);

main()
{

	int pwd = 1234;//������ ���ص� �н�����
	int get_pwd; //���� �н�����
	int cnt = 3; //��ȸ�� 3�� ��
	do {
		get_pwd = get_passwd();//�н����� �޾� �� 

		if (compare(pwd, get_pwd)) //�κ��� ������ ������ 1 �ٸ��� 0�� �����Ѵ�.
		{
			puts("���");
			break;
		}
		else {
			chance(--cnt); //��ȸ�� �����ִ� �Լ�
		}
	} while (cnt); //cnt!=0

	police(cnt); //������ �θ��� �Լ� cnt�� 0�̸� ������ �θ��� �Լ�



	//Ʈ���׸���2
	int num = 0;
	num = 5;
	int i = 0;
	while (i <= 5)
	{
		while (i <= num) {
			printf("*");
			--num;
		}
		printf("\n");
		num = 5;
		++i;
	}
}

int get_passwd(void) {
	int pwd = 0;
	printf("�н����带 �Է��ϼ���\n");
	scanf_s("%d", &pwd);
	return pwd;
}

void chance(int cnt) {
	printf("���� ��ȸ�� %d ���Դϴ�\n", cnt);
	return 0;

}

int compare(int a, int b) {
	int com = 0;
	if (a == b) {
		com = 1;
	}
	else {
		com = 0;
	}
	return com;
}


void police(int cnt) {
	if (cnt == 0) {
		printf("������ �浿�մϴ�");
		
	 }
	return 0;
}
*/

main() {
	//ũ�������� Ʈ�� �����
	/*int hi = 0;
	printf("���ϴ� Ʈ���� ���̸� �Է��ϼ���");
	scanf("%d", hi);

	while (hi >= 0) {



		printf(" ");
		printf("*");
		printf("\n");


		--hi;

	}*/

	/*
	int dx;
	int rnd;
	srand(time(NULL));  //�̰� �������� ��¥ �������� ���� �� �ִ�
	for (dx = 0;dx < 5;dx++){
		rnd = rand();
		printf("%d \n", rnd );
	}
	*/

	/*
	int age = -1;
	int num = -2;
	int count = 1;
	int check = 0;
	srand(time(NULL));  //�̰� �������� ��¥ �������� ���� �� �ִ�
	while (age <= 0 || age >= 100)
	{
		age = rand();
	}
	printf("����Ǵ� ���̸� �Է��ϼ���\n");
	scanf("%d", &num);

	while (1)
	{
		check = num;

		if (age < num) {
			printf("���� ���̸� �Է��ϼ���\n");
			scanf("%d", &num);
			if (check < num) {
				printf("�� �� ū���̸� �Է��ϼ̳���?\n");
				scanf("%d", &num);
				++count;
			}
			++count;
		}
		else if (age > num) {
			printf("��ū ���̸� �Է��ϼ���\n");
			scanf("%d", &num);
			if (check > num) {
				printf("�� �� �������̸� �Է��ϼ̳���?\n");
				scanf("%d", &num);
				++count;
			}
			++count;
		}
		else {
			printf(" %d�� �����Դϴ�\n", age);
			printf("%d������ ������ϴ�\n", count);
			break;
		}
		
	}
	*/
	
	/*
	//Ʈ������� ����
	int str = 0;
	int tt = 0;
	int h = 0;


	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &h);

	int ss = h;

	while (h >= 0) {

		for (tt = h - 1; tt > 0;--tt) {
			printf(" ");
			if (tt == 1) {
				str = h;
				for (int i = str; i <= ss ; ++i){
					printf("*");
					++str;
				}
		
			}
			
		}
		printf("\n");
		--h;
	}
	*/
	
int num1 = 10;
int num2 = 20;
int* ptr1 = &num1;
int* ptr2 = &num2;
*ptr1 += 10;
*ptr2 -= 10;
ptr1 = &num2;
ptr2 = &num1;
printf("%d\n", *ptr1);
printf("%d\n", *ptr2);
	

}