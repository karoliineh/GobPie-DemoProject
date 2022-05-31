#include <pthread.h>

int data[10];
pthread_mutex_t mutexes[10];

void safe_inc(int i) {
  pthread_mutex_lock(&mutexes[i]);
  data[i]++;
  pthread_mutex_unlock(&mutexes[i]);
}

void *t_fun(void *arg) {
  safe_inc(3);
  safe_inc(4);
  return NULL;
}

int main() {
  for (int i = 0; i < 10; i++)
    pthread_mutex_init(&mutexes[i], NULL);

  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);

  pthread_mutex_lock(&mutexes[4]);
  data[3]++;
  data[4]++;
  pthread_mutex_unlock(&mutexes[4]);

  return 0;
}