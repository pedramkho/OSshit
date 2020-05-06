#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  
// A normal C function that is executed as a thread  
// when its name is specified in pthread_create() 
void *myThreadFun(void *vargp) 
{ 
    printf("5"); 
    return NULL; 
} 
   
int main() 
{ 
    pthread_t thread_id; 
    pthread_create(&thread_id, NULL, myThreadFun, NULL); 
    pthread_join(thread_id, NULL);
}