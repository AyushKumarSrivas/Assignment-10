Functions in C Language
1. Write a function to calculate the area of a circle. (TSRS)
2. Write a function to calculate simple interest. (TSRS)
3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
4. Write a function to print first N natural numbers (TSRN)
5. Write a function to print first N odd natural numbers. (TSRN)
6. Write a function to calculate the factorial of a number. (TSRS)
7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
9. Write a function to check whether a given number contains a given digit or not.
(TSRS)
10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)

Solution:-

1. #include <stdio.h>
#define PI 3.14159

float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is: %.2f\n", areaOfCircle(radius));
    return 0;
}

2. #include <stdio.h>

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    printf("The simple interest is: %.2f\n", simpleInterest(principal, rate, time));
    return 0;
}

3. #include <stdio.h>

int isEven(int num) {
    return num % 2 == 0 ? 1 : 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isEven(num)) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }
    return 0;
}

4. #include <stdio.h>

void printNaturalNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d natural numbers are: ", n);
    printNaturalNumbers(n);
    return 0;
}

5. #include <stdio.h>

void printOddNumbers(int n) {
    for (int i = 1; i <= n * 2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers are: ", n);
    printOddNumbers(n);
    return 0;
}

6. #include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}

7. #include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    printf("The number of combinations (nCr) is: %d\n", nCr(n, r));
    return 0;
}

8. #include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int nPr(int n, int r) {
    return factorial(n) / factorial(r);
}

int main() {
    int n, r;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    printf("The number of arrangements (nPr) is: %d\n", nPr(n, r));
    return 0;
}

9. #include <stdio.h>

int containsDigit(int number, int digit) {
    while (number > 0) {
        if (number % 10 == digit) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main() {
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    if (containsDigit(number, digit)) {
        printf("The number %d contains the digit %d.\n", number, digit);
    } else {
        printf("The number %d does not contain the digit %d.\n", number, digit);
    }
    return 0;
}

10. #include <stdio.h>

void printPrimeFactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2) {
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    printPrimeFactors(num);
    return 0;
}
