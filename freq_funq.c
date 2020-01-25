#include<stdio.h>
#include<stdlib.h>

char compare_small (char word1[],int size1, char word2[], int size2){
    int size= 0; int location_flag= 0; int loop_flag=0; int index=0; 
    if (size1>= size2){
        size= size1;
    } else if (size1<size2) {
        size= size2;
    }
    while (loop_flag == 0){
        if (word1[index]<word2[index]){
            location_flag= 1;
            loop_flag= 1;
        }
        if (loop_flag == 0){
            if (word2[index]<word1[index]){
                location_flag= 2;
                loop_flag= 1;
            }
        }
        if (loop_flag == 0){
            if (word1[index] == word2[index]){
                index++;
            }
        }
        if (index == size){
            loop_flag= 1;
        }
    }
    if (location_flag == 1){
        return word1;
    }
    if (location_flag == 2){
        return word2;
    }
    return word1;
}

int size_find (char word[]){
    int index= 0; int flag= 0;
    if (word[index] == NULL){
        return 0;
    }
    while (flag == 0){
        if (word [index]== '/0'){
            flag= 1;
        }
        if (word [index]== '/n'){
            flag= 1;
        }
        if (word [index]== '/t'){
            flag= 1;
        }
        index++;
    }
    return index;
}

char to_Matrix (char Sentence[]){
    int prev= 0; int next= 0; int index= 0; int loop_flag= 0; int word_flag= 0;
    char matrix [256][256]; int row= 0; int line= 0;
    for (int j=0; j<256; j++){
        for (int k=0;k<256; k++){
            matrix[j][k] == '/n';
        }
    }
    if (Sentence[index]== NULL){
        printf ("There is no sentence");
        return 0;
    }
    while (loop_flag == 0){
        if (Sentence [next]== '/0'){
            word_flag== 1;
        }
        if (Sentence [next]== '/t'){
            word_flag== 1;
        }
        if (Sentence [next]== '/n'){
            word_flag== 1;
        }
        if (Sentence [next+1]== NULL){
            loop_flag= 1;
        }
        if (word_flag== 1){
            for (int i= prev; i<=next; i++){
                matrix[row][line]= Sentence[i];
                line++;
            }
            line= 0;
            row= row+1;
            prev= next+1;
            next= next+1;
            word_flag= 0;
        }
        next= next+1;
    }
    return matrix;
}

char lexi_order (char matrix [256][256]){
    char result_matrix [256][256]; int index_row= 0; int index_line= 0; int word_flag= 0;
    int print_pointer_row= 0; int print_pointer_line= 0;
    for (int j=0; j<256; j++){
        for (int k=0;k<256; k++){
            result_matrix[j][k] == '/n';
        }
    }
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'a' || matrix[i][0]== 'A'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'b' || matrix[i][0]== 'B'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'c' || matrix[i][0]== 'C'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'd' || matrix[i][0]== 'D'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'e' || matrix[i][0]== 'E'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'f' || matrix[i][0]== 'F'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'g' || matrix[i][0]== 'G'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'h' || matrix[i][0]== 'H'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'i' || matrix[i][0]== 'I'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'j' || matrix[i][0]== 'J'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'k' || matrix[i][0]== 'K'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'l' || matrix[i][0]== 'L'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'm' || matrix[i][0]== 'M'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'n' || matrix[i][0]== 'N'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'o' || matrix[i][0]== 'O'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'p' || matrix[i][0]== 'P'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'q' || matrix[i][0]== 'Q'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'r' || matrix[i][0]== 'R'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 's' || matrix[i][0]== 'S'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 't' || matrix[i][0]== 'T'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'u' || matrix[i][0]== 'U'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'v' || matrix[i][0]== 'V'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'w' || matrix[i][0]== 'W'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'x' || matrix[i][0]== 'X'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'y' || matrix[i][0]== 'Y'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'z' || matrix[i][0]== 'Z'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    while (result_matrix[print_pointer_row][0]!= '/n'){
        print_pointer_line= 0;
        while (result_matrix[print_pointer_row][print_pointer_line]!= '/n' || result_matrix[print_pointer_row][print_pointer_line]!= '/t' || result_matrix[print_pointer_row][print_pointer_line]!= '/0'){
            printf("%c", result_matrix[print_pointer_row][print_pointer_line]);
            print_pointer_line++;
        }
        print_pointer_row++;
        printf(" ");
    }
    
}
char reverse_lexi_order (char matrix [256][256]){
    char result_matrix [256][256]; int index_row= 0; int index_line= 0; int word_flag= 0;
    int print_pointer_row= 0; int print_pointer_line= 0;
    for (int j=0; j<256; j++){
        for (int k=0;k<256; k++){
            result_matrix[j][k] == '/n';
        }
    }
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'z' || matrix[i][0]== 'Z'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'y' || matrix[i][0]== 'Y'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'x' || matrix[i][0]== 'X'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'w' || matrix[i][0]== 'W'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'v' || matrix[i][0]== 'V'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'u' || matrix[i][0]== 'U'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 't' || matrix[i][0]== 'T'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 's' || matrix[i][0]== 'S'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'r' || matrix[i][0]== 'R'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'q' || matrix[i][0]== 'Q'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'p' || matrix[i][0]== 'P'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'o' || matrix[i][0]== 'O'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'n' || matrix[i][0]== 'N'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'm' || matrix[i][0]== 'M'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'l' || matrix[i][0]== 'L'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'k' || matrix[i][0]== 'K'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'j' || matrix[i][0]== 'J'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'i' || matrix[i][0]== 'I'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'h' || matrix[i][0]== 'H'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'g' || matrix[i][0]== 'G'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'f' || matrix[i][0]== 'F'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'e' || matrix[i][0]== 'E'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'd' || matrix[i][0]== 'D'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'c' || matrix[i][0]== 'C'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'b' || matrix[i][0]== 'B'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    
    for (int i= 0; i< 256; i++){
        index_line= 0;
        if (matrix[i][0]== 'a' || matrix[i][0]== 'A'){
            while (matrix[i][index_line]!= '/0' ||matrix[i][index_line]!= '/t' ||matrix[i][index_line]!= '/n'){
                result_matrix[i][index_line]== matrix[index_row][index_line];
                index_line++;
            }
            index_row++;
        }
    }
    while (result_matrix[print_pointer_row][0]!= '/n'){
        print_pointer_line= 0;
        while (result_matrix[print_pointer_row][print_pointer_line]!= '/n' || result_matrix[print_pointer_row][print_pointer_line]!= '/t' || result_matrix[print_pointer_row][print_pointer_line]!= '/0'){
            printf("%c", result_matrix[print_pointer_row][print_pointer_line]);
            print_pointer_line++;
        }
        print_pointer_row++;
        printf(" ");
    }
    
}