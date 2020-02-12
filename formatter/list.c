#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "list.h"

list_t *make_list(char *ch) {

  list_t *ptr;
  int wordLength;
  //char str[100];                                                                              
  char *string;
  string = (char *)calloc(100, sizeof(char));
  strcpy(string, ch);
  ptr = (list_t *)malloc(sizeof(list_t));
  assert(ptr != NULL);
  ptr->c = string;
  ptr->size = strlen(string);
  ptr->prev = NULL;
  ptr->next = NULL;
 // ptr->length = 

  return ptr;
}
