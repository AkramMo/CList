#include <stdlib.h>
#include <stdio.h>

#include "mylist.h"

void mylist_init(struct mylist* l)
{
	// TODO: Fill it
	l->length = 0;
	l->first = NULL;
	l->head = NULL;
}

void mylist_destroy(struct mylist* l)
{
	// TODO: Fill it
	struct mylist_node *tmp = NULL;
	struct mylist_node *tmp2 = NULL;

	tmp = l->first;


	while(tmp->next){

		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}

}

void mylist_insert(
		struct mylist* l,
		struct mylist_node* before, int data)
{
	// TODO: Fill it

	struct mylist_node *new_node = 	malloc(sizeof(struct mylist_node)) ;

	if(before){

		if(before->next == NULL){

			new_node->next = NULL;
			new_node->data = data;

			before->next = new_node;
			l->length++;
			l->head = new_node;
		}else {

			new_node->next = before->next;
			new_node->data = data;

			before->next = &new_node;
			l->length++;
		}
	}else if(!l->first){

		new_node->next = NULL;
		new_node->data = data;

		l->first = new_node;
		l->head = new_node;

	}else{

		new_node->next = NULL;
		new_node->data = data;

		l->head->next = new_node;
		l->head = new_node;

	}



}

void mylist_remove(
		struct mylist* l,
		struct mylist_node* target)
{
	// TODO: Fill it

	struct mylist_node *tmp;
	struct mylist_node *tmp2 = NULL;

	tmp = l->first;

	while(tmp->next){

		tmp2 = tmp->next;

		if(tmp2 == target){

			tmp->next = tmp2->next;
			free(tmp2);
		}else{

			tmp = tmp2;
		}
	}
}

struct mylist_node* mylist_find(struct mylist* l, int target)
{
	// TODO: Fill it

	struct mylist_node *tmp;

	tmp = l->first;

	while(tmp->next != NULL || tmp == l->first){

		if(tmp->data == target){

			return tmp;
		}

		tmp = tmp->next;
	}

	return NULL; // If not found
}

struct mylist_node* mylist_get_head(struct mylist* l)
{
	// TODO: Fill it

	return l->head;

}
void mylist_print(const struct mylist* l)
{
	/*
	 * HINT: Define structs referring comments
  for (struct mylist_node* pointer = l->head;
      pointer != NULL;
      pointer = pointer->next) {
    printf("%d\n", pointer->data);
  }
	 */


	for (struct mylist_node* pointer = l->first;
			pointer != NULL;
			pointer = pointer->next) {
		printf("%d\n", pointer->data);
	}


}


