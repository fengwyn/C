#include "singleton.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

struct Singleton {
    int16_t offset;
    bool initialized;

    uint16_t array[UINT16_MAX];
    bool lock;
};

/* The "Static Member" we want */
static singleton_t s_instance;

void singleton_init(void) {
    s_instance.offset = 0;
    s_instance.initialized = true;
    s_instance.lock = false;
}

singleton_t *singleton_instance(void) {
    return s_instance.initialized ? &s_instance : NULL;
}
