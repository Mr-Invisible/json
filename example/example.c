#include "../json.h"

#include <stdio.h>

jsonHandle_t handle;

int main() {
    printf("Hello World!\r\n");

    jsonInit(&handle, NULL, 0);

    return 0;
}
