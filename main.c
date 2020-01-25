/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include "freq_func.h"
#include "trie_func.h"

int main(int argc, char *argv[]) {
    char data[256]; int flag= 0; int pointer= 0;
    scanf(" %s", data);
        if (*argv[pointer]== 'f'){
            pointer++;
            if (*argv[pointer]== 'r'){
                pointer++;
                if (*argv[pointer]== 'e'){
                    pointer++;
                    if (*argv[pointer]== 'q'){
                        pointer++;
                        if (*argv[pointer]== 'u'){
                            pointer++;
                            if (*argv[pointer]== 'e'){
                                pointer++;
                                if (*argv[pointer]== 'n'){
                                    pointer++;
                                    if (*argv[pointer]== 'c'){
                                        pointer++;
                                        if (*argv[pointer]== 'y'){
                                            pointer++;
                                            pointer++;
                                            flag= 1;
                                            if (*argv[pointer]== 'r'){
                                                flag= 2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (flag== 1){
            char la_matrix [256][256]= to_Matrix(data);
            lexi_order (la_matrix);
        }
        if (flag== 2){
            char la_matrix [256][256]= to_Matrix(data);
            reverse_lexi_order (la_matrix);
        }        
    return 0;
}
