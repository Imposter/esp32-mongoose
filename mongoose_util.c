#include <stddef.h>
#include <esp_system.h>

int mg_ssl_if_mbed_random(void *ctx, unsigned char *buf, size_t len) 
{
    esp_fill_random(buf, len);
    return 0;
}