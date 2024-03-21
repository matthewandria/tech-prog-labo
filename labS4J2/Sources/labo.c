#include "Labo.h"

void* allocate(size_t size);


typedef struct Queue Queue;

struct Queue {
	void* data;
	Queue* prev;
	Queue* next;
};

typedef struct person_t {
	char name[256];
	size_t age;
} Person;



void push(Queue* q, Node* n);


Node* pop(Queue* q);


Node* peek(Queue* q);


void pushAsPriorityQueue(Queue* q, Node* n);



void sortQueue(Queue* q);