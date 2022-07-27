#include <stdio.h>

int main(){
  int n;
  printf("Enter the value of n");
  scanf("%d",&n);
  int a[n];
  
  printf("Enter the elements of array");
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
  return 0;
}
