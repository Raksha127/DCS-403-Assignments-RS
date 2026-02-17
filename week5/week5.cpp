#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;
    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumDigits(n));
    return 0;
}

#include <stdio.h>

void printArray(int arr[], int n, int index) {
    if (index == n)
        return;
    printf("%d ", arr[index]);
    printArray(arr, n, index + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printArray(arr, n, 0);
    return 0;
}

#include <stdio.h>

int power(int a, int b, int result) {
    if (b == 0)
        return result;
    return power(a, b - 1, result * a);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b, 1));
    return 0;
}

#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}

#include <stdio.h>

int fibTail(int n, int a, int b) {
    if (n == 0)
        return a;
    return fibTail(n - 1, b, a + b);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibTail(n, 0, 1));
    return 0;
}

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    reverse(str, 0, strlen(str) - 1);
    printf("%s", str);
    return 0;
}

#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 0)
        return;

    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

  








