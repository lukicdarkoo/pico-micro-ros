#include <stdio.h>
#include <uxr/client/profile/transport/serial/serial_transport_external.h>
#include <uxr/client/profile/transport/serial/serial_transport_platform.h>
#include "pico/stdlib.h"

void usleep(uint64_t us)
{
    sleep_us(us);
}

int clock_gettime(clockid_t unused, struct timespec *tp)
{
    uint64_t m = time_us_64();
    tp->tv_sec = m / 1000000;
    tp->tv_nsec = (m % 1000000) * 1000;
    return 0;
}

bool uxr_init_serial_platform(struct uxrSerialPlatform *platform, int fd, uint8_t remote_addr, uint8_t local_addr)
{
    stdio_init_all();
    return true;
}

bool uxr_close_serial_platform(struct uxrSerialPlatform *platform)
{
    return true;
}

size_t uxr_write_serial_data_platform(uxrSerialPlatform *platform, uint8_t *buf, size_t len, uint8_t *errcode)
{
    for (size_t i = 0; i < len; i++)
    {
        if (buf[i] != putchar(buf[i]))
        {
            *errcode = 1;
            return i;
        }
    }
    return len;
}

size_t uxr_read_serial_data_platform(uxrSerialPlatform *platform, uint8_t *buf, size_t len, int timeout_ms, uint8_t *errcode)
{
    uint64_t start_time_us = time_us_64();
    for (size_t i = 0; i < len; i++)
    {
        int64_t elapsed_time_us = timeout_ms * 1000 - (time_us_64() - start_time_us);
        if (elapsed_time_us < 0)
        {
            *errcode = 1;
            return i;
        }

        int character = getchar_timeout_us(elapsed_time_us);
        if (character == PICO_ERROR_TIMEOUT)
        {
            *errcode = 1;
            return i;
        }
        buf[i] = character;
    }
    return len;
}
