//
//  if_statement.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Defining If Statement /////////////////////////////
void if_statement(){
    int index = 5;
    if (index < 5){
        printf("If condition is met.\n");
    }else if(index > 7){
        printf("Else if condition is met.\n");
    }else{
        printf("Else condition is met.\n");
    }
}
