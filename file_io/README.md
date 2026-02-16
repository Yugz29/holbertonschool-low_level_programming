# File I/O in C

## Overview

This directory contains an implementation of **file input/output operations** in C.

It demonstrates how to:

* open, read, write, and close files using system calls
* handle file descriptors and permissions
* implement basic file copying and text manipulation
* perform robust error handling

The focus is on mastering low-level system I/O without relying on high-level library functions.

---

## Key Concepts

* File descriptors and system calls (`open`, `read`, `write`, `close`)
* File permissions (`O_RDONLY`, `O_WRONLY`, `O_RDWR`, create flags)
* Buffer management and error checking
* Text vs binary file handling

---

## Implemented Programs / Functions

| Task             | Description                                                |
| ---------------- | ---------------------------------------------------------- |
| Read a text file | Reads a file and prints its content to stdout              |
| Create a file    | Creates a new file with specified content                  |
| Append to a file | Appends text to an existing file                           |
| Copy a file      | Copies content from one file to another using system calls |

---

## Compilation

Compile all source files with strict flags:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o file_io
```

These flags enforce clean, standard-compliant, and warning-free C code.

---

## Example Usage

```sh
$ ./read_text_file filename.txt
Hello world

$ ./cp source.txt dest.txt
$ ./append_text file.txt "additional text"
```

You can create a `main.c` file to test all operations.

---

## Technical Focus

This project highlights:

* Manual handling of file descriptors
* Low-level file manipulation without stdio
* Proper error handling and defensive programming
* Understanding how data flows between programs and disks

---

## Why This Matters

Mastery of file I/O at this level is essential for:

* Systems programming
* Building utilities like shells, file managers, or logging systems
* Handling performance-sensitive applications
* Understanding low-level backend operations
