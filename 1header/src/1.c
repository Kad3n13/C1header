#include "1.h"

/* Null pointer constant */
void *N0 = (void *)0;

/* Signed integral type result of subtracting two pointers */
int pd_t(void *a, void *b) {
    return (int)((char *)a - (char *)b);
}

/* Unsigned integral type for size */
unsigned int s_t(void *ptr, unsigned int size) {
    (void)ptr; // unused param
    return size;
}

/* Wide char integral example */
unsigned int wc_t(void) {
    return (unsigned int)L'A';
}

/* Offset functions for struct example members */
unsigned int o_a(void) {
    struct example e;
    return (unsigned int)((char *)&e.a - (char *)&e);
}

unsigned int o_b(void) {
    struct example e;
    return (unsigned int)((char *)&e.b - (char *)&e);
}

unsigned int o_c(void) {
    struct example e;
    return (unsigned int)((char *)&e.c - (char *)&e);
}

