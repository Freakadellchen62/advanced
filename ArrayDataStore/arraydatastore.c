#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "arraydatastore.h"

#define MAX_STRING_SIZE 40

char **dataStore;
int size;

void init(int n){
  size = n;
  dataStore = malloc(n * sizeof(char*));
  for(int i = 0; i < n; i++){
      dataStore[i] = malloc((MAX_STRING_SIZE + 1) * sizeof(char));
      dataStore[i] = NULL;
  }
}

void destroy(){
  for(int i = 0; i < size; i++){
      if(dataStore[i] != NULL) free(dataStore[i]);
  }
  free(dataStore);
}

bool insert(char * str){
  for(int i = 0; i < size; i++){
      if(dataStore[i] == NULL){
        dataStore[i] = str;
        return 1;
      }
  }
  return 0;
}

void delete(char * str){
  for(int i = 0; i < size; i++){
      if(dataStore[i] != NULL && strcmp(dataStore[i], str) == 0){
        dataStore[i] = NULL;
      }
  }
}

char * get(int i){
  if(i <= size) return dataStore[i-1];
  else return NULL;
}

void print(){
  for(int i = 0; i < size; i++){
      if(dataStore[i] != NULL){
        printf("%s\n", dataStore[i]);
      }
  }
}
