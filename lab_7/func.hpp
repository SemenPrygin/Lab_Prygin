#pragma once
#include <iostream>
#include <cmath>


using namespace std;
namespace def 
{ 
const int MAX_N = 100;



void read_matrix(int matrix[MAX_N][MAX_N], int n);// ЧИТАЕТ МАТРИЦУ
void print_matrix(int matrix[MAX_N][MAX_N], int n);// ВЫВОД МАТРИЦЫ 
void sort_rows_with_eight(int matrix[MAX_N][MAX_N], int n);//ХОТЯ БЫ ОДИН ЭЛЕМЕНТ 8
void find_min_max(int matrix[MAX_N][MAX_N], int n, int &min, int &max);//НАХОЖДЕНИЕ МАКС И МИН ЭЛЕМЕНТА СТРОКИ И ЗАПИСЬ ИХ В ПЕРЕМЕННЫЕ
void process_matrix(int matrix[MAX_N][MAX_N], int n);// ВЫЗЫВАЕТ ПРЕД ФУНКЦИЮ ПОСЛЕ ЧЕГО, ЕСЛИ СУММА РАВНО 0 СОРТИРУЕТ
}
