/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/merge_sort  */
/*===============================================================================*/

#include "merge_sort.h"

int main(){
  int array_char[] = {'P','S','C','K','M','L','A','X','E'};
  int array_int[] = {13,3,10,15,2,1,7,9,5,17};
  int size_char = sizeof(array_char)/sizeof(array_char[0]);
  int size_int = sizeof(array_int)/sizeof(array_int[0]);

  printf("Array char\n");
  print_char(array_char, size_char);
  printf("\n");

  printf("Array int\n");
  print_int(array_int, size_int);
  printf("\n\n");

  printf("Sorted array char\n");
  merge_sort(array_char, 0, size_char-1, 0);
  print_char(array_char, size_char);
  printf("\n");

  printf("Sorted array int\n");
  merge_sort(array_int, 0, size_int-1, 0);
  print_int(array_int, size_int);
  printf("\n");

  return 0;
}
