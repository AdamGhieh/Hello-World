#include "messageText.h"
#include <time.h>

char* generateMessage()
{
    time_t now = time(NULL);
    struct tm *ptr = localtime(&now);

    return asctime(ptr);
}