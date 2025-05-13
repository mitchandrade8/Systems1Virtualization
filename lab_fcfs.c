#include <stdio.h>

int main() {
    int n; // number of processes
    int duration[100], waiting_time[100], turnaround_time[100];
    int total_waiting_time = 0;    // Initialize total_waiting_time
    int total_turnaround_time = 0; // Initialize total_turnaround_time
    

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter duration for process %d: ", i + 1);
        scanf("%d", &duration[i]);
    }

    waiting_time[0] = 0;

    for (int i = 1; i < n; i++)
    {
        waiting_time[i] = duration[i - 1] + waiting_time[i - 1];
        turnaround_time[i] = duration[i] + waiting_time[i];
    }

    // Calculate waiting time and turnaround time
    waiting_time[0] = 0;              // Waiting time for the first process is 0
    turnaround_time[0] = duration[0]; // Turnaround time for the first process is its duration

    for (int i = 0; i < n; i++)
    {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
    }

    printf("Process\tDuration\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, duration[i], waiting_time[i], turnaround_time[i]);
    }

    return 0;
}
