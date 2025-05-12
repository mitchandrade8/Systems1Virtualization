
#include <stdio.h>
#include <unistd.h> // for sleep()

#define JOB_COUNT 3
#define DURATION 5

typedef struct
{
    int job_id;
    int duration;
} Job;

void scheduler(Job jobs[], int count)
{
    
}

int main()
{
    Job jobs[JOB_COUNT] = {
        {1, DURATION},
        {2, DURATION},
        {3, DURATION}};

    scheduler(jobs, JOB_COUNT);
    return 0;
}