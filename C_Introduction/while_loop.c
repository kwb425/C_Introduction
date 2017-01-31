//
//  while_loop.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Defining While-loop ///////////////////////////////
void while_loop(){
    int index = 1;
    while(index <= 10){
        printf("%d'th while loop iteration\n", index);
        index++;
    }
}
