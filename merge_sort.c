/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/merge_sort  */
/*        Rodrigo Tribiolli Moreira
/*===============================================================================*/

#include "merge_sort.h"

int _compares = 0;
int _swaps = 0;

void compares(void){ _compares++; }
void swaps(void){ _swaps++; }

void merge(int data[], int left, int middle, int right){
  int *aux = (int *) malloc((right - left + 1)*sizeof(int));
  int left_merge = left; int middle_merge = middle+1; int aux_position = 0;

  while (left_merge <= middle && middle_merge <= right)
    if (data[left_merge] <= data[middle_merge])
      aux[aux_position++] = data[left_merge++];
    else
      aux[aux_position++] = data[middle_merge++];

  while (left_merge <= middle)
    aux[aux_position++] = data[left_merge++];
  while (middle_merge <= right)
    aux[aux_position++] = data[middle_merge++];

  for (left_merge = left; left_merge <= right; left_merge++)
    data[left_merge] = aux[left_merge-left];

  free (aux);
}

void merge_sort (int data[], int left, int right, int level) {
   if (left < right) {
      int middle = (left + right)/2;
      merge_sort(data, left, middle, level+1);
      merge_sort(data, middle+1, right, level+1);
      merge(data, left, middle, right);
   }
}

void print_int(int* array, int size){
  int i;
  for (i = 0; i < size; ++i) printf("%d ", array[i]);
}

void print_char(int* array, int size){
  int i;
  for (i = 0; i < size; ++i) printf("%c ", array[i]);
}

void swaps_and_compares(void){
  printf("\nComparacoes: %d", _compares);
  printf("\nTrocas: %d", _swaps);
}
