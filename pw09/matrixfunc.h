#include <stdio.h>
void summa_elem_kajdoi_stroki_matrici(int (*matrix)[100], int* summ, size_t rows, size_t cols); //7
int kolichestvo_elementov_bolshe_k(int (*matrix)[100], int k, size_t rows, size_t cols); //13
int znach_poslednego_otric_elem_matrici_pri_obhode_po_strokam(int (*matrix)[100], size_t rows, size_t cols); //22
void size_mat(size_t* rows, size_t* cols);
int zapolnenie_matrici(int (*matrix)[100], size_t rows, size_t cols);
void predstavlenie_marici(int (*matrix)[100], size_t rows, size_t cols);