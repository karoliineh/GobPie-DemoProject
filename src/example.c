#include <pthread.h>
#include <stdio.h>

int myglobal;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void *t_fun(void *arg) {
  int *pi;
  pthread_mutex_lock(&mutex1);
  myglobal=myglobal+1;
  pthread_mutex_unlock(&mutex1);
  pi = NULL; 
  int c = *pi;
  return NULL;
}

int main(void) {
  pthread_t id;
  int c = 3;
  pthread_create(&id, NULL, t_fun, NULL);
  pthread_mutex_lock(&mutex2);
  myglobal=myglobal+1;
  pthread_mutex_unlock(&mutex2);
  pthread_join (id, NULL);
  assert(c == 3);
  return 0;
}



