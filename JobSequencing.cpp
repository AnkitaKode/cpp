// Given a list of jobs, each with a deadline and a profit, the goal is to maximize the total profit by scheduling jobs so that each job is completed by its deadline. Assume only one job can be completed at each time slot before the maximum deadline. How does the job_sequencing_with_deadlines function in the provided code approach this problem, and why does it use the qsort function?

#include <stdio.h>
#include <stdlib.h>

struct Job
{
    int deadline;
    int profit;
};

int compare_jobs(const void *a, const void *b)
{
    return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}

void job_sequencing_with_deadlines(struct Job *jobs, int n)
{
    // Sort jobs in decreasing order of profit
    qsort(jobs, n, sizeof(struct Job), compare_jobs);

    // Find maximum deadline
    int max_deadline = 0;
    for (int i = 0; i < n; i++)
    {
        if (jobs[i].deadline > max_deadline)
            max_deadline = jobs[i].deadline;
    }

    // Create schedule array to track free time slots
    int *schedule = (int *)calloc(max_deadline, sizeof(int));

    int total_profit = 0;

    // Iterate through each job
    for (int i = 0; i < n; i++)
    {
        int deadline = jobs[i].deadline;

        // Find a free slot for this job (starting from its deadline)
        while (deadline > 0)
        {
            if (schedule[deadline - 1] == 0)
            {
                schedule[deadline - 1] = 1;
                total_profit += jobs[i].profit;
                break;
            }
            deadline--;
        }
    }

    printf("Total profit: %d\n", total_profit);

    free(schedule);
    
}

int main()
{
    int n;

    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    struct Job *jobs = (struct Job *)malloc(n * sizeof(struct Job));

    printf("Enter job details (deadline profit) for each job:\n");
    for (int i = 0; i < n; i++)
        scanf("%d %d", &jobs[i].deadline, &jobs[i].profit);

    job_sequencing_with_deadlines(jobs, n);

    free(jobs);

    return 0;
}