
#include <stdio.h>
#include <unistd.h> // for sleep()

#define JOB_COUNT 3

// COMPLETE THE CODE HERE

int main()
{
    Job jobs[JOB_COUNT] = {
        {1, 4},
        {2, 2},
        {3, 6}};

    fifo_scheduler(jobs, JOB_COUNT);
    return 0;
}