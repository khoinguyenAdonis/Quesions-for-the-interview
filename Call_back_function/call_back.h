/**
 * @file call_back.h
 * @brief Call back function example
 * @version 0.1
 * @date 2021-07-14
 * 
 */

#ifndef __CALL_BACK_H__
#define __CALL_BACK_H__

typedef void (*CB_func)(int);


void CB_init_function(CB_func fcHandler);
void CB_execute(int num);
void CB_Is_Null(int num);

#endif