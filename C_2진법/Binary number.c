#include <stdio.h>

int main(void) {

  int arr[] = {0,0,0,0};  // 초기화

  int num = 1;

  for (int i = 0 ; i<16; ++i){
    for (int j = 0 ; j<4; ++j){
      printf("%d", arr[j]);
    }
    printf("\n");

    // 첫번째 자리 010101...해주기
    if(num%2 == 1){
      arr[3] = 1;
    }
    else{
      arr[3] = 0;
    }

    if(i>0){
      if(num%2 == 0){
        if(arr[2] == 1){
          arr[2] = 0;
        }
        else{
          arr[2] = 1;
        }
      }

      if(num%4 == 0){
        if(arr[1] == 1){
          arr[1] = 0;
        }
        else{
          arr[1] = 1;
        }
      }

      if(num%8 == 0){
        if(arr[0] == 1){
          arr[0] = 0;
        }
        else{
          arr[0] = 1;
        }
      }
    }

    ++num;

  }



  return 0;
}