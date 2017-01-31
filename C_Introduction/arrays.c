//
//  arrays.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Defining Arrays ///////////////////////////////////
int arr_num[] = {1, 2, 3}; // []: auto memory alloc
char arr_str[] = "Hello"; // []: auto memory alloc



///////////
// Printing
///////////
void arrays(){
    // printf("%d", value)
    printf("Numeric array: %d %d %d\n", \
           arr_num[0], arr_num[1], arr_num[2]);
    // printf("%s", pointer)
    printf("String array: %s\n", arr_str);
}
