#include<stdio.h>
#include "sort.h"
void main() {
	int arr[50] = {75,43,28,29,70,76,23,96,26,2,40,21,55,13,32,56,5,64,14,77,40,70,67,38,48,59,42,42,28,6,79,46,81,26,64,66,78,58,9,1,14,44,8,31,46,25,8,32,49,93};
	int n = sizeof(arr)/sizeof(int);
	print_array(&arr[0], n);
	insertion_sort(&arr[0], n);
	print_array(&arr[0], n);
}