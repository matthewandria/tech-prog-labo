#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node Node;

struct Node {
	char* name;
	float* value;
	Node* prev;
	Node* next;
};

void ReadFiles() 
{	
	FILE* file;
	Node n = { 0 };
	file = fopen("data.csv", "r");
	char display = fgetc(file);
	
	
}



int main()
{
    printf("Inventaire MMORPG Dave's World ");

}
 

