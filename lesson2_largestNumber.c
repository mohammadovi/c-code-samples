#include <stdio.h>

// Function for receiving an integer input from the user with a prompt.
// تابعی برای دریافت یک ورودی صحیح از کاربر با یک پیام در نظر گرفته شده است.
int get_int(const char* prompt) {
    int number;

    printf("%s", prompt);
    scanf("%d", &number);

    return number;
}

int main() {
    // Receive three integer inputs from the user.
    // دریافت سه ورودی عدد صحیح از کاربر.
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    int z = get_int("What's z? ");

    // Compare the values of x, y, and z to find the largest number.
    // مقایسه مقادیر x، y و z برای یافتن بزرگترین عدد.
    if (x > y && x > z) {
        printf("x is the largest number.\n");
    } else if (y > x && y > z) {
        printf("y is the largest number.\n");
    } else if (z > x && z > y) {
        printf("z is the largest number.\n");
    } else {
        printf("There is no distinct largest number.\n");
    }

    return 0;
}
