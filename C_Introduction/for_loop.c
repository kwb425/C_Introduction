//
//  for_loop.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Defining For-loop /////////////////////////////////
void for_loop(){
    for(int index = 1; index <= 10; index++){
        printf("%d'th for loop iteration\n", index);
    }
}
