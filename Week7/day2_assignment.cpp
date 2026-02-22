// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     int arr[] = {10, 20, 30, 40};
//     int n = 4;

//     Node* head = NULL;
//     Node* temp = NULL;

//     for (int i = 0; i < n; i++) {
//         Node* newNode = new Node();
//         newNode->data = arr[i];
//         newNode->next = NULL;

//         if (head == NULL) {
//             head = newNode;
//             temp = newNode;
//         } else {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     // Traversal
//     Node* current = head;
//     while (current != NULL) {
//         cout << current->data << " ";
//         current = current->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     int X = 20;
//     Node* temp = head;
//     int position = 1;
//     bool found = false;

//     while (temp != NULL) {
//         if (temp->data == X) {
//             cout << "Found at position " << position;
//             found = true;
//             break;
//         }
//         temp = temp->next;
//         position++;
//     }

//     if (!found)
//         cout << "Element not found";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};

//     int value = 30;

//     Node* newNode = new Node{value, NULL};

//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     temp->next = newNode;

//     // Print updated list
//     temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{20, NULL};
//     head->next = new Node{30, NULL};

//     int value = 10;

//     Node* newNode = new Node{value, head};
//     head = newNode;

//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     int X = 20;

//     Node* temp = head;
//     Node* prev = NULL;

//     while (temp != NULL && temp->data != X) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         cout << "Element not found";
//     } else {
//         if (prev == NULL)
//             head = temp->next;
//         else
//             prev->next = temp->next;

//         delete temp;
//     }

//     temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     int position = 2;

//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     } else {
//         Node* temp = head;
//         for (int i = 1; i < position - 1; i++)
//             temp = temp->next;

//         Node* nodeToDelete = temp->next;
//         temp->next = nodeToDelete->next;
//         delete nodeToDelete;
//     }

//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     Node* prev = NULL;
//     Node* current = head;
//     Node* next = NULL;

//     while (current != NULL) {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }

//     head = prev;

//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     int count = 0;
//     Node* temp = head;

//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }

//     cout << "Number of nodes: " << count;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};

//     int X = 20, Y = 25;

//     Node* temp = head;

//     while (temp != NULL && temp->data != X)
//         temp = temp->next;

//     if (temp != NULL) {
//         Node* newNode = new Node{Y, temp->next};
//         temp->next = newNode;
//     }

//     temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};

    printReverse(head);

    return 0;
}