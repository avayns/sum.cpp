#include <iostream>

using namespace std;

int main() {
long long sum = 0;
long long number;

// Читаем числа из потока, пока они поступают
while (cin >> number) {
    sum += number;
}

// Выводим результат
cout << "Сумма элементов: " << sum << endl;

return 0;
}
