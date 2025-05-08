#include <stdint.h>
#include <stdbool.h>

#include <stdio.h>

int countSetBit(int data){
    unsigned int count =  0;
    while (data != 0)
    {
        data &= (data -1);
        count ++;
    }
    return count;
}

int main() {
    printf("Num of bit set : %d\n", countSetBit(3));
    return 0;
}