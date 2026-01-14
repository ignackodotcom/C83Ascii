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


## Ascii Character Definitions 0-127

### Complete control characters
| ASCII     | Alt name | Character | Value | Description               |
|-----------|----------|-----------|-------|---------------------------|
| ASCII_NUL | NUL      | '\0'      | 0     | Null character            |
| ASCII_SOH | SOH      |           | 1     | Start of Header           |
| ASCII_STX | STX      |           | 2     | Start of Text             |
| ASCII_ETX | ETX      |           | 3     | End of Text               |
| ASCII_EOT | EOT      |           | 4     | End of Transmission       |
| ASCII_ENQ | ENQ      |           | 5     | Enquiry                   |
| ASCII_ACK | ACK      |           | 6     | Acknowledge               |
| ASCII_BEL | BEL      | '\a'      | 7     | Bell                      |
| ASCII_BS  | BS       | '\b'      | 8     | Backspace                 |
| ASCII_HT  | HT       | '\t'      | 9     | Horizontal Tab            |
| ASCII_LF  | LF       | '\n'      | 10    | Line Feed                 |
| ASCII_VT  | VT       | '\v'      | 11    | Vertical Tab              |
| ASCII_FF  | FF       | '\f'      | 12    | Form Feed                 |
| ASCII_CR  | CR       | '\r'      | 13    | Carriage Return           |
| ASCII_SO  | SO       |           | 14    | Shift Out                 |
| ASCII_SI  | SI       |           | 15    | Shift In                  |
| ASCII_DLE | DLE      |           | 16    | Data Link Escape          |
| ASCII_DC1 | DC1      |           | 17    | Device Control 1 (XON)    |
| ASCII_DC2 | DC2      |           | 18    | Device Control 2          |
| ASCII_DC3 | DC3      |           | 19    | Device Control 3 (XOFF)   |
| ASCII_DC4 | DC4      |           | 20    | Device Control 4          |
| ASCII_NAK | NAK      |           | 21    | Negative Acknowledge      |
| ASCII_SYN | SYN      |           | 22    | Synchronous Idle          |
| ASCII_ETB | ETB      |           | 23    | End of Transmission Block |
| ASCII_CAN | CAN      |           | 24    | Cancel                    |
| ASCII_EM  | EM       |           | 25    | End of Medium             |
| ASCII_SUB | SUB      |           | 26    | Substitute                |
| ASCII_ESC | ESC      |           | 27    | Escape                    |
| ASCII_FS  | FS       |           | 28    | File Separator            |
| ASCII_GS  | GS       |           | 29    | Group Separator           |
| ASCII_RS  | RS       |           | 30    | Record Separator          |
| ASCII_US  | US       |           | 31    | Unit Separator            |

### Printable characters
| ASCII                  | Character | Value | Description               |
|------------------------|-----------|-------|---------------------------|
| ASCII_SPACE            | ' '       | 32    | Space                     |
| ASCII_EXCLAMATION_MARK | '!'       | 33    | Exclamation mark          |
| ASCII_DOUBLE_QUOTES    | '"'       | 34    | Double quote              |
| ASCII_HASH             | '#'       | 35    | Number sign               |
| ASCII_DOLLAR           | '$'       | 36    | Dollar sign               |
| ASCII_PERCENT          | '%'       | 37    | Percent sign              |
| ASCII_AMPERSAND        | '&'       | 38    | Ampersand                 |
| ASCII_SINGLE_QUOTE     | '\''      | 39    | Apostrophe                |
| ASCII_LEFT_PARENTHESIS | '('       | 40    | Left parenthesis          |
| ASCII_RIGHT_PARENTHESIS| ')'       | 41    | Right parenthesis         |
| ASCII_ASTERISK         | '*'       | 42    | Asterisk                  |
| ASCII_PLUS             | '+'       | 43    | Plus sign                 |
| ASCII_COMMA            | ','       | 44    | Comma                     |
| ASCII_MINUS            | '-'       | 45    | Hyphen-minus              |
| ASCII_PERIOD           | '.'       | 46    | Full stop (period)        |
| ASCII_SLASH            | '/'       | 47    | Solidus (slash)           |

### Digits
| ASCII     | Alt name | Character | Value | Description               |
|-----------|----------|-----------|-------|---------------------------|
| ASCII_0   | DIGIT_0  | '0'       | 48    | Digit zero                |
| ...       | ...      | ...       | ...   | ...                       |
| ASCII_9   | DIGIT_9  | '9'       | 57    | Digit nine                |

### More printable characters
| ASCII                  | Character | Value | Description               |
|------------------------|-----------|-------|---------------------------|
| ASCII_COLON            | ':'       | 58    | Colon                     |
| ASCII_SEMICOLON        | ';'       | 59    | Semicolon                 |
| ASCII_LESS_THAN        | '<'       | 60    | Less-than sign            |
| ASCII_EQUALS           | '='       | 61    | Equals sign               |
| ASCII_GREATER_THAN     | '>'       | 62    | Greater-than sign         |
| ASCII_QUESTION_MARK    | '?'       | 63    | Question mark             |
| ASCII_AT               | '@'       | 64    | At sign                   |

### Uppercase letters
| ASCII     | Alt name | Character | Value | Description               |
|-----------|----------|-----------|-------|---------------------------|
| ASCII_A   | UPPER_A  | 'A'       | 65    | Uppercase letter A        |
| ...       | ...      | ...       | ...   | ...                       |
| ASCII_Z   | UPPER_Z  | 'Z'       | 90    | Uppercase letter Z        |

### More printable characters
| ASCII                      | Character | Value | Description               |
|----------------------------|-----------|-------|---------------------------|
| ASCII_LEFT_SQUARE_BRACKET  | '['       | 91    | Left square bracket       |
| ASCII_BACKSLASH            | '\\'      | 92    | Backslash                 |
| ASCII_RIGHT_SQUARE_BRACKET | ']'       | 93    | Right square bracket      |
| ASCII_CARET                | '^'       | 94    | Caret                     |
| ASCII_UNDERSCORE           | '_'       | 95    | Underscore                |
| ASCII_GRAVE_ACCENT         | '`'       | 96    | Grave accent              |

### Lowercase letters
| ASCII     | Alt name | Character | Value | Description               |
|-----------|----------|-----------|-------|---------------------------|
| ASCII_a   | LOWER_a  | 'a'       | 97    | Lowercase letter a        |
| ...       | ...      | ...       | ...   | ...                       |
| ASCII_z   | LOWER_z  | 'z'       | 122   | Lowercase letter z        |

### Final printable characters
| ASCII                     | Character | Value | Description               |
|---------------------------|-----------|-------|---------------------------|
| ASCII_LEFT_CURLY_BRACE    | '{'       | 123   | Left curly brace          |
| ASCII_VERTICAL_BAR        | '\|'      | 124   | Vertical bar              |
| ASCII_RIGHT_CURLY_BRACE   | '}'       | 125   | Right curly brace         |
| ASCII_TILDE               | '~'       | 126   | Tilde                     |

### DEL Character
| ASCII     | Alt name | Character | Value | Description               |
|-----------|----------|-----------|-------|---------------------------|
| ASCII_DEL | DEL      |           | 127   | Delete                    |


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


## Updates
| YYYY MM DD | Brief description of updates   |
|------------|--------------------------------|
| 2025 10 30 | AsciiTab.h renamed to PAscii.h |
| 2025 11 01 | ASCII_AT_SIGN renamed to ASCII_AT |
| 2025 11 01 | PAsciiEx.h extended character definitions added |
| 2025 11 01 | Updated README.md with new file names and descriptions |
| 2025 11 14 | ASCII_YUAN sign removed from PAsciiEx.h |
| 2026 01 14 | LEFT_CURLY_BRACKET renamed to LEFT_CURLY_BRACE |
| 2026 01 14 | RIGHT_CURLY_BRACKET renamed to RIGHT_CURLY_BRACE |
| 2026 01 14 | Updated README.md for clarity and completeness |
