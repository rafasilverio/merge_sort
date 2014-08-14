/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/avl-tree  */
/*===============================================================================*/

#include "merge_sort.h"

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int array[], int left, int middle, int right){
  int i, j, k;
  int middle_left = middle - left + 1;
  int middle_right =  right - middle;

  /* create temp arrays */
  int L[middle_left], R[middle_right];

  /* Copy data to temp arrays L[] and R[] */
  for(i = 0; i < middle_left; i++)
    L[i] = array[left + i];
  for(j = 0; j < middle_right; j++)
    R[j] = array[middle + 1 + j];

  /* Merge the temp arrays back into arr[l..r]*/
  i = 0; j = 0; k = left;
  while (i < middle_left && j < middle_right){
    if (L[i] <= R[j]){
      array[k] = L[i]; i++;
    }else{
      array[k] = R[j]; j++;
    }
    k++;
  }

  /* Copy the remaining elements of L[], if there are any */
  while (i < middle_left){
    array[k] = L[i];
    i++; k++;
  }

  /* Copy the remaining elements of R[], if there are any */
  while (j < middle_right){
    array[k] = R[j];
    j++; k++;
  }
}

void merge_sort(int array[], int left, int right){
  if(left < right){
    int middle = left+(right-left)/2; //Same as (l+r)/2, but avoids overflow for large l and h
    merge_sort(array, left, middle);
    merge_sort(array, middle+1, right);
    merge(array, left, middle, right);
  }
}

void print_int(int* array, int size){
  int i;
  for (i = 0; i < size; ++i)
    printf("%d ", array[i]);
}

void print_char(int* array, int size){
  int i;
  for (i = 0; i < size; ++i)
    printf("%c ", array[i]);
}
