#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    
    cout << "Vvedit rozmir masivu A (N <= 100): ";
    cin >> N;

    cout << "Vvedit rozmir masivu B (M <= 60): ";
    cin >> M;

    vector<double> A(N);
    vector<double> B(M);

    
    cout << "Vvedit elementi masivu A:\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

   
    cout << "Vvedit elementi masivu B:\n";
    for (int i = 0; i < M; i++) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
    }

    
    double sum_A = 0.0;
    for (int i = 0; i < N; i++) {
        sum_A += A[i];
    }
    double avg_A = sum_A / N;

    
    double sum_B = 0.0;
    for (int i = 0; i < M; i++) {
        sum_B += B[i];
    }
    double avg_B = sum_B / M;

    
    for (int i = 0; i < N; i++) {
        if (A[i] >= 0 && A[i] <= 1) {
            A[i] = avg_A;
        }
    }

    
    for (int i = 0; i < M; i++) {
        if (B[i] >= 0 && B[i] <= 1) {
            B[i] = avg_B;
        }
    }

    
    cout << "\nResult:\n";
    cout << "Serednie arafmetichne masivu A: " << avg_A << endl;
    cout << "Serednie arafmetichne masivu B: " << avg_B << endl;

    cout << "\nMasive A pislia zminu:\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    cout << "\nMasive B pislia zminu:\n";
    for (int i = 0; i < M; i++) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }

    return 0;
}
