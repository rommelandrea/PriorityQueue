#include "ThePriorityQueue.h"

#define DIM 20

int lastIndex = 0;

struct elementWithPriority{
    int priority;
    string elem;
}elementWithPriority;

typedef struct elementWithPriority *element;

element heap[DIM];

void add(string s, int p){
    if(lastIndex<DIM){
        element e = malloc(sizeof(struct elementWithPriority));
        if(e == NULL){
            printf("impossibile eseguire la malloc\n");
            exit(0);
        }
        
        e->elem = s;
        e->priority = p;
        
        heap[lastIndex] = e;
        moveUp(lastIndex);
        lastIndex++;
    }else{
        printf("impossibile inserire l'elemento: CODA PIENA!!!\n");
    }
}

string first(){
    if(lastIndex == 0)
        return "coda vuota\n";
    else
        return heap[0]->elem;
}

string removeFirst(){
    if(lastIndex == 0)
        return "coda vuota\n";
    else{
        element e = malloc(sizeof(struct elementWithPriority));
        e->elem = heap[0]->elem;
        e->priority = heap[0]->priority;
        
        lastIndex--;
        
        heap[0]->elem = heap[lastIndex]->elem;
        heap[0]->priority = heap[lastIndex]->priority;
        
        free(heap[lastIndex]);
        
        moveDown(0);
        
        return e->elem;
    }
}

void moveUp(int i){
    if(i>lastIndex){
        printf("errore\n");
    }else{
        element e = heap[i];
        
        while(1){
            
        }
    }
}

void moveDown(int i){
    
}