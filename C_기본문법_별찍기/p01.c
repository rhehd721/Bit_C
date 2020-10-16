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

    //printf("나의 이름은 %s 입니다\n","박병호");
    //printf("나의 나이는 %d 입니다\n",26);

    //int num = 10;
    //int b = sizeof(num);
    //printf("%d \n", b);

    //int a = 4;

    //if (a > 10) {
    //    printf("10보다 크다\n");
    //}
    //else {
    //    printf("10보다 작다\n");
    //}

    //char x = 'A';
    //printf("원하는 문자를 입력하세요");
    //scanf_s("%c", &x);

    //if (x > 96) {
    //    printf("소문자입니다\n");
    //    printf("%c\n", x^32);
    //}
    //else {
    //    printf("대문자입니다\n");
    //    printf("%c\n", x ^ 32);
    //}

    //짝수 출력
	int y = 0;
	y = 2;
	printf("짝수출력");

	while (y <= 100) {
		printf("%d ", y);
		y = y + 2;

	}

	printf("\n");


	//다섯개씩 출력
	y = 0;
	printf("\n");

	char str = '*';
	while (y < 5) {
		printf("***** \n");
		y = y + 1;
	}

	//10개씩 출력
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

	//*과 -
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

    //트리만들기1
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
	printf("비밀번호를 입력하세요\n");
	scanf_s("%d", &num);
	while (i >= 1) {
		if (pass == num) {
			printf("통과");
			break;
		}
		else{
			printf("기회가 %d번 남았습니다\n", i);
			printf("비밀번호를 입력하세요\n");
			scanf_s("%d", &num);
			--i;
		}

	}
	if (i == 0) {
		printf("경찰이 출동합니다");
	}
	
	

}
*/

//다음 4줄에 해당하는 함수를 각각 완성하시오(즉 함수 4개 만들기)
/*
int get_passwd(void);
void chance(int cnt);
int compare(int a, int b);
void police(int cnt);

main()
{

	int pwd = 1234;//기존에 정해둔 패스워드
	int get_pwd; //받을 패스워드
	int cnt = 3; //기회는 3번 뿐
	do {
		get_pwd = get_passwd();//패스워드 받아 옴 

		if (compare(pwd, get_pwd)) //두변수 같은지 같으면 1 다르면 0을 리턴한다.
		{
			puts("통과");
			break;
		}
		else {
			chance(--cnt); //기회를 보여주는 함수
		}
	} while (cnt); //cnt!=0

	police(cnt); //경찰을 부르는 함수 cnt가 0이면 결찰을 부르는 함수



	//트리그리기2
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
	printf("패스워드를 입력하세요\n");
	scanf_s("%d", &pwd);
	return pwd;
}

void chance(int cnt) {
	printf("남은 기회는 %d 번입니다\n", cnt);
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
		printf("경찰이 충동합니다");
		
	 }
	return 0;
}
*/

main() {
	//크리스마스 트리 만들기
	/*int hi = 0;
	printf("원하는 트리의 높이를 입력하세요");
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
	srand(time(NULL));  //이걸 써줌으로 진짜 랜덤값을 받을 수 있다
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
	srand(time(NULL));  //이걸 써줌으로 진짜 랜덤값을 받을 수 있다
	while (age <= 0 || age >= 100)
	{
		age = rand();
	}
	printf("예상되는 나이를 입력하세요\n");
	scanf("%d", &num);

	while (1)
	{
		check = num;

		if (age < num) {
			printf("적은 나이를 입력하세요\n");
			scanf("%d", &num);
			if (check < num) {
				printf("왜 더 큰나이를 입력하셨나요?\n");
				scanf("%d", &num);
				++count;
			}
			++count;
		}
		else if (age > num) {
			printf("더큰 나이를 입력하세요\n");
			scanf("%d", &num);
			if (check > num) {
				printf("왜 더 작은나이를 입력하셨나요?\n");
				scanf("%d", &num);
				++count;
			}
			++count;
		}
		else {
			printf(" %d살 정답입니다\n", age);
			printf("%d번만에 맞췄습니다\n", count);
			break;
		}
		
	}
	*/
	
	/*
	//트리만들기 최종
	int str = 0;
	int tt = 0;
	int h = 0;


	printf("길이를 입력하세요 : ");
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