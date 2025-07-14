// hello.c
#include "1.h"

// Minimal write syscall for output (Linux x86_64)
long sys_write(int fd, const void *buf, unsigned long count) {
    long ret;
    asm volatile (
        "mov $1, %%rax\n"
        "mov %1, %%rdi\n"
        "mov %2, %%rsi\n"
        "mov %3, %%rdx\n"
        "syscall\n"
        "mov %%rax, %0\n"
        : "=r"(ret)
        : "r"((long)fd), "r"(buf), "r"(count)
        : "rax", "rdi", "rsi", "rdx"
    );
    return ret;
}

// Print string using sys_write
void print_str(const char *s) {
    unsigned int len = 0;
    while (s[len]) len++;
    sys_write(1, s, len);
}

// Print integer number as decimal string
void print_num(int n) {
    char buf[12];
    int i = 10;
    int neg = 0;
    buf[11] = 0;
    if (n == 0) {
        sys_write(1, "0", 1);
        return;
    }
    if (n < 0) {
        neg = 1;
        n = -n;
    }
    while (n && i) {
        buf[i--] = '0' + (n % 10);
        n /= 10;
    }
    if (neg) buf[i--] = '-';
    print_str(buf + i + 1);
}

int main() {
    struct example e;

    print_str("Hello World!\n");

    print_str("N0 is ");
    if (N0 == 0) print_str("NULL\n");
    else print_str("not NULL\n");

    print_str("Pointer difference pd_t(&e.b, &e.a): ");
    print_num(pd_t(&e.b, &e.a));
    print_str("\n");

    print_str("Size s_t of struct example: ");
    print_num(s_t(&e, sizeof(e)));
    print_str("\n");

    print_str("Wide char wc_t returns: ");
    print_num(wc_t());
    print_str("\n");

    print_str("Offset of 'a': ");
    print_num(o_a());
    print_str("\n");

    print_str("Offset of 'b': ");
    print_num(o_b());
    print_str("\n");

    print_str("Offset of 'c': ");
    print_num(o_c());
    print_str("\n");

    return 0;
}

