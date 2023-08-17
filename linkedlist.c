#include <stdio.h>
#include <stdlib.h>
#include <linkedlist.h>


void init(LinkedList *list){       // Cria lista caso ela seja nula e nao tenha tamanho 
        list -> frist=NULL
        list -> size=0;
}
int enqueue(LinkedList *list, void *data){

}
void* dequeue(LinkedList *list){
    Node *Newnode = (Node*)malloc(sizeof((node)); // Aqui criamos o no 
    if (Newnode==NULL) return -1; // Caso nao tenha espaco na memoria ira retornar -1 
    newNode->data = data; //o valor que o usuario ira guardar 
    newNode->next = NULL; // ele e um ponteiro que aponta pro proximo no 
    

void* first(LinkedList *list);
void* last(LinkedList *list);
int push(LinkedList *list, void *data);
void* pop(LinkedList *list);
void* top(LinkedList *list);
bool isEmpty(LinkedList *list){
    return(list->size == 0); // Isso serve para saber se a lista esta vazia. Utilizando boleano ele retorna 1 ou 0, 1 == nao esta vazio e 0 == vazio 
}
int indexOf(LinkedList *list, void *data, compare equal);
void* getPos(LinkedList *list, int pos);
Node* getNodeByPos(LinkedList *list, int pos);
int add(LinkedList *list, int pos, void *data);
int addAll(LinkedList *listDest, int pos, LinkedList *listSource);
void* removePos(LinkedList *list, int pos);
bool removeData(LinkedList *list, void *data, compare equal);
