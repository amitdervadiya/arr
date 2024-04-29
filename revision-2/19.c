#include <stdio.h>

float square_root(float num) {
    float guess = num / 2.0;
    float prev_guess;
    

    do {
        prev_guess = guess;
        guess = (guess + num / guess) / 2.0;
    } while (prev_guess - guess > 0.0001 || guess - prev_guess > 0.0001);
    
    return guess;
}

int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    
    float result = square_root(number);
    printf("Square root of %.2f is %.5f\n", number, result);
    
    return 0;
}

