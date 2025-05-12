
#include <stdio.h>
#include <unistd.h> // for sleep()

#define JOB_COUNT 3

// COMPLETE THE CODE HERE
typedef struct
{
    int job_id;
    int duration;
} Job;

void fifo_scheduler(Job jobs[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Executing Job %d for %d seconds...\n", jobs[i].job_id, jobs[i].duration);
        sleep(jobs[i].duration);
        printf("Job %d completed!\n", jobs[i].job_id);
    }
}

int main()
{
    Job jobs[JOB_COUNT] = {
        {1, 4},
        {2, 2},
        {3, 6}};

    fifo_scheduler(jobs, JOB_COUNT);
    return 0;
}