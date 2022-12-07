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
	printf("p1 has acquired lock\n"); 
	while(1){
		continue; 
	}
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("ok janu\n");
	printf("p1 has unlocking lock\n");
	sem_post(&lock); 
	return NULL ; 
}

void* p2(){
	sem_wait(&lock);
	printf("p2 has acquired lock\n"); 
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("entered p2\n");
	printf("p2 has unlocking lock\n");
	sem_post(&lock);
	return NULL ; 
}

int main(){
	sem_init(&lock , 0 , 1); 
	pthread_t thread1 , thread2;
	pthread_create(&thread1 , NULL , p1 , NULL); 
	pthread_create(&thread2 , NULL , p2 , NULL);
	pthread_join(thread1 , NULL);
	pthread_join(thread2 , NULL);
	return 0;
}
