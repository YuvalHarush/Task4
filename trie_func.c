#include<stdio.h>
#include<stdlib.h>

struct Trie {
    struct Trie *letters[26];
    int word_flag;
};

typedef struct Trie Trie;
Trie * root;

Trie * createnode(){
Trie * node=(Trie*) malloc(sizeof(Trie));
int i= 0;
for (i;i<26;i++){
    node->letters[i]= NULL;
    node->word_flag= 0;
}
return node;
}

int search_insert_delete (Trie *node, char *word, char mode){
    if (!node){
        if (mode == 'i'){
            printf ("creating a root\n");
            node = createnode();
            root= node;
        } else if (mode == 's' || mode == 'd'){
            printf("root does not exist");
            return 1;
        }
    }
    while (*word){
        int index= (*word|('A'^'a'))-'a';
        if (!node-> letters[index]){
            if (mode == 'i'){
                printf("creating a node for character '%c'\n",*word); 
                node->letters[index]=createnode();
            } else if (mode=='s' || mode=='d') {
                printf("No node found for the character '%c\n'",*word); 
                return 1;
            }
        }
        node=node->letters[index];
        word++;
    }
    if(!node->word_flag){
        if (mode == 'i'){
            node->word_flag=1; 
            return 0;
        } else if (mode=='s' || mode=='d'){
            return 1;
        } else if(mode=='d'){
            node->word_flag=0; 
            return 0;
        } else {
            return 0;
        }
    }
}