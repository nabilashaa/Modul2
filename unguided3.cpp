#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int choice;
    cout << "\nPilih operasi yang ingin dilakukan:" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari nilai rata-rata" << endl;
    cout << "Pilihan: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int max = arr[0];
            for (int i = 1; i < n; ++i) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << "Nilai maksimum: " << max << endl;
            break;
        }
        case 2: {
            int min = arr[0];
            for (int i = 1; i < n; ++i) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << "Nilai minimum: " << min << endl;
            break;
        }
        case 3: {
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += arr[i];
            }
            double average = static_cast<double>(sum) / n;
            cout << "Nilai rata-rata: " << average << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
