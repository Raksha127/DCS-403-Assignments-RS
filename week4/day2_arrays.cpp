// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[3][3];

//     cout << "Enter 9 elements of 3x3 matrix: ";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[2][3], sum = 0;

//     cout << "Enter elements of 2x3 array: ";
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> arr[i][j];

//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             sum += arr[i][j];

//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3];
    
//     cout << "Enter elements of 3x3 matrix: ";
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> arr[i][j];

//     cout << "Row sums:\n";
//     for (int i = 0; i < 3; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < 3; j++)
//             rowSum += arr[i][j];
//         cout << rowSum << " ";
//     }
//     cout << "\nColumn sums:\n";
//     for (int j = 0; j < 3; j++) {
//         int colSum = 0;
//         for (int i = 0; i < 3; i++)
//             colSum += arr[i][j];
//         cout << colSum << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3];

//     cout << "Enter 3x3 matrix elements: ";
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> arr[i][j];

//     cout << "Largest in each row:\n";
//     for (int i = 0; i < 3; i++) {
//         int maxVal = arr[i][0];
//         for (int j = 1; j < 3; j++)
//             if (arr[i][j] > maxVal)
//                 maxVal = arr[i][j];
//         cout << maxVal << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3], trans[3][3];

//     cout << "Enter 3x3 matrix: ";
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> arr[i][j];

//     // Transpose
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             trans[j][i] = arr[i][j];

//     cout << "Transpose:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++)
//             cout << trans[i][j] << " ";
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int A[2][2], B[2][2], C[2][2];

//     cout << "Enter elements of matrix A: ";
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> A[i][j];

//     cout << "Enter elements of matrix B: ";
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> B[i][j];

//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             C[i][j] = A[i][j] + B[i][j];

//     cout << "Sum matrix:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++)
//             cout << C[i][j] << " ";
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int A[2][3], B[3][2], C[2][2] = {0};

//     cout << "Enter elements of 2x3 matrix A: ";
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> A[i][j];

//     cout << "Enter elements of 3x2 matrix B: ";
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> B[i][j];

//     // Multiply
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             for (int k = 0; k < 3; k++)
//                 C[i][j] += A[i][k] * B[k][j];

//     cout << "Result of multiplication:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++)
//             cout << C[i][j] << " ";
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printMatrix(int arr[][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
// }

// int main() {
//     int matrix[3][3];

//     cout << "Enter 3x3 matrix: ";
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> matrix[i][j];

//     cout << "Matrix is:\n";
//     printMatrix(matrix);

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool symmetric = true;

    cout << "Enter 3x3 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 3 && symmetric; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] != arr[j][i])
                symmetric = false;

    if (symmetric)
        cout << "Matrix is symmetric\n";
    else
        cout << "Matrix is not symmetric\n";

    return 0;
}

