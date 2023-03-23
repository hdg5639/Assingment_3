#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
typedef struct {
	int row;
	int col;
	int value;
}element;
typedef struct SparseMatrix {
	element data[MAX_TERMS];
	int rows;
	int cols;
	int terms;
}SparseMatrix;
int main() {
	int ROW = 0, COL = 0, VALUE = 0;
	element *p;
	p = (element*)malloc(sizeof(element));
	printf("Enter the size of rows and colums, the number of non-zero terms: ");
	scanf_s("%d %d %d", &p->row, &p->col, &p->value);
	printf("Enter row, cloumn, and value pairs in order:\n");
	for (int i = 0; i <= ROW; i++) {
		scanf_s("%d %d %d",)
	}
}