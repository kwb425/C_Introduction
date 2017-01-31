//
//  file_control.c
//  C_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// File Control //////////////////////////////////////



//////////
// Writing
//////////
void writing_file(){
    FILE *f_pointer;
    f_pointer = fopen("sample.txt", "w");
    fprintf(f_pointer, "Sample text 1 \n");
    fclose(f_pointer);
}



////////////
// Appending
////////////
void appending_file(){
    FILE *f_pointer;
    f_pointer = fopen("sample.txt", "a");
    fprintf(f_pointer, "Sample text 2");
    fclose(f_pointer);
}



//////////
// Reading
//////////
void reading_file(){
    char lines[100];
    FILE *f_pointer;
    f_pointer = fopen("sample.txt", "r");
    while(!feof(f_pointer)){ // file, end of file
        // fgets(receiver, memory, f_pointer);
        fgets(lines, sizeof(lines), f_pointer);
        printf("%s\n", lines);
    }
    fclose(f_pointer);
}
