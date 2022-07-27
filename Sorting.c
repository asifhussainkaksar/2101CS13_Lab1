#include <stdio.h>

void selection_sort(int array[], int n){
  for(int i = 0;i<n-1;i++){
    for(int j = i+1;j<n;j++){
      if(array[i]>array[j]){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  for(int i = 0;i<n;i++){
      printf("%d  ", array[i]);
    }
}
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
