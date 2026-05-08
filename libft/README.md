*This activity has been created as part of the 42 curriculum by eryanan.*

---

# libft

## Description

**libft** is a C static library that reimplements a selection of standard C library functions, along with additional utility functions not found in libc. The goal of this project is to gain a deep understanding of how fundamental C functions work by coding them from scratch — without using the originals — and to build a personal, reusable library that can be linked into future 42 projects.

The library is organized into four categories:

- **Libc functions** — faithful reimplementations of standard functions (`ft_memset`, `ft_strlen`, `ft_strdup`, etc.)
- **Additional string/memory utilities** — functions that extend what libc offers (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, etc.)
- **File descriptor output functions** — write characters, strings, numbers and lines to any file descriptor (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`, `ft_putendl_fd`)
- **Linked list functions** — a full set of operations on a singly linked list using the `t_list` type (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.)

### Compilation

Clone the repository and run `make` at the root:

```bash
git clone <repository-url> libft
cd libft
make all
```

The Makefile compiles with `cc -Wall -Wextra -Werror`.

### Linking to another project

Copy (or symlink) `libft.a`, `libft.h` and `ft_list.h` into your project, then compile with:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I.
```

### AI usage

GitHub Copilot was used during this project for the following purposes:

- **Debugging**: getting a second opinion when a test failed, to identify off-by-one errors or forgotten NUL-termination.
- **README generation**: this README was drafted with the assistance of GitHub Copilot based on the project's source files and the 42 Chapter 5 requirements.

All code was written and validated manually; AI was not used to generate the implementations directly.
