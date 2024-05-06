#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of processes: ";
    cin >> n;
    int ar[n], br[n], c[n];
    cout << "Enter the CPU time: ";
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        br[i] = ar[i];
        sum += ar[i];
    }
    int systemTime = 0;
    while (sum > 0) {
        for (int i = 0; i < n; i++) {
            if (br[i] == 0) {
                continue;
            }
            if (br[i] <= 3) {
                systemTime += br[i];
                c[i] = systemTime;
                br[i] = 0;
                sum -= ar[i];
            } else {
                systemTime += 3;
                br[i] -= 3;
                sum -= 3;
            }
        }
    }
    float total_waiting=0,tt=0;

    for (int i = 0; i < n; i++) {

        cout <<"process "<<i+1<<": Waiting Time : "<<c[i]-ar[i]<< " Turnaround Time: "<<c[i]<<endl;
        total_waiting+=(c[i]-ar[i]);
        tt+=c[i];
    }
    float a=total_waiting/n;
    float b=tt/n;


   cout<<"Average waiting time : "<<a<<endl;
   cout<<"Average Turnaround time : "<<b<<endl;    return 0;
}
