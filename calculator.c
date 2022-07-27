#include<stdio.h>
int main(){
  int a, b;
  int n;
  printf("Select your choice : \n1. Addition \n2. Subtraction \n3.Multiplication \n4. Division");
  scanf("%d", &n);
  printf("Enter two numbers : ");
  scanf("%d %d", &a, &b);
  switch(n){
    case 1:
        printf("Addition is %d ", a+b);
        break;
    case 2:
         printf("Difference is %d ", a-b);
         break;
    case 3:
          printf("Multiplication is %d ", a*b);
         break;
    case 4:
          printf("Division is %f ", a/b);
         break;
  }
  return 0;
}
      
        
