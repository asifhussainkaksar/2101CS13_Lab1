#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++){
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++){
        M[j] = arr[q + 1 + j];
    }
// Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
// Until we reach either end of either L or M, pick larger among
// elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}
void merge_sort(int array[], int l, int r){
  if(l<r){
    int m = l+ (r-1)/2;
    merge_sort(array, l, m);
    merge_sort(array, m+1, r);
    merge(array, l, m, r);
  }
}

int partition (int arr[], int low, int high){
int pivot = arr[high];
int i = (low - 1);
for (int j = low; j <= high- 1; j++)
{

if (arr[j] <= pivot)
{
  
i++;

int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;

}

}

int temp = arr[i+1];
  arr[i+1] = arr[high];
  arr[high] = temp;
return (i + 1);

}

void quickSort(int arr[], int low, int high)

{

if (low < high)

{

int pi = partition(arr, low, high);

quickSort(arr, low, pi - 1);

quickSort(arr, pi + 1, high);

}

}

void insertion_sort(int array[], int n){
  int i, key, j;
  for(i = 1;i<n;i++){
    key = array[i];
    j = i-1;
    while(j>=0 && array[j]>key){
      array[j+1] = array[j];
      j = j-1;
    }
    array[j+1] = key;
  }
  for(int i = 0;i<n;i++){
    printf("%d  ", array[i]);
  }
}

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
  for(int i = 0;i<n;i++){
      printf("%d  ", array[i]);
    }
}

int main(){
  int n;
  printf("Sort the array");
  printf("Enter the no of elements in array \n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of array/n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
  
  return 0;
}
