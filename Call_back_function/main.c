/**
 * @file main.c
 * @brief Call back function example
 * @version 0.1
 * @date 2021-07-14
 * 
 */


#include <stdio.h>
#include "call_back.h"

void userFunc(int number)
{
    printf("User function : %d\n", number);
}


int main (int argc, char *argv[])
{
    CB_init_function(userFunc);
    CB_execute(10);
    CB_init_function(NULL);
    return 0;
}   