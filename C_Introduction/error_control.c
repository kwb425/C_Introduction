//
//  error_control.c
//  C_Introduction
//
//  Created by KimWiback on 31/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Error Control /////////////////////////////////////
void error_control(){
    // Making global error status tracker (a number)
    extern int errno;
    FILE *f_pointer;
    f_pointer = fopen("not_existing.txt", "r");
    if (f_pointer == NULL){
        fprintf(stderr, \
                "Value of errno: %d\n", \
                errno);
        fprintf(stderr, \
                "Error opening file: %s\n", \
                strerror(errno));
        // perror("Error printed by perror");
    }else{
        fclose(f_pointer);
    }
}
