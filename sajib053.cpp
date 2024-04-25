#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int cpuTime;
    int waitingTime;
    int turnaroundTime;
};

bool sortByArrivalTime(const Process &a, const Process &b) {
    return a.arrivalTime < b.arrivalTime;
}

bool sortByCpuTime(const Process &a, const Process &b) {
    return a.cpuTime < b.cpuTime;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter the CPU times: ";
    for (int i = 0; i < n; ++i) {
        cin >> processes[i].cpuTime;
        processes[i].id = i + 1;
    }

    cout << "Enter the arrival times: ";
    for (int i = 0; i < n; ++i) {
        cin >> processes[i].arrivalTime;
    }

    sort(processes.begin(), processes.end(), sortByArrivalTime);

    int timer = 0;
    for (int i = 0; i < n; ++i) {
        timer += processes[i].cpuTime;

        processes[i].waitingTime = timer - processes[i].arrivalTime - processes[i].cpuTime;

        processes[i].turnaroundTime = timer - processes[i].arrivalTime;

        sort(processes.begin() + i + 1, processes.end(), sortByCpuTime);
    }

    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;

    cout << "\nProcess details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << processes[i].id << " : Waiting Time : " << processes[i].waitingTime
             << " Turnaround Time : " << processes[i].turnaroundTime << endl;
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }

    double avgWaitingTime = totalWaitingTime / n;
    double avgTurnaroundTime = totalTurnaroundTime / n;
          cout<<totalTurnaroundTime <<" "<<n<<endl;
    cout << "Average Waiting time : " << avgWaitingTime << endl;
    cout << "Average Turnaround time : " << avgTurnaroundTime << endl;

    return 0;
}

