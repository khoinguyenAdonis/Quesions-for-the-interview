#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define X 5
#define Y 6 

int result[Y][X];
int maxtrix[X][Y] ={{1,2,3,4,5,6},
                    {1,2,3,4,5,6},
                    {1,2,3,4,5,6},
                    {1,2,3,4,5,6},
                    {1,2,3,4,5,6}};

void printMatrix(int * matrix, int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",*(matrix +i*cols +j));
    }
    printf("\n");
    }
}

void rotateRight (int * matrix, int rows, int cols, int * result ){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result +j*rows +(rows - i -1)) = *(matrix + i * cols + j);
        }
    }
}

void rotateLeft(int * matrix, int rows, int cols, int * result ){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result +(cols - j -1) * rows +i) = *(matrix + i * cols + j);
        }
    }
}

int main(void)
{
    rotateLeft((int *)maxtrix, X, Y, (int*)result);
    printMatrix((int *)result, Y, X);
    return 0;
}