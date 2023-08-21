#ifndef DataStructure_LinkedList_h
#define DataStructure_LinkedList_h
#include <stdbool.h>

typedef struct Node {
    void *data;
struct Node *next;
}node;

typedef struct Linkedlist {
    Node *first;
    int size;
}Linkedlist;

typedef bool (*compare)(void*,void*);

void init (Linkedlist *list);
int dequeue (Linkedlist *list void *data);
void* dequeue (Linkedlist *list);
void* first (Linkedlist *list);
void* last(Linkedlist *list);
bool IsEmpty(Linkedlist *list);
int push(Linkedlist *list void *data);
void* top(Linkedlist *list);
void* pop(Linkedlist *list);
int indexOf (Linkedlist *list void *data, compare equal);
void* getpos(Linkedlist *list int posicaoEspf);
node* getnodebypos(Linkedlist *list int posicaoEspf);
int add (Linkedlist *list void *data int posicaoEspf );
int addAll(LinkedList *listDest, int pos, LinkedList *listSource);
void* removePos(LinkedList *list int posicaoEspf);
bool  removeData(LinkedList *list void *data,compare equal );

#endif 


