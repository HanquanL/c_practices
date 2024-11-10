#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

int main()
{
    char quote[] = "Cookies make you fat";
    char * quote_ptr = quote;
    fortune_cookie(quote);
    printf("The quote string is stored at: %p\n", quote);
    printf("The size of quote string is %i\n", sizeof(quote));
    printf("quote pointer is %p\n", &quote_ptr);
    return 0;
}