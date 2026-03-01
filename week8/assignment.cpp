// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* recursiveSearch(Node* root, int key) {
//     if (root == nullptr || root->data == key)
//         return root;
//     if (key < root->data)
//         return recursiveSearch(root->left, key);
//     else
//         return recursiveSearch(root->right, key);
// }

// int main() {
//     Node* root = new Node{50, nullptr, nullptr};
//     root->left = new Node{30, nullptr, nullptr};
//     root->right = new Node{70, nullptr, nullptr};

//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;

//     Node* result = recursiveSearch(root, key);
//     if (result)
//         cout << "Key found: " << result->data << endl;
//     else
//         cout << "Key not found.\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* iterativeSearch(Node* root, int key) {
//     while (root != nullptr) {
//         if (key == root->data)
//             return root;
//         else if (key < root->data)
//             root = root->left;
//         else
//             root = root->right;
//     }
//     return nullptr;
// }

// int main() {
//     Node* root = new Node{50, nullptr, nullptr};
//     root->left = new Node{30, nullptr, nullptr};
//     root->right = new Node{70, nullptr, nullptr};

//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;

//     Node* result = iterativeSearch(root, key);
//     if (result)
//         cout << "Key found: " << result->data << endl;
//     else
//         cout << "Key not found.\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* insertRecursive(Node* root, int key) {
//     if (root == nullptr)
//         return new Node{key, nullptr, nullptr};
//     if (key < root->data)
//         root->left = insertRecursive(root->left, key);
//     else if (key > root->data)
//         root->right = insertRecursive(root->right, key);
//     return root; // ignore duplicates
// }

// void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = nullptr;
//     int n, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> val;
//         root = insertRecursive(root, val);
//     }

//     cout << "Inorder traversal: ";
//     inorder(root);
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* insertIterative(Node* root, int key) {
//     Node* newNode = new Node{key, nullptr, nullptr};
//     if (!root) return newNode;

//     Node* parent = nullptr;
//     Node* current = root;
//     while (current) {
//         parent = current;
//         if (key < current->data)
//             current = current->left;
//         else if (key > current->data)
//             current = current->right;
//         else
//             return root; // duplicate
//     }

//     if (key < parent->data)
//         parent->left = newNode;
//     else
//         parent->right = newNode;

//     return root;
// }

// void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = nullptr;
//     int n, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> val;
//         root = insertIterative(root, val);
//     }

//     cout << "Inorder traversal: ";
//     inorder(root);
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* findMinRecursive(Node* root) {
//     if (!root || !root->left) return root;
//     return findMinRecursive(root->left);
// }

// Node* findMaxRecursive(Node* root) {
//     if (!root || !root->right) return root;
//     return findMaxRecursive(root->right);
// }

// Node* findMinIterative(Node* root) {
//     while (root && root->left) root = root->left;
//     return root;
// }

// Node* findMaxIterative(Node* root) {
//     while (root && root->right) root = root->right;
//     return root;
// }

// int main() {
//     Node* root = new Node{50, nullptr, nullptr};
//     root->left = new Node{30, nullptr, nullptr};
//     root->right = new Node{70, nullptr, nullptr};
//     root->left->left = new Node{20, nullptr, nullptr};
//     root->right->right = new Node{80, nullptr, nullptr};

//     cout << "Min (recursive): " << findMinRecursive(root)->data << endl;
//     cout << "Max (recursive): " << findMaxRecursive(root)->data << endl;
//     cout << "Min (iterative): " << findMinIterative(root)->data << endl;
//     cout << "Max (iterative): " << findMaxIterative(root)->data << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* findMin(Node* root) {
//     while (root && root->left) root = root->left;
//     return root;
// }

// Node* deleteNode(Node* root, int key) {
//     if (!root) return nullptr;

//     if (key < root->data)
//         root->left = deleteNode(root->left, key);
//     else if (key > root->data)
//         root->right = deleteNode(root->right, key);
//     else {
//         if (!root->left) {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         } else if (!root->right) {
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         Node* temp = findMin(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data);
//     }
//     return root;
// }

// void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = nullptr;
//     root = new Node{50, nullptr, nullptr};
//     root->left = new Node{30, nullptr, nullptr};
//     root->right = new Node{70, nullptr, nullptr};

//     int key;
//     cout << "Enter key to delete: ";
//     cin >> key;

//     root = deleteNode(root, key);
//     cout << "Inorder after deletion: ";
//     inorder(root);
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* insertRecursive(Node* root, int key) {
//     if (!root) return new Node{key, nullptr, nullptr};
//     if (key < root->data) root->left = insertRecursive(root->left, key);
//     else if (key > root->data) root->right = insertRecursive(root->right, key);
//     return root;
// }

// void inorder(Node* root) {
//     if (!root) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = nullptr;
//     int n, val;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> val;
//         root = insertRecursive(root, val);
//     }

//     cout << "BST in inorder: ";
//     inorder(root);
//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertRecursive(Node* root, int key) {
    if (!root) return new Node{key, nullptr, nullptr};
    if (key < root->data) root->left = insertRecursive(root->left, key);
    else if (key > root->data) root->right = insertRecursive(root->right, key);
    return root;
}

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) { Node* temp = root->right; delete root; return temp; }
        else if (!root->right) { Node* temp = root->left; delete root; return temp; }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* recursiveSearch(Node* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data) return recursiveSearch(root->left, key);
    return recursiveSearch(root->right, key);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, val, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertRecursive(root, val);
    }

    cout << "BST inorder before deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter key to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "BST inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter key to search: ";
    cin >> searchKey;
    Node* found = recursiveSearch(root, searchKey);
    if (found) cout << "Key exists in BST.\n";
    else cout << "Key not found in BST.\n";

    return 0;
}