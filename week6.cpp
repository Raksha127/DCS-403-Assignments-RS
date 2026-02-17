// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int size) {

//     for (int i = 0; i < size - 1; i++) {

//         int smallestIndex = i;

//         for (int j = i + 1; j < size; j++) {
//             if (arr[j] < arr[smallestIndex]) {
//                 smallestIndex = j;   
//             }
//         }

//         if (smallestIndex != i) {
//             int swapTemp = arr[i];
//             arr[i] = arr[smallestIndex];
//             arr[smallestIndex] = swapTemp;
//         }
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {64, 25, 12, 22, 11};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     selectionSort(numbers, length);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int size) {

//     for (int i = 0; i < size - 1; i++) {

//         bool didSwap = false;  

//         for (int j = 0; j < size - i - 1; j++) {

//             if (arr[j] > arr[j + 1]) {

//                 int swapTemp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = swapTemp;

//                 didSwap = true;  
//             }
//         }

//         if (!didSwap) {
//             break;
//         }
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {64, 34, 25, 12, 22, 11, 90};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     bubbleSort(numbers, length);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int size) {

//     for (int i = 1; i < size; i++) {

//         int currentValue = arr[i];   
//         int position = i - 1;

//         while (position >= 0 && arr[position] > currentValue) {
//             arr[position + 1] = arr[position];
//             position--;
//         }

//         arr[position + 1] = currentValue;
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {12, 11, 13, 5, 6};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     insertionSort(numbers, length);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void mergeParts(int arr[], int start, int mid, int end) {

//     int leftSize = mid - start + 1;
//     int rightSize = end - mid;

//     int* leftArray = new int[leftSize];
//     int* rightArray = new int[rightSize];

//     for (int i = 0; i < leftSize; i++)
//         leftArray[i] = arr[start + i];

//     for (int j = 0; j < rightSize; j++)
//         rightArray[j] = arr[mid + 1 + j];

//     int i = 0;          
//     int j = 0;         
//     int current = start; 

//     while (i < leftSize && j < rightSize) {
//         if (leftArray[i] <= rightArray[j]) {
//             arr[current] = leftArray[i];
//             i++;
//         } else {
//             arr[current] = rightArray[j];
//             j++;
//         }
//         current++;
//     }

//     while (i < leftSize) {
//         arr[current] = leftArray[i];
//         i++;
//         current++;
//     }

//     while (j < rightSize) {
//         arr[current] = rightArray[j];
//         j++;
//         current++;
//     }

//     delete[] leftArray;
//     delete[] rightArray;
// }

// void mergeSort(int arr[], int start, int end) {

//     if (start < end) {

//         int middle = start + (end - start) / 2;

//         mergeSort(arr, start, middle);

//         mergeSort(arr, middle + 1, end);

//         mergeParts(arr, start, middle, end);
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {38, 27, 43, 3, 9, 82, 10};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     mergeSort(numbers, 0, length - 1);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void mergeSections(int arr[], int start, int middle, int end) {

//     int leftCount = middle - start + 1;
//     int rightCount = end - middle;

//     int* leftPart = new int[leftCount];
//     int* rightPart = new int[rightCount];

//     for (int i = 0; i < leftCount; i++)
//         leftPart[i] = arr[start + i];

//     for (int j = 0; j < rightCount; j++)
//         rightPart[j] = arr[middle + 1 + j];

//     int i = 0;          
//     int j = 0;          
//     int index = start;  

//     while (i < leftCount && j < rightCount) {
//         if (leftPart[i] <= rightPart[j]) {
//             arr[index] = leftPart[i];
//             i++;
//         } else {
//             arr[index] = rightPart[j];
//             j++;
//         }
//         index++;
//     }

//     while (i < leftCount) {
//         arr[index] = leftPart[i];
//         i++;
//         index++;
//     }

//     while (j < rightCount) {
//         arr[index] = rightPart[j];
//         j++;
//         index++;
//     }

//     delete[] leftPart;
//     delete[] rightPart;
// }

// void mergeSort(int arr[], int start, int end) {

//     if (start < end) {

//         int middle = start + (end - start) / 2;

//         mergeSort(arr, start, middle);

//         mergeSort(arr, middle + 1, end);

//         mergeSections(arr, start, middle, end);
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {38, 27, 43, 3, 9, 82, 10};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     mergeSort(numbers, 0, length - 1);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int divide(int arr[], int start, int end) {

//     int pivotValue = arr[end];   
//     int smallerIndex = start - 1;

//     for (int current = start; current < end; current++) {

//         if (arr[current] <= pivotValue) {
//             smallerIndex++;

//             int swapTemp = arr[smallerIndex];
//             arr[smallerIndex] = arr[current];
//             arr[current] = swapTemp;
//         }
//     }

//     int swapTemp = arr[smallerIndex + 1];
//     arr[smallerIndex + 1] = arr[end];
//     arr[end] = swapTemp;

//     return smallerIndex + 1;  
// }

// void quickSort(int arr[], int start, int end) {

//     if (start < end) {

//         int pivotIndex = divide(arr, start, end);

//         quickSort(arr, start, pivotIndex - 1);

//         quickSort(arr, pivotIndex + 1, end);
//     }
// }

// void displayArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int numbers[] = {10, 7, 8, 9, 1, 5};
//     int length = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Before sorting: ";
//     displayArray(numbers, length);

//     quickSort(numbers, 0, length - 1);

//     cout << "After sorting: ";
//     displayArray(numbers, length);

//     return 0;
// }

#include <iostream>
using namespace std;

void adjustHeap(int arr[], int size, int rootIndex) {

    int biggest = rootIndex;          
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;

    if (leftChild < size && arr[leftChild] > arr[biggest]) {
        biggest = leftChild;
    }

    if (rightChild < size && arr[rightChild] > arr[biggest]) {
        biggest = rightChild;
    }

    if (biggest != rootIndex) {

        int swapTemp = arr[rootIndex];
        arr[rootIndex] = arr[biggest];
        arr[biggest] = swapTemp;

        adjustHeap(arr, size, biggest);
    }
}

void heapSort(int arr[], int size) {

    for (int i = size / 2 - 1; i >= 0; i--) {
        adjustHeap(arr, size, i);
    }

    for (int i = size - 1; i > 0; i--) {

        int swapTemp = arr[0];
        arr[0] = arr[i];
        arr[i] = swapTemp;

        adjustHeap(arr, i, 0);
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int numbers[] = {12, 11, 13, 5, 6, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before sorting: ";
    displayArray(numbers, length);

    heapSort(numbers, length);

    cout << "After sorting: ";
    displayArray(numbers, length);

    return 0;
}
