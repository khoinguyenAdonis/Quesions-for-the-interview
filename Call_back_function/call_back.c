/**
 * @file call_back.c
 * @brief Call back function example
 * @version 0.1
 * @date 2021-07-14
 * 
 */

#include <stdio.h>  
#include "call_back.h"

static CB_func func_cb;

void CB_init_function(CB_func fcHandler){
    func_cb = fcHandler;
    if (func_cb == NULL){
        func_cb = CB_Is_Null;
    }

}

void CB_execute(int num)
{
    func_cb(num);
}

void CB_Is_Null(int num){
    printf (" Func is null\n");
}
