# C Low-Level Programming

This repository contains my solutions and learning projects for the ALX/Holberton Low‑Level Programming track in C. It covers foundational concepts of the C language, computer architecture, memory management, data structures, algorithms, and tooling used to build, debug, and test C programs.

## Prerequisites
- Ubuntu 20.04 LTS (or similar Linux environment)
- GCC (GNU Compiler Collection) and Make
- Betty coding style (if required by project tasks)

Install common tools on Ubuntu:
```
sudo apt update && sudo apt install -y build-essential gcc make valgrind gdb
```

## How to Build and Run
Most tasks are small C programs or library functions.
- Compile a single C file:
  - `gcc -Wall -Wextra -Werror -pedantic file.c -o program`
- Compile multiple sources:
  - `gcc -Wall -Wextra -Werror -pedantic src1.c src2.c -o program`
- Run:
  - `./program`
- Check memory with Valgrind (for programs using dynamic memory):
  - `valgrind --leak-check=full ./program`

## Project Structure
Each directory corresponds to a topic module with its own tasks and README:
- 0x00-hello_world — Basic C compilation, preprocessors, and simple outputs
- 0x01-variables_if_else_while — Variables, conditionals, loops
- 0x02-functions_nested_loops — Functions, headers, nested loops
- 0x03-debugging — Debugging techniques and tools
- 0x04-more_functions_nested_loops — Additional loop/function practice
- 0x05/0x06/0x07-pointers_arrays_strings — Pointer arithmetic, arrays, strings
- 0x08-recursion — Recursion fundamentals
- 0x09-static_libraries — Creating and using static libraries (ar, ranlib)
- 0x0A-argc_argv — Command-line arguments
- 0x0B-malloc_free — Dynamic memory allocation basics
- 0x0C-more_malloc_free — Advanced allocation patterns and edge cases
- 0x0D-preprocessor — Macros and include guards
- 0x0E-structures_typedef — Structs and typedef
- 0x0F-function_pointers — Callbacks and higher-order functions in C
- 0x10-variadic_functions — Variadic functions (stdarg)
- 0x12-singly_linked_lists — SLL data structure operations
- 0x13-more_singly_linked_lists — Advanced SLL tasks
- 0x14-bit_manipulation — Bitwise operations
- 0x15-file_io — File descriptors, system calls
- 0x17-doubly_linked_lists — DLL data structure operations
- 0x18-dynamic_libraries — Shared objects, runtime linking
- 0x1A-hash_tables — Hash table implementations
- 0x1C-makefiles — Automation with Make
- 0x1E-search_algorithms — Common searching algorithms and complexity

See each subdirectory’s README for task details and usage examples.

## Coding Style
- Follow Betty style unless specified otherwise.
- Use header guards, descriptive variable names, and modular functions.
- Always check return values and handle errors.

## Testing
- Prefer small, focused main files for manual tests.
- Use `printf`/assertions and compare against expected output.
- For memory‑heavy code, run under Valgrind.

## Debugging Tips
- Use `gdb` to step through code and inspect variables.
- Print intermediate values to verify logic.
- Isolate functions and write tiny drivers when debugging.

## License
This repository is for educational purposes. Unless otherwise specified, code is provided without warranty. If a project requires a specific license, it will be included in that project’s directory.
