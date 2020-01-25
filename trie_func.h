

struct Trie;
int search_insert_delete (struct Trie *node, char *word, char mode);
void delete_node (struct Trie *node, char *word);
void insert_node (struct Trie *node, char *word);
void search_node (struct Trie *node, char *word);