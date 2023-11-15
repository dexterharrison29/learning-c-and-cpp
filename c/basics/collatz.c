#include<stdio.h>
int main(){
  int a = 11;
  int b = 11;
  while(a > 1){
    if(b % 2 == 0){
      b = b / 2;
      printf("%d %d\n", a, b);
    }
    else{  
      if(b == 1){
        b=a+1;
        a++;
      }
      else{
        b=b*3+1;
        printf("%d %d\n", a, b);
      }
    }
  }
  return 0;
}
