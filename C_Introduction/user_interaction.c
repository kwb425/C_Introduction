//
//  user_interaction.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// User Interaction //////////////////////////////////
void user_interaction(){
    char input_char[2*sizeof(char)];
    char input_sentence[100*sizeof(char)];
    int intput_int = 0;
    

    
    ///////////////////////////
    // Separated by space: word
    ///////////////////////////
    printf("Type a word: \n");
    // scanf("format spec", pointer);
    scanf("%s", input_char);
    // printf("%s", pointer)
    printf("User specified input: %s\n", input_char);
    
    
    
    //////////////////////////
    // Separated by space: int
    //////////////////////////
    printf("Type a integer: \n");
    // scanf("format spec", pointer);
    scanf("%d", &intput_int);
    // printf("%d", value)
    printf("User specified input: %d\n", intput_int);

    

    ///////////////////////////////////
    // Not separated by space: sentence
    ///////////////////////////////////
    printf("Type a sentence: \n");
    // First fgets(), eating \n, leftover of scanf().
    fgets(input_sentence, \
          sizeof(input_sentence), stdin);
    // Second fgets(), good to go.
    fgets(input_sentence, \
          sizeof(input_sentence), stdin);
    printf("User specified input: %s\n", \
           input_sentence);
}
