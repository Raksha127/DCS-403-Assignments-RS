// // #include <iostream>
// // using namespace std;

// // #define SIZE 5
// // int queueArr[SIZE];
// // int front = -1, rear = -1;

// // int main() {

// //     // Enqueue
// //     if (rear == SIZE - 1) {
// //         cout << "Queue Full\n";
// //     } else {
// //         front = 0;
// //         rear = 0;
// //         queueArr[rear] = 10;
// //         cout << "10 inserted\n";
// //     }

// //     // Display
// //     cout << "Queue elements: ";
// //     for (int i = front; i <= rear; i++) {
// //         cout << queueArr[i] << " ";
// //     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int queueArr[SIZE];
// int front = -1, rear = -1;

// void enqueue(int value) {
//     if (rear == SIZE - 1) {
//         cout << "Queue is Full\n";
//         return;
//     }

//     if (front == -1)
//         front = 0;

//     rear++;
//     queueArr[rear] = value;
// }

// int main() {
//     enqueue(5);
//     enqueue(10);

//     for (int i = front; i <= rear; i++)
//         cout << queueArr[i] << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int queueArr[SIZE] = {10, 20, 30};
// int front = 0, rear = 2;

// void dequeue() {
//     if (front == -1 || front > rear) {
//         cout << "Queue Empty\n";
//         return;
//     }

//     cout << queueArr[front] << " removed\n";
//     front++;
// }

// int main() {
//     dequeue();

//     for (int i = front; i <= rear; i++)
//         cout << queueArr[i] << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int queueArr[3] = {100, 200, 300};
//     int front = 0;

//     cout << "Front element: " << queueArr[front];

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int queueArr[4] = {1, 2, 3, 4};
//     int front = 0, rear = 3;

//     cout << "Queue elements: ";
//     for (int i = front; i <= rear; i++) {
//         cout << queueArr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5

// int main() {
//     int front = -1, rear = 4;

//     if (front == -1)
//         cout << "Queue is Empty\n";

//     if (rear == SIZE - 1)
//         cout << "Queue is Full\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int arr[SIZE];
// int front = -1, rear = -1;

// int main() {

//     front = 0;
//     rear = 0;
//     arr[rear] = 10;

//     cout << "10 inserted in circular queue\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int arr[SIZE];
// int front = -1, rear = -1;

// void enqueue(int value) {
//     if ((rear + 1) % SIZE == front) {
//         cout << "Queue Full\n";
//         return;
//     }

//     if (front == -1)
//         front = 0;

//     rear = (rear + 1) % SIZE;
//     arr[rear] = value;
// }

// int main() {
//     enqueue(10);
//     enqueue(20);

//     cout << arr[front] << " " << arr[rear];

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5
// int arr[SIZE] = {5, 10, 15};
// int front = 0, rear = 2;

// void dequeue() {
//     if (front == -1) {
//         cout << "Queue Empty\n";
//         return;
//     }

//     cout << arr[front] << " removed\n";

//     if (front == rear)
//         front = rear = -1;
//     else
//         front = (front + 1) % SIZE;
// }

// int main() {
//     dequeue();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3] = {7, 8, 9};
//     int front = 0;

//     cout << "Front element: " << arr[front];

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SIZE 5

// int main() {
//     int arr[SIZE] = {10, 20, 30};
//     int front = 0, rear = 2;

//     cout << "Circular Queue elements: ";

//     int i = front;
//     while (true) {
//         cout << arr[i] << " ";
//         if (i == rear)
//             break;
//         i = (i + 1) % SIZE;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int front = 0, rear = 4;

    if ((rear + 1) % SIZE == front)
        cout << "Queue is Full\n";

    if (front == -1)
        cout << "Queue is Empty\n";

    return 0;
}