# C1Header — Custom stddef.h Types in Pure C

| Custom Name | Standard Equivalent    | Description                                                              |
| ----------- | --------------------- | ------------------------------------------------------------------------ |
| pd_t        | ptrdiff_t             | Signed integral type, result of subtracting two pointers                 |
| s_t         | size_t                | Unsigned integral type, result of the sizeof keyword                     |
| wc_t        | wchar_t               | Integral type representing wide character constants                      |
| N0          | NULL                  | Null pointer constant                                                    |
| o(t, m-d)   | offsetof(type, member) | Returns offset in bytes of a struct member from the struct start         |

---

<p align="center">
  <img src="https://readme-typing-svg.demolab.com/?lines=C1Header+%7C+Custom+stddef.h+Types&font=Fira+Code&center=true&width=500&height=45&color=FFFFFF&pause=0&speed=50&size=26&vCenter=true" alt="C1Header | Custom stddef.h Types"/>
</p>

<p align="center" style="color:#999999; font-family:'Fira Code', monospace; font-size:20px;">
  Pure C | No Macros | From Scratch
</p>

---

## About

C1Header reimplements essential parts of `<stddef.h>` in **pure C without macros or external dependencies**.  
It provides fundamental types and functions to deepen understanding of pointer arithmetic, memory layout, and object sizing in C.

---

## Usage

Import the header and use the types and functions like this:

    #include "1.h"

      struct example {
      int a;
      char b;
      double c;
    };

      int main() {
      struct example e;

    pd_t diff = pd_t(&e.b, &e.a);
    s_t size = s_t(&e, sizeof(e));
    wc_t wide_char = wc_t();

    if (N0 == 0) {
        // Null pointer constant check
    }

    s_t offset_a = o_a();
    s_t offset_b = o_b();
    s_t offset_c = o_c();

    return 0;
    }


Status
<span style="color:#FF9F1C; font-weight:bold;">✔</span> Fully functional, tested on Linux x86_64
<span style="color:#FF9F1C; font-weight:bold;">✔</span> No macros, pure C implementation
<span style="color:#FF9F1C; font-weight:bold;">✔</span> Minimal dependencies (none external)

Contact
<p align="center" style="background:#000000; padding:10px; border-radius:8px;"> <a href="https://www.youtube.com/@kad3n470" target="_blank" rel="noopener noreferrer" title="YouTube" style="margin-right:20px;"> <img width="32" alt="YouTube" src="https://i.imgur.com/qiXu7b2.png" /> </a> <a href="https://www.linkedin.com/in/kaden-oberfeld/" target="_blank" rel="noopener noreferrer" title="LinkedIn"> <img width="32" alt="LinkedIn" src="https://i.imgur.com/yRpa1dQ.png" /> </a> </p>

Made with <span style="color:#FF9F1C;">❤️</span> by Kad3n
