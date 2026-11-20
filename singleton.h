#include <stdint.h>

/* Opaque: No fields visible */
typedef struct Singleton singleton_t;

void singleton_init(void);
singleton_t *singleton_instance(void);

void singleton_set_offset(singleton_t *s, int16_t offset);
int16_t singleton_get_offset(const singleton_t *s);