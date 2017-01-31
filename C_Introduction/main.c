//
//  main.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Main //////////////////////////////////////////////
int main() {

    
    
    ////////////
    // Variables
    ////////////
    variables();
    
    
    
    /////////
    // Arrays
    /////////
    arrays();
    
    
    
    /////////////
    // Structures
    /////////////
    everything all_types_struct = \
    {1, "a", 3.14, 2.71}; // Repective allocation
    printf("Struct's float: %f\n", \
           all_types_struct.member_float);
    printf("Struct's char: %s\n", \
           all_types_struct.member_char);
    
    
    
    ///////////
    // For loop
    ///////////
    for_loop();
    
    
    
    /////////////
    // While loop
    /////////////
    while_loop();
    
    
    
    ///////////////
    // If statement
    ///////////////
    if_statement();
    
    
    
    ///////////////////
    // User interaction
    ///////////////////
    user_interaction();
    
    
    
    //////////////////
    // File controling
    //////////////////
    writing_file();
    appending_file();
    reading_file();
    
    
    
    ///////
    // Heap
    ///////
    heap_control();
    
    
    
    ///////////////////////////////////////
    // Refer by reference vs Refer by value
    ///////////////////////////////////////
    int value = 1;
    int *pointer = &value;
    pass_by_value(value);
    printf("Not changed: %d\n", value);
    pass_by_pointer(pointer);
    printf("Changed: %d\n", value);
    
    
    
    ////////////////
    // Error control
    ////////////////
    error_control();
    
    
    
    /////////////////////////////
    // Build success indicator, 0
    /////////////////////////////
    return 0;
}
