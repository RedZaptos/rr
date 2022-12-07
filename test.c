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

void* p1(){
	printf("entered p1\n");
	return NULL ; 
}

void* p2(){
	printf("entered p2\n");
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