#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

//���ἱ��
select(int check, int** total, char** name, int* price) {
	while (1) {
		if (**total < 800) {
			printf("\n�ݾ��� �����մϴ� : %d��\n", **total);
			break;
		}
		else {
			int i = check;
			printf("\n���ᰡ ���ɴϴ� %s %d�� �����ϼ̽��ϴ�\n", name[i-1], price[i-1]);
			**total -= price[i-1];
			break;
		}
		
	}

}




// ��� �����ֱ�
object(int** total, char** name, int *price) {
	while (1) {
		if (**total < 800) {
			printf("\n�ݾ��� �����մϴ� : %d��\n", **total);
			break;
		}
		for (int i = 0; i <= 5; ++i) {
			if (**total < price[i]) {
				break;
			}
			printf("\n%d. %s %d��\n", i+1,name[i], price[i]);
		}
		if(1) {
			break;
		}

	}

}

// �ݾ��߰� �Ǵ� ���ἱ��
int push(int** total) {
	int push;
	printf("\n���ἱ�� �Ǵ� �ݾ��߰�: ");
	scanf_s("%d", &push);
	printf("\n");
	while (1) {
		if (push >= 1 && push <= 6) {
			return push;
		}
		else if (push == 100 || push == 500 || push == 1000) {
			**total += push;
			return 7;
		}
		else {
			printf("\n�߸� �����̽��ϴ�. ���ἱ�� �Ǵ� �ݾ��߰�: ");
			scanf_s("%d", &push);
			continue;
		}
	}

}


main() {

	//���� �� �ݾ�
	int total = 0;
	int* toto = &total;

	// ���� �־����� ���Ḧ �������
	int check = 0;

	//�����
	int test;

	// �迭����
	char* name[] = { "��","�ݶ�","ȯŸ","���̴�","��Ÿ��","��Ʈ��" };
	int price[] = { 800,1000,1100,1200,1500,2000 };


	printf("(1000��, 500��, 100���� �����մϴ�)\n ������ �������� : ");
	scanf_s("%d", &total);
	if (total < 100 || total > 1000) {
		while (1) {
			printf("�߸� �����̽��ϴ�. ������ �������� : ");
			scanf_s("%d", &total);
			if (total >= 100 && total <= 1000) {
				break;
			}
		}
	}
	printf("�� �ݾ� : %d\n\n", total);

	while (1)
	{
		object(&toto, name, &price); //���Ű��� ��� �����ֱ�
		check = push(&toto); // �ݾ��߰� �Ǵ� ���ἱ��
		if (check < 7) {    //���ἱ��
			select(check, &toto, name, &price);
		}
		else {    // �� �߰�
			continue;
		}

	}






	//test = push(total);
	//printf("%d", test);









}












/*
//2�� last


last(int* k, int* k2) {
	int tt = *k;
	*k = *k2;
	*k2 = tt;
}



//1�� last
last(int** k, int** k2) {
	int tt = **k;
	**k = **k2;
	**k2 = tt;
}

middle(int* p, int* p2) {
	last(p, p2);//�̱������ͺ����� �ּ�
}


main() {

	int a = 10;
	int b = 20;

	middle(&a, &b); //������ �ּ�
	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);
	*/




	/*




	int a;
	int *p;
	int** k;
	p = &a;
	k = &p;

	**k = 10;
	printf("%d", a);




	int a[10][10];
		int k = 1;
		printf("����1��\n");
		for (int i = 0; i < 10; ++i) {
			printf("\n");
			for (int j = 0; j < 10; ++j) {
				a[i][j] = k;
				++k;
				printf("%3d", a[i][j]);
			}
		}

		printf("\n\n����2��\n\n");
		int sum = 0;
		int b[2][3] = { 1,2,3,4,5,6 };
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 3; ++j) {
				sum += b[i][j];
				if (i == 0 && j == 2) {
					printf("ù��° ���� ���� : %d �Դϴ�.\n", sum);
					sum = 0;
				}
				else if (i == 1 && j == 2) {
					printf("�ι�° ���� ���� : %d �Դϴ�.\n", sum);
					sum = 0;
				}
				else {
					continue;
				}

			}
		}
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 2; ++j) {
				sum += b[j][i];
				if (i == 0 && j == 1) {
					printf("ù��° ���� ���� : %d �Դϴ�.\n", sum);
					sum = 0;
				}
				else if (i == 1 && j == 1) {
					printf("�ι�° ���� ���� : %d �Դϴ�.\n", sum);
					sum = 0;
				}
				else if (i == 2 && j == 1) {
					printf("����° ���� ���� : %d �Դϴ�.\n", sum);
					sum = 0;
				}
				else {
					continue;
				}
			}
		}


}
*/