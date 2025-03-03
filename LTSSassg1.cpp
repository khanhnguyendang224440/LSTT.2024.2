#include <iostream>
#include <omp.h>
#include <vector>

using namespace std;
int main() {
    int N;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / N;
    cout << "Gia tri trung binh cua mang la: " << average << endl;
    
    return 0;
}

