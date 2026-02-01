// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++)
//             cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << j;
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             cout << char('A' + j) << " ";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) // spaces
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++) // stars
//             cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) // spaces
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++) // stars
//             cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++)
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++)
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of square: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

// Function to calculate nCr
int combination(int n, int r) {
    int res = 1;
    if (r > n - r)
        r = n - r;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) // spacing
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << combination(i, j) << " ";
        cout << endl;
    }

    return 0;
}







