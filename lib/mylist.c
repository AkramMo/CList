#include <stdlib.h>
#include <stdio.h>

#include "mylist.h"

/**
 * Initialise the linked list
 * @param l
 */
void mylist_init(struct mylist* l)
{
	// TODO: Fill it
	l->length = 0;
	l->first = NULL;
	l->head = NULL;
}

/**
 * Destroy all the linked list elements
 * and manage to free the memory
 * @param l
 */
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

/**
 * Function that create a new node in the list
 * with the data received and at the right
 * position
 * @param l
 * @param before
 * @param data
 */
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

			before->next = new_node;
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

/**
 * Remove a specified node and free
 * his memory
 * @param l
 * @param target
 */
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

/**
 * Find and return the right node according to
 * the data.
 * @param l
 * @param target
 * @return
 */
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

/**
 * Return the head of the single list.
 * @param l
 * @return
 */
struct mylist_node* mylist_get_head(struct mylist* l)
{
	// TODO: Fill it

	return l->head;

}

/**
 * Print all the data in the list
 * @param l
 */
void mylist_print(const struct mylist* l)
{
	for (struct mylist_node* pointer = l->first;
			pointer != NULL;
			pointer = pointer->next) {
		printf("%d\n", pointer->data);
	}
}


