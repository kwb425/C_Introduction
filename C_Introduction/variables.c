//
//  variables.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Defining Variables ////////////////////////////////



//////////////////////
// Global (in this .c)
//////////////////////

//// Variable can be changed.
int global_var = 1;

//// Constant can not be altered.
const int global_const = 1;



/////////////////////
// Local (in this .c)
/////////////////////
void variables(){
    
    //// Variable can be changed.
    int local_var = 2;
    
    //// Constant can not be altered.
    const int local_const = 2;
    
    
    
    ///////////
    // Printing
    ///////////
    printf("Global variable: %d\n", global_var);
    printf("Global constant: %d\n", global_const);
    printf("Local variable: %d\n", local_var);
    printf("Local constant: %d\n", local_const);
}
