//Bai toan thap hanoi
#include <iostream>
using namespace std;

void thapHaNoi(int n, char cotGoc, char cotDich, char cotTrungGian) {
    if (n == 1) {
        cout << "Di chuyen dia 1 tu cot " << cotGoc << " den cot " << cotDich << endl;
        return;
    }
    thapHaNoi(n - 1, cotGoc, cotTrungGian, cotDich);
    cout << "Di chuyen dia " << n << " tu cot " << cotGoc << " den cot " << cotDich << endl;
    thapHaNoi(n - 1, cotTrungGian, cotDich, cotGoc);
}

int main() {
    int n; // so dia
    cout << "Nhap so dia: ";
    cin >> n;
    thapHaNoi(n, 'A', 'C', 'B'); // ABC la ten cot
    return 0;
    
}





