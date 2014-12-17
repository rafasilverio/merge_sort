/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/merge_sort  */
/*===============================================================================*/

#include <stdio.h>
#include <stdlib.h>

void merge_sort (int data[], int left, int right, int level);
void merge(int data[], int left, int middle, int right);
void print_int(int* arr, int size);
void print_char(int* arr, int size);
void swaps_and_compares(void);
