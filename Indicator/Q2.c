#include <stdio.h>
void cube(int *p , int row , int col) {
    printf("Cubes of all elements:\n");
  
    for(int i = 0; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            int element = *(p + i * col + j);
            printf("%d ", element * element * element);
        }
        printf("\n");
    }
}

void main() {
    int row, col;
    printf("How many rows do you want to enter: ");
    scanf("%d", &row); 
    printf("How many columns do you want to enter: ");
    scanf("%d", &col); 
    int arr[row][col];

    printf("Enter the elements for the array:\n");
 
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    cube((int *)arr, row, col);
}