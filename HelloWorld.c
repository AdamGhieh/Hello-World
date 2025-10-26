#include <stdio.h>
#include "messageText.h"

int main(int argc, char *argv[])
{
    char* message = generateMessage();

    printf(message);
    
    return 0;
}