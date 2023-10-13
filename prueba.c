#include <stdio.h> 
#include <sys/wait.h> 
#include <unistd.h>
#include <pthread.h>
void *f1 (void *msg) {
  printf("Thread ejecutandose. Mensaje: %s\n", (char *) msg);
}

void *f2 () {
   pid_t pid;
   pid = fork();
   if (pid == 0) {
     
      execlp("/bin/ps", "ps", NULL);
   }
   return 0;
}

int main(){
  pthread_t t1;
  pthread_t t2;
  
  char *cadena = "Thread corriendo";
  pthread_create(&t1, NULL, f1, (void *) cadena);
  printf("\nCrea t1\n");
  pthread_create(&t2, NULL, f2, NULL);
  printf("\nCrea t2\n"); 
  pid_t pid; 
  pid = fork();

  printf("Pid: %d\n", getpid());
  if (pid == 0) {
    
  printf("Pid: %d\n", getpid());
    printf("Hola"); 
    return 0;
  }
  else {
    wait (NULL);
  }
  return 0;
}
