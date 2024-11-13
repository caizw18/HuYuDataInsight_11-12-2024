#include <stdio.h>

int main() {
  printf("Data\n");
  printf("Ingeter output: \n");
  printf("%d\n",12);
  printf("%d\n",123);

  printf("Float output: \n");
  printf("%f\n",3.1415);
  
  //保留两位小数
  printf("%.2f\n",3.1415);

  printf("Character output: \n");

  printf("Character B = %c\n",'A');

  printf("My name is %s\n","James");

  printf("My name is %s, My age is %d","James",39);


  return 0;
}