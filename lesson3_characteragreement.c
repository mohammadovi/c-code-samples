#include <stdio.h>

char get_char(const char *message) {
    char c;
    
    printf("%s", message); // Print the message to prompt the user (چاپ پیام برای درخواست ورودی از کاربر)
    scanf(" %c", &c); // Read a character input from the user (خواندن یک کاراکتر از ورودی کاربر)
    
    return c; // Return the character (بازگرداندن کاراکتر)
}

int main() {
    char x = get_char("Do you agree? "); // Prompt the user to enter a character (درخواست ورودی از کاربر برای وارد کردن یک کاراکتر)
    
    if (x == 'y' || x == 'Y') {
        printf("Yes, I agree.\n"); // Print the message if the user agrees (چاپ پیام اگر کاربر موافق باشد)
    } else if (x == 'n' || x == 'N') {
        printf("No, I disagree.\n"); // Print the message if the user disagrees (چاپ پیام اگر کاربر مخالف باشد)
    } else {
        printf("Invalid input.\n"); // Print the message for invalid input (چاپ پیام برای ورودی نامعتبر)
    }
    
    return 0;
}
