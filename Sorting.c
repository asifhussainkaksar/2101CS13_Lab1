#include <stdio.h>

void bubble_sort(int array[], int n){
  int i, j;
  for(int i = 0;i<n-1;i++){
    for(int j = 0;j<n-i-1;j++){
      if(array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  for(int i = 0;i<n;i++){
    printf("%d  ", array[i]);
    }
}
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
  
  printf("Enter the elements of array/n");
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
  return 0;
}
