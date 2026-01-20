# Libft - Custom C Standard Library

> A reimplementation of essential C standard library functions from scratch, built as part of the 42 programming curriculum.

## 📋 Project Overview

This project is a **custom C library** that recreates commonly used functions from the standard C library (`libc`). It serves as a foundation for future C projects by providing reliable, self-implemented utility functions for string manipulation, memory management, and data structures.

**Key Achievement:** Implemented 40+ functions without using the standard library, demonstrating low-level understanding of C programming fundamentals.

---

## 🛠️ Implemented Functions

### String Manipulation
- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`
- `ft_strlcpy`, `ft_strlcat`, `ft_strjoin`, `ft_split`
- `ft_substr`, `ft_strtrim`, `ft_strdup`, `ft_strnstr`

### Memory Operations
- `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_bzero`, `ft_calloc`

### Character Checks & Conversions
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

### Utility Functions
- `ft_atoi` - ASCII to integer conversion
- `ft_itoa` - Integer to ASCII conversion
- `ft_strmapi`, `ft_striteri` - String transformation with custom functions
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` - File descriptor output

### Linked List Operations
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

---

## 🚀 How to Use

### Compilation

```bash
# Clone the repository
git clone https://github.com/aplotnyk/aplotnyk_libft.git
cd aplotnyk_libft

# Compile the library
make

# This creates libft.a (static library file)
```

### Integration into Your Project

```c
// Include the header
#include "libft.h"

// Example usage
int main(void)
{
    char *str = ft_strdup("Hello, World!");
    int len = ft_strlen(str);
    
    ft_putstr_fd(str, 1);
    ft_putchar_fd('\n', 1);
    
    free(str);
    return (0);
}
```

### Compile with your project:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

---

## 🎯 Key Learning Outcomes

This project demonstrates:

1. **Memory Management** - Manual allocation/deallocation without leaks
2. **Pointer Manipulation** - Deep understanding of pointers and memory addresses
3. **Algorithm Implementation** - String parsing, searching, and manipulation from scratch
4. **Data Structures** - Singly linked list operations
5. **Code Organization** - Modular library design with header files
6. **Makefile Automation** - Build system configuration

---

## 📂 Project Structure

```
libft/
├── Makefile              # Build configuration
├── libft.h               # Header file (function prototypes)
├── ft_*.c                # Implementation files (~45 functions)
└── libft.a               # Compiled static library (after make)
```

---

## 🔧 Makefile Commands

```bash
make        # Compile the library
make bonus  # Compile with bonus functions (linked lists)
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

---

## 📝 Technical Details

- **Language:** C
- **Compilation Flags:** `-Wall -Wextra -Werror` (strict error checking)
- **Library Type:** Static library (`.a`)
- **Coding Standard:** 42 Norm (strict formatting and structure rules)
- **Memory Safety:** No memory leaks, proper error handling
