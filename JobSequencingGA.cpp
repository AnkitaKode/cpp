#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job
{
    int id;
    int deadline;
    int profit;
};

bool compareJobs(Job a, Job b)
{
    return a.profit > b.profit;
}

void jobSequencing(vector<Job> &jobs, int n)
{
    sort(jobs.begin(), jobs.end(), compareJobs);

    vector<int> result(n, -1);

    int totalProfit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = jobs[i].deadline - 1; j >= 0; j--)
        {
            if (result[j] == -1)
            { // If the slot is free
                result[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Job sequence is: ";
    for (int i = 0; i < n; i++)
    {
        if (result[i] != -1)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;

    cout << "Total profit: " << totalProfit << endl;
}

int main()
{
    int n;
    cout << "Enter the number of jobs: ";
    cin >> n;

    vector<Job> jobs(n);
    cout << "Enter job details (id, deadline, profit):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    jobSequencing(jobs, n);

    return 0;
}
