#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cin >> num;

    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cin >> num;

    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    cout << "Reversed number = " << rev;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    do {
        count++;
        num /= 10;
    } while (num != 0);

    cout << "Number of digits = " << count;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Table of " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}


