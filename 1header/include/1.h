/* 1.h - pure C from scratch, no header guards */

/* Null pointer constant */
extern void *N0;

/* Signed integral type result of subtracting two pointers */
int pd_t(void *a, void *b);

/* Unsigned integral type for size */
unsigned int s_t(void *ptr, unsigned int size);

/* Wide char integral type example */
unsigned int wc_t(void);

/* Example struct */
struct example {
    char a;
    int b;
    double c;
};

/* Offset functions */
unsigned int o_a(void);
unsigned int o_b(void);
unsigned int o_c(void);

