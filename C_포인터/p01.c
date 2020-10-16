#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

//음료선택
select(int check, int** total, char** name, int* price) {
	while (1) {
		if (**total < 800) {
			printf("\n금액이 부족합니다 : %d원\n", **total);
			break;
		}
		else {
			int i = check;
			printf("\n음료가 나옵니다 %s %d원 선택하셨습니다\n", name[i-1], price[i-1]);
			**total -= price[i-1];
			break;
		}
		
	}

}




// 목록 보여주기
object(int** total, char** name, int *price) {
	while (1) {
		if (**total < 800) {
			printf("\n금액이 부족합니다 : %d원\n", **total);
			break;
		}
		for (int i = 0; i <= 5; ++i) {
			if (**total < price[i]) {
				break;
			}
			printf("\n%d. %s %d원\n", i+1,name[i], price[i]);
		}
		if(1) {
			break;
		}

	}

}

// 금액추가 또는 음료선택
int push(int** total) {
	int push;
	printf("\n음료선택 또는 금액추가: ");
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
			printf("\n잘못 누르셨습니다. 음료선택 또는 금액추가: ");
			scanf_s("%d", &push);
			continue;
		}
	}

}


main() {

	//넣은 총 금액
	int total = 0;
	int* toto = &total;

	// 돈을 넣었는지 음료를 골랐는지
	int check = 0;

	//실험용
	int test;

	// 배열모음
	char* name[] = { "물","콜라","환타","사이다","비타민","울트라" };
	int price[] = { 800,1000,1100,1200,1500,2000 };


	printf("(1000원, 500원, 100원만 가능합니다)\n 동전을 넣으세요 : ");
	scanf_s("%d", &total);
	if (total < 100 || total > 1000) {
		while (1) {
			printf("잘못 누르셨습니다. 동전을 넣으세요 : ");
			scanf_s("%d", &total);
			if (total >= 100 && total <= 1000) {
				break;
			}
		}
	}
	printf("총 금액 : %d\n\n", total);

	while (1)
	{
		object(&toto, name, &price); //구매가능 목록 보여주기
		check = push(&toto); // 금액추가 또는 음료선택
		if (check < 7) {    //음료선택
			select(check, &toto, name, &price);
		}
		else {    // 돈 추가
			continue;
		}

	}






	//test = push(total);
	//printf("%d", test);









}












/*
//2번 last


last(int* k, int* k2) {
	int tt = *k;
	*k = *k2;
	*k2 = tt;
}



//1번 last
last(int** k, int** k2) {
	int tt = **k;
	**k = **k2;
	**k2 = tt;
}

middle(int* p, int* p2) {
	last(p, p2);//싱글포인터변수의 주소
}


main() {

	int a = 10;
	int b = 20;

	middle(&a, &b); //변수의 주소
	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);
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
		printf("문제1번\n");
		for (int i = 0; i < 10; ++i) {
			printf("\n");
			for (int j = 0; j < 10; ++j) {
				a[i][j] = k;
				++k;
				printf("%3d", a[i][j]);
			}
		}

		printf("\n\n문제2번\n\n");
		int sum = 0;
		int b[2][3] = { 1,2,3,4,5,6 };
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 3; ++j) {
				sum += b[i][j];
				if (i == 0 && j == 2) {
					printf("첫번째 행의 합은 : %d 입니다.\n", sum);
					sum = 0;
				}
				else if (i == 1 && j == 2) {
					printf("두번째 행의 합은 : %d 입니다.\n", sum);
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
					printf("첫번째 열의 합은 : %d 입니다.\n", sum);
					sum = 0;
				}
				else if (i == 1 && j == 1) {
					printf("두번째 열의 합은 : %d 입니다.\n", sum);
					sum = 0;
				}
				else if (i == 2 && j == 1) {
					printf("세번째 열의 합은 : %d 입니다.\n", sum);
					sum = 0;
				}
				else {
					continue;
				}
			}
		}


}
*/