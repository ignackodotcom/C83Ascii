# C83Ascii

## Ascii character table definitions for C and C++

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

## Overview
C83Ascii is a lightweight C/C++ library that provides ASCII character table definitions, 
enabling developers to reference ASCII characters through 
readable symbolic constants.

## Features
- Comprehensive ASCII character definitions
- Extended ASCII support via PAsciiEx.h (Code Page 437)
- Easy integration into C and C++ projects
- Lightweight and efficient
- Compatible with C89 and higher editions
- Open source under the MIT License

## Repository Structure
| File        | Description                                                 |
|-------------|-------------------------------------------------------------|
| C83Ascii.c  |	Core implementation file for ASCII utilities.               |
| C83Ascii.h  |	Main header providing ASCII definitions and version macros. |
| PAscii.h    |	ASCII character definitions.                                |
| PAsciiEx.h  |	Extended ASCII definitions (Code Page 437).                 |
| License.txt |	MIT License.                                                |
| README.md	  | Project description and usage examples.                     |

## Usage
Then you can use the defined ASCII character constants in your code. For example:
```c
	printf("Library version = %ld\r\n", C83ASCII_VERSION());
	printf("\r\n");
	printf("'%c'\r\n", ASCII_0);
	printf("'%c'\r\n", ASCII_A);
	printf("'%c'\r\n", ASCII_a);
	printf("\r\n");
```

## License
This library is licensed under the MIT License. See the LICENSE file for details.

# Updates
| YYYY MM DD | Brief description of updates   |
|------------|--------------------------------|
| 2025 10 30 | AsciiTab.h renamed to PAscii.h |
| 2025 11 01 | ASCII_AT_SIGN renamed to ASCII_AT |
| 2025 11 01 | PAsciiEx.h extended character definitions added |
| 2025 11 01 | Updated README.md with new file names and descriptions |
| 2025 11 14 | ASCII_YUAN sign removed from PAsciiEx.h |
