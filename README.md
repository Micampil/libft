# libft

![42 Badge](https://img.shields.io/badge/42-libft-blue)
![Language](https://img.shields.io/badge/language-C-orange)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

## 📚 About

This project is my implementation of the libft project at 42 School. The goal is to recreate various standard C library functions, as well as additional functions that can be useful for future projects.

## 🔍 What is libft?

Libft is the first project at 42 School where we build our own C library. Since we aren't allowed to use most standard libraries throughout our curriculum, we need to build our own functions for future projects.

## 🧩 Functions Implemented

### Memory Functions
- `ft_memset`: Fill memory with a constant byte
- `ft_bzero`: Zero a byte string
- `ft_memcpy`: Copy memory area
- `ft_memccpy`: Copy memory area until a specific character
- `ft_memmove`: Copy memory area safely (handles overlapping)
- `ft_memchr`: Locate byte in byte string
- `ft_memcmp`: Compare memory areas

### String Functions
- `ft_strlen`: Calculate length of string
- `ft_strlcpy`: Size-bounded string copying
- `ft_strlcat`: Size-bounded string concatenation
- `ft_strchr`: Locate character in string
- `ft_strrchr`: Locate character in string from the end
- `ft_strnstr`: Locate a substring in a string
- `ft_strncmp`: Compare strings
- `ft_strdup`: Create a duplicate of the string
- `ft_substr`: Extract substring from string
- `ft_strjoin`: Concatenate two strings
- `ft_strtrim`: Trim start and end of string with specified characters
- `ft_split`: Split string into array of substrings
- `ft_strmapi`: Apply function to each character of string

### Character Functions
- `ft_isalpha`: Check for alphabetic character
- `ft_isdigit`: Check for digit
- `ft_isalnum`: Check for alphanumeric character
- `ft_isascii`: Check if character fits into ASCII table
- `ft_isprint`: Check for printable character
- `ft_toupper`: Convert lowercase letter to uppercase
- `ft_tolower`: Convert uppercase letter to lowercase

### Conversion Functions
- `ft_atoi`: Convert ASCII string to integer
- `ft_itoa`: Convert integer to ASCII string

### List Functions (Bonus Part)
- `ft_lstnew`: Create new list element
- `ft_lstadd_front`: Add element at beginning of list
- `ft_lstsize`: Count elements in a list
- `ft_lstlast`: Find last element of list
- `ft_lstadd_back`: Add element at end of list
- `ft_lstdelone`: Delete element from list
- `ft_lstclear`: Delete sequence of elements from list
- `ft_lstiter`: Apply function to content of all list elements
- `ft_lstmap`: Apply function to content of all list elements into new list

## 🛠️ Installation

```bash
git clone https://github.com/Micampil/libft.git
cd libft
make
```

This will compile the `libft.a` library file.

## 📝 Usage

After compilation, include the header in your C project:

```c
#include "libft.h"
```

Then compile with the library:

```bash
gcc your_program.c -L. -lft
```

## 📋 Testing

```bash
make test
```

## 📊 Project Structure

```
.
├── Makefile
├── includes/
│   └── libft.h
├── srcs/
│   ├── ft_*.c
│   └── ...
└── README.md
```

## 📜 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 👤 Author

- **[Micampil](https://github.com/Micampil)**
- 42 Intra Profile: [micampil](https://profile.intra.42.fr/users/micampil)

## 🙏 Acknowledgments

- 42 School for the project requirements and learning opportunity
- Fellow 42 students for testing and feedback
