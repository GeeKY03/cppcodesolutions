#include <stdio.h>

int sum(int num){
	int s=0,rem;
	while(num > 0){
        rem = num % 10;
        s = s+ rem;
        num = num / 10;
    }
    return s;
}

int main(){
  int num;
  scanf("%d", &num);
  printf("sum = %d", sum(num));

  return 0;
}