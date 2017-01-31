//
//  main.h
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Preventing Double Loading /////////////////////////
#ifndef main_h
#define main_h





// Default Headers ///////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>





// Prototyping ///////////////////////////////////////
void variables();
void arrays();
void for_loop();
void while_loop();
void if_statement();
void user_interaction();
void writing_file();
void appending_file();
void reading_file();
void heap_control();
void pass_by_pointer(int *pointer);
void pass_by_value(int value);
void error_control();





// Declarations //////////////////////////////////////
struct all_types {
    int member_int;
    char member_char[2];
    float member_float;
    double member_double;
};
typedef struct all_types everything;





// Preventing Double Loading /////////////////////////
#endif /* main_h */
