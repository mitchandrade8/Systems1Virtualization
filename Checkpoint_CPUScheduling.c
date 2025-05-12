
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
    for (int i = 0; i < count; i++) {
        printf("Executing Job %d for %d seconds...", jobs[i].job_id, jobs[i].duration);
        sleep(jobs[i].duration);
        printf("Job %d completed!\n", jobs[i].job_id);
    }
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

/*
- The `Job` structure represents each job with a unique `job_id` and its `duration`.
- The `scheduler()` function is designed to handle our initial assumptions. It takes in an array of jobs and the total number of jobs.
- Inside the scheduler, we loop over each job:
- Print the starting message for the job.
- Use `sleep()` to simulate the duration the job runs for.
- Print the completion message for the job.

This ensures each job is executed in the order they're present in the array, and they run to completion based on our assumptions.
*/