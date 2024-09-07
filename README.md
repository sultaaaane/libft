```markdown
# Libft - A Custom C Standard Library

Libft is a custom implementation of several standard C library functions, along with additional utility functions. This library aims to replicate the functionality of standard C library functions while providing additional utilities that can be useful in various C programming projects.
```
## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Contributing](#contributing)
- [License](#license)

## Features

- A reimplementation of common C standard library functions, such as `ft_strlen`, `ft_strchr`, `ft_memcpy`, etc.
- Additional utility functions for string manipulation, memory management, file handling, and list processing.
- Custom linked list management functions.

## Installation

To use this library in your project:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```

2. **Compile the library:**
   Run the following command to compile the library into an object file (`libft.a`):
   ```bash
   make
   ```

3. **Include the library in your project:**
   Add `libft.h` to your project's include path and link against the compiled library.

## Usage

To use the functions provided by the library, include `libft.h` in your source files:

```c
#include "libft.h"
```

Compile your code with the generated `libft.a` file:

```bash
gcc libft.a your_program.c
```

## Functions

### String Manipulation

- `ft_strlen` - Calculates the length of a string.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_strdup` - Duplicates a string.
- `ft_strjoin` - Concatenates two strings into a new string.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of substrings based on a delimiter.
- `ft_strnstr` - Locates a substring in a string within a specified length.

### Character Checking and Conversion

- `ft_isalpha` - Checks if a character is an alphabetic letter.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character is an ASCII character.
- `ft_isprint` - Checks if a character is printable.
- `ft_tolower` - Converts an uppercase character to lowercase.
- `ft_toupper` - Converts a lowercase character to uppercase.

### Memory Management

- `ft_memset` - Fills a block of memory with a specified value.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memmove` - Copies memory from one location to another with overlap handling.
- `ft_memchr` - Searches for a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_calloc` - Allocates and zeroes out memory.
- `ft_realloc` - Reallocates memory.

### File Handling

- `get_next_line` - Reads a line from a file descriptor.
- `ft_putchar_fd` - Outputs a character to a specified file descriptor.
- `ft_putstr_fd` - Outputs a string to a specified file descriptor.
- `ft_putnbr_fd` - Outputs an integer to a specified file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline to a specified file descriptor.

### Linked List Management

- `ft_lstnew` - Creates a new list node.
- `ft_lstadd_front` - Adds a node to the front of the list.
- `ft_lstadd_back` - Adds a node to the back of the list.
- `ft_lstsize` - Returns the size of the list.
- `ft_lstlast` - Returns the last node of the list.
- `ft_lstclear` - Clears all nodes in the list.
- `ft_lstdelone` - Deletes a single list node.
- `ft_lstiter` - Iterates over the list and applies a function to each node.
- `ft_lstmap` - Applies a function to each node of a list and creates a new list.
### Descriptions for the Additional Functions:
- `get_next_line` - Reads a line from a file descriptor fd until a newline is encountered or EOF is reached.
- `ft_free2d` - Frees a dynamically allocated 2D array of strings.
- `ft_is_whitespace` - Checks if a given string consists only of whitespace characters.
- `ft_strndup` - Duplicates up to n characters of the string s.
- `ft_is_space` - Checks if a character is a whitespace character (' ', '\t', '\n', etc.).
- `ft_strdup_2d` - Duplicates a 2D array of strings.
- `ft_strlen2d` - Calculates the number of strings in a 2D array.
- `ft_rand` - Generates a random number; optionally resets with a given seed value.

## Contributing

Contributions are welcome! Please feel free to submit a pull request or open an issue for suggestions and improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```
