#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#define num_philopsophers 5
#define num_chopsticks 5

void dine(int n);
pthread_t philosopher[num_philopsophers];
pthread_mutex_t chopstick[num_chopsticks];

int main()
{
    // Define msg and status_message
    int status_message;
    void *msg;
    
    // Initialise the semaphore array
    for (int i = 1; i <= num_chopsticks; i++)
    {
        status_message = pthread_mutex_init(&chopstick[i], NULL);
        
        // Checking if the mutex was initialised successfully
        if (status_message == -1)
        {
            printf("\n Mutex initialization failed");
            exit(1);
        }
    }
    
    // Run the philosopher Threads using *dine() function
    for (int i = 1; i <= num_philopsophers; i++)
    {
        status_message = pthread_create(&philosopher[i], NULL, (void *)dine, (int *)i);
        if (status_message != 0)
        {
            printf("\n Thread creation error \n");
            exit(1);
        }
    }
    // Wait for all philosophers threads to complete executing 
    // (finish dining) before closing the program
    for (int i = 1; i <= num_philopsophers; i++)
    {
        status_message = pthread_join(philosopher[i], &msg);
        if (status_message != 0)
        {
            printf("\n Thread join failed \n");
            exit(1);
        }
    }
    
    // Destroy the chopstick Mutex array
    for (int i = 1; i <= num_chopsticks; i++)
    {
        status_message = pthread_mutex_destroy(&chopstick[i]);
        if (status_message != 0)
        {
            printf("\n Mutex Destroyed \n");
            exit(1);
        }
    }
    return 0;
}

// dine method
void dine(int n)
{
    printf("\nPhilosopher % d is thinking ", n);
    
    // picking up the left chopstick (wait)
    pthread_mutex_lock(&chopstick[n]);
    
    // picking up the right chopstick (wait)
    pthread_mutex_lock(&chopstick[(n + 1) % num_chopsticks]);
    
    // both chopstick picked now starts eating
    
    printf("\nPhilosopher % d is eating ", n);
    
    
    // places the left chopstick down (signal)
    pthread_mutex_unlock(&chopstick[n]);
    
    // places the  the right chopstick down (signal)
    pthread_mutex_unlock(&chopstick[(n + 1) % num_chopsticks]);
    
    //  eating finishes
    printf("\nPhilosopher % d Finished eating ", n);
}