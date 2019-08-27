#include "array.h"
#include <stdio.h>
#include <stdlib.h>

Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0; 
} 

// ·â×° 
int array_size(const Array *a)
{
	return a->size;
}

void array_inflate(Array *a, int more_size)
{
	int *p = (int*)malloc(sizeof(int)(a->size + more_size));
	int i;
	for ( i=0; i<a->size; i++ ){
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;
} 

int main(int argc, char const *argv[])
{
	Array a = array_create(100);
	printf("%d\n",array_size(&a));
	*array_at(&a, 0) = 10;
	printf("%d\n",*array_at(&a,0));
	int number;
	int cnt = 0;
	while (1) {
		scanf("%d",array_at(&a, cnt++));
		
	}
	
	array_free(&a);
	
	return 0;
 } 
