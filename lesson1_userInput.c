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


    // Get multiple inputs with a single line of code.
    // دریافت ورودی‌های متعدد با یک خط کد.
    int x = get_int("What's x? ");
    printf("You entered: %d\n", x);

    int y = get_int("What's y? ");
    printf("You entered: %d\n", x);

    int z = get_int("What's z? ");
    printf("You entered: %d\n", x);

    printf("You entered: %d-%d-%d\n", x,y,z);
    return 0;
}
