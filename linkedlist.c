#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h>"
//#include <log.h>
int main(){
    File/=*file= fopen("program.log,"" w");
}


void init(LinkedList *list){       // Cria lista caso ela seja nula e nao tenha tamanho 
       log_info("Inicializando a lista");
       log_trace("init->")
        list -> frist=NULL
        list -> size=0;
        log_debug ("list->first: %p, list ->first");
        log_debug ("list->size: %d,list->size");
        log_trace("init <-");
}
int enqueue(LinkedList *list, void *data){
 Node *Newnode = (Node*)malloc(sizeof((node)); // Aqui criamos o no 
    if (Newnode==NULL) return -1; // Caso nao tenha espaco na memoria ira retornar -1 
    newNode->data = data; //o valor que o usuario ira guardar 
    newNode->next = NULL; // ele e um ponteiro que aponta pro proximo no 
    if (isEmpty(list))// caso a lista esteja 
    list-> first = newNode; // ele cria um novo no 
    else{
        node *aux = list->first; // Aponta para o primeiro  "First"
        while (aux->next !=NULL)// quando nao for o ultimo do no 
        aux = aux -> next; // aux avanca para o no seguinte
        aux-> next = newNode; //ultimo no apoonta para o proximo no  
    }
    list->size++; // apos adicionar um novo no na lista pode se aumentar a quantidade de elementos na lista 
    return 1;


}
void* dequeue(LinkedList *list){
    if((isEmpty(list)) return NULL // ira verificar se existe algo na lista
   
    node *trash = list ->first; //O Primeiro elemento da lista sera Removido
    list->first =list->first->next; // o segundo elemento do no passara a ser o primeiro elemento 
    void *data  = trash->data; //os dados do no serao removidos
    
    free(trash); //libera espaco para 
    list->size--;
    return data;


}
   

void* first(LinkedList *list){
    if (isEmpty((list)) Return NULL;
    else list->frist->data;
    
    
}
void* last(LinkedList *list);
int push(LinkedList *list, void *data);
void* pop(LinkedList *list){
    return dequeue(list);
}
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
