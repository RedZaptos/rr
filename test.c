#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<strings.h>
#include<limits.h>
#include<pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t lock; 

void* p1(){
	sem_wait(&lock);
	printf("entered p1\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	sem_post(&lock); 
	return NULL ; 
}

void* p2(){
	sem_wait(&lock);
	printf("entered p2\n");
	sem_post(&lock);
	return NULL ; 
}

int main(){
	pthread_t thread1 , thread2;
	pthread_create(&thread1 , NULL , p1 , NULL); 
	pthread_create(&thread2 , NULL , p2 , NULL);
	pthread_join(thread1 , NULL);
	pthread_join(thread2 , NULL);
	return 0;
}
