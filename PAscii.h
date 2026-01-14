/******************************************************************************
* \file      PAscii.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Ascii char table constants
* \details
*
* \see       https://github.com/ignackodotcom
*            https://www.asciitable.com/
*			 and other resources
******************************************************************************/

#ifndef PASCII_H
#define PASCII_H      20260101L


/* Complete ascii table */
#define ASCII_NUL                   0     /* 0   */ /* 00 */ /* Null */
#define ASCII_SOH                   1     /* 1   */ /* 01 */ /* Start of Heading */
#define ASCII_STX                   2     /* 2   */ /* 02 */ /* Start of Text */
#define ASCII_ETX                   3     /* 3   */ /* 03 */ /* End of Text */
#define ASCII_EOT                   4     /* 4   */ /* 04 */ /* End of Transmission */
#define ASCII_ENQ                   5     /* 5   */ /* 05 */ /* Enquiry */
#define ASCII_ACK                   6     /* 6   */ /* 06 */ /* Acknowledge */
#define ASCII_BEL                   7     /* 7   */ /* 07 */ /* Bell */
#define ASCII_BS                    8     /* 8   */ /* 08 */ /* Backspace */
#define ASCII_HT                    9     /* 9   */ /* 09 */ /* Horizontal Tab */
#define ASCII_LF                    10    /* 10  */ /* 0A */ /* LF Line Feed, NL New Line */
#define ASCII_NL                    10    /* 10  */ /* 0A */ /* LF Line Feed, NL New Line */
#define ASCII_VT                    11    /* 11  */ /* 0B */ /* Vertical Tab */
#define ASCII_FF                    12    /* 12  */ /* 0C */ /* FF Form Feed, NP New Page */
#define ASCII_NP                    12    /* 12  */ /* 0C */ /* FF Form Feed, NP New Page */
#define ASCII_CR                    13    /* 13  */ /* 0D */ /* Carriage Return */
#define ASCII_SO                    14    /* 14  */ /* 0E */ /* Shift Out */
#define ASCII_SI                    15    /* 15  */ /* 0F */ /* Shift In */
#define ASCII_DLE                   16    /* 16  */ /* 10 */ /* Data Link Escape */
#define ASCII_DC1                   17    /* 17  */ /* 11 */ /* Device Control 1 */
#define ASCII_DC2                   18    /* 18  */ /* 12 */ /* Device Control 2 */
#define ASCII_DC3                   19    /* 19  */ /* 13 */ /* Device Control 3 */
#define ASCII_DC4                   20    /* 20  */ /* 14 */ /* Device Control 4 */
#define ASCII_NAK                   21    /* 21  */ /* 15 */ /* Negative Acknowledge */
#define ASCII_SYN                   22    /* 22  */ /* 16 */ /* Synchronous Idle */
#define ASCII_ETB                   23    /* 23  */ /* 17 */ /* End of Transmission Block */
#define ASCII_CAN                   24    /* 24  */ /* 18 */ /* Cancel */
#define ASCII_EM                    25    /* 25  */ /* 19 */ /* End of Medium */
#define ASCII_SUB                   26    /* 26  */ /* 1A */ /* Substitute */
#define ASCII_ESC                   27    /* 27  */ /* 1B */ /* Escape */
#define ASCII_FS                    28    /* 28  */ /* 1C */ /* File Separator */
#define ASCII_GS                    29    /* 29  */ /* 1D */ /* Group Separator */
#define ASCII_RS                    30    /* 30  */ /* 1E */ /* Record Separator */
#define ASCII_US                    31    /* 31  */ /* 1F */ /* Unit Separator */

#define ASCII_SPACE                 ' '   /* 32  */ /* 20 */

#define ASCII_EXCLAMATION_MARK      '!'   /* 33  */ /* 21 */
#define ASCII_DOUBLE_QUOTES         '\"'  /* 34  */ /* 22 */
#define ASCII_HASH                  '#'   /* 35  */ /* 23 */
#define ASCII_NUMBER                '#'   /* 35  */ /* 23 */
#define ASCII_DOLLAR                '$'   /* 36  */ /* 24 */
#define ASCII_PERCENTAGE            '%'   /* 37  */ /* 25 */
#define ASCII_AMPERSAND             '&'   /* 38  */ /* 26 */
#define ASCII_SINGLE_QUOTE          '\''  /* 39  */ /* 27 */
#define ASCII_OPEN_PARENTHESIS      '('   /* 40  */ /* 28 */
#define ASCII_LEFT_PARENTHESIS      '('   /* 40  */ /* 28 */
#define ASCII_CLOSE_PARENTHESIS     ')'   /* 41  */ /* 29 */  
#define ASCII_RIGHT_PARENTHESIS     ')'   /* 41  */ /* 29 */  
#define ASCII_ASTERISK              '*'   /* 42  */ /* 2A */
#define ASCII_PLUS                  '+'   /* 43  */ /* 2B */
#define ASCII_COMMA                 ','   /* 44  */ /* 2C */
#define ASCII_MINUS                 '-'   /* 45  */ /* 2D */
#define ASCII_PERIOD                '.'   /* 46  */ /* 2E */
#define ASCII_SLASH                 '/'   /* 47  */ /* 2F */

#define ASCII_0                     '0'   /* 48  */ /* 30 */
#define ASCII_1                     '1'   /* 49  */ /* 31 */
#define ASCII_2                     '2'   /* 50  */ /* 32 */
#define ASCII_3                     '3'   /* 51  */ /* 33 */
#define ASCII_4                     '4'   /* 52  */ /* 34 */
#define ASCII_5                     '5'   /* 53  */ /* 35 */
#define ASCII_6                     '6'   /* 54  */ /* 36 */
#define ASCII_7                     '7'   /* 55  */ /* 37 */
#define ASCII_8                     '8'   /* 56  */ /* 38 */
#define ASCII_9                     '9'   /* 57  */ /* 39 */

#define ASCII_COLON                 ':'   /* 58  */ /* 3A */
#define ASCII_SEMICOLON             ';'   /* 59  */ /* 3B */
#define ASCII_LESS_THAN             '<'   /* 60  */ /* 3C */
#define ASCII_EQUALS                '='   /* 61  */ /* 3D */
#define ASCII_GREATER_THAN          '>'   /* 62  */ /* 3E */
#define ASCII_QUESTION_MARK         '?'   /* 63  */ /* 3F */
#define ASCII_AT		            '@'   /* 64  */ /* 40 */

#define ASCII_A                     'A'   /* 65  */ /* 41 */
#define ASCII_B                     'B'   /* 66  */ /* 42 */
#define ASCII_C                     'C'   /* 67  */ /* 43 */
#define ASCII_D                     'D'   /* 68  */ /* 44 */
#define ASCII_E                     'E'   /* 69  */ /* 45 */
#define ASCII_F                     'F'   /* 70  */ /* 46 */
#define ASCII_G                     'G'   /* 71  */ /* 47 */
#define ASCII_H                     'H'   /* 72  */ /* 48 */
#define ASCII_I                     'I'   /* 73  */ /* 49 */
#define ASCII_J                     'J'   /* 74  */ /* 4A */
#define ASCII_K                     'K'   /* 75  */ /* 4B */
#define ASCII_L                     'L'   /* 76  */ /* 4C */
#define ASCII_M                     'M'   /* 77  */ /* 4D */
#define ASCII_N                     'N'   /* 78  */ /* 4E */
#define ASCII_O                     'O'   /* 79  */ /* 4F */
#define ASCII_P                     'P'   /* 80  */ /* 50 */
#define ASCII_Q                     'Q'   /* 81  */ /* 51 */
#define ASCII_R                     'R'   /* 82  */ /* 52 */
#define ASCII_S                     'S'   /* 83  */ /* 53 */
#define ASCII_T                     'T'   /* 84  */ /* 54 */
#define ASCII_U                     'U'   /* 85  */ /* 55 */
#define ASCII_V                     'V'   /* 86  */ /* 56 */
#define ASCII_W                     'W'   /* 87  */ /* 57 */
#define ASCII_X                     'X'   /* 88  */ /* 58 */
#define ASCII_Y                     'Y'   /* 89  */ /* 59 */
#define ASCII_Z                     'Z'   /* 90  */ /* 5A */

#define ASCII_OPENING_BRACKET       '['   /* 91  */ /* 5B */
#define ASCII_LEFT_SQUARE_BRACKET   '['   /* 91  */ /* 5B */
#define ASCII_BACKSLASH             '\\'  /* 92  */ /* 5C */
#define ASCII_CLOSING_BRACKET       ']'   /* 93  */ /* 5D */
#define ASCII_RIGHT_SQUARE_BRACKET  ']'   /* 93  */ /* 5D */
#define ASCII_CARET                 '^'   /* 94  */ /* 5E */
#define ASCII_CIRCUMFLEX            '^'   /* 94  */ /* 5E */
#define ASCII_UNDERSCORE            '_'   /* 95  */ /* 5F */
#define ASCII_GRAVE_ACCENT          '`'   /* 96  */ /* 60 */

#define ASCII_a                     'a'   /* 97  */ /* 61 */
#define ASCII_b                     'b'   /* 98  */ /* 62 */
#define ASCII_c                     'c'   /* 99  */ /* 63 */
#define ASCII_d                     'd'   /* 100 */ /* 64 */
#define ASCII_e                     'e'   /* 101 */ /* 65 */
#define ASCII_f                     'f'   /* 102 */ /* 66 */
#define ASCII_g                     'g'   /* 103 */ /* 67 */
#define ASCII_h                     'h'   /* 104 */ /* 68 */
#define ASCII_i                     'i'   /* 105 */ /* 69 */
#define ASCII_j                     'j'   /* 106 */ /* 6A */
#define ASCII_k                     'k'   /* 107 */ /* 6B */
#define ASCII_l                     'l'   /* 108 */ /* 6C */
#define ASCII_m                     'm'   /* 109 */ /* 6D */
#define ASCII_n                     'n'   /* 110 */ /* 6E */
#define ASCII_o                     'o'   /* 111 */ /* 6F */
#define ASCII_p                     'p'   /* 112 */ /* 70 */
#define ASCII_q                     'q'   /* 113 */ /* 71 */
#define ASCII_r                     'r'   /* 114 */ /* 72 */
#define ASCII_s                     's'   /* 115 */ /* 73 */
#define ASCII_t                     't'   /* 116 */ /* 74 */
#define ASCII_u                     'u'   /* 117 */ /* 75 */
#define ASCII_v                     'v'   /* 118 */ /* 76 */
#define ASCII_w                     'w'   /* 119 */ /* 77 */
#define ASCII_x                     'x'   /* 120 */ /* 78 */
#define ASCII_y                     'y'   /* 121 */ /* 79 */
#define ASCII_z                     'z'   /* 122 */ /* 7A */

#define ASCII_OPENING_BRACE         '{'   /* 123 */ /* 7B */
#define ASCII_LEFT_CURLY_BRACE      '{'   /* 123 */ /* 7B */
#define ASCII_VERTICAL_BAR          '|'   /* 124 */ /* 7C */
#define ASCII_CLOSING_BRACE         '}'   /* 125 */ /* 7D */
#define ASCII_RIGHT_CURLY_BRACE     '}'   /* 125 */ /* 7D */
#define ASCII_TILDE                 '~'   /* 126 */ /* 7E */

#define ASCII_DEL                   127   /* 127 */ /* 7F */ /* Delete */


/* Complete control characters */
#define NUL			ASCII_NUL
#define SOH			ASCII_SOH
#define STX			ASCII_STX
#define ETX			ASCII_ETX
#define EOT			ASCII_EOT
#define ENQ			ASCII_ENQ
#define ACK			ASCII_ACK
#define BEL			ASCII_BEL
#define BS			ASCII_BS
#define HT			ASCII_HT
#define LF			ASCII_LF
#define NL			ASCII_NL
#define VT			ASCII_VT
#define FF			ASCII_FF
#define NP			ASCII_NP
#define CR			ASCII_CR
#define SO			ASCII_SO
#define SI			ASCII_SI
#define DLE			ASCII_DLE
#define DC1			ASCII_DC1
#define DC2			ASCII_DC2
#define DC3			ASCII_DC3
#define DC4			ASCII_DC4
#define NAK			ASCII_NAK
#define SYN			ASCII_SYN
#define ETB			ASCII_ETB
#define CAN			ASCII_CAN
#define EM			ASCII_EM
#define SUB			ASCII_SUB
#define ESC			ASCII_ESC
#define FS			ASCII_FS
#define GS			ASCII_GS
#define RS			ASCII_RS
#define US			ASCII_US

#define DEL			ASCII_DEL


/* Complete digit characters */
#define DIGIT_0     ASCII_0
#define DIGIT_1     ASCII_1
#define DIGIT_2     ASCII_2
#define DIGIT_3     ASCII_3
#define DIGIT_4     ASCII_4
#define DIGIT_5     ASCII_5
#define DIGIT_6     ASCII_6
#define DIGIT_7     ASCII_7
#define DIGIT_8     ASCII_8
#define DIGIT_9     ASCII_9


/* Complete upper characters */
#define UPPER_A     ASCII_A
#define UPPER_B     ASCII_B
#define UPPER_C     ASCII_C
#define UPPER_D     ASCII_D
#define UPPER_E     ASCII_E
#define UPPER_F     ASCII_F
#define UPPER_G     ASCII_G
#define UPPER_H     ASCII_H
#define UPPER_I     ASCII_I
#define UPPER_J     ASCII_J
#define UPPER_K     ASCII_K
#define UPPER_L     ASCII_L
#define UPPER_M     ASCII_M
#define UPPER_N     ASCII_N
#define UPPER_O     ASCII_O
#define UPPER_P     ASCII_P
#define UPPER_Q     ASCII_Q
#define UPPER_R     ASCII_R
#define UPPER_S     ASCII_S
#define UPPER_T     ASCII_T
#define UPPER_U     ASCII_U
#define UPPER_V     ASCII_V
#define UPPER_W     ASCII_W
#define UPPER_X     ASCII_X
#define UPPER_Y     ASCII_Y
#define UPPER_Z     ASCII_Z


/* Complete lower characters */
#define LOWER_a     ASCII_a
#define LOWER_b     ASCII_b
#define LOWER_c     ASCII_c
#define LOWER_d     ASCII_d
#define LOWER_e     ASCII_e
#define LOWER_f     ASCII_f
#define LOWER_g     ASCII_g
#define LOWER_h     ASCII_h
#define LOWER_i     ASCII_i
#define LOWER_j     ASCII_j
#define LOWER_k     ASCII_k
#define LOWER_l     ASCII_l
#define LOWER_m     ASCII_m
#define LOWER_n     ASCII_n
#define LOWER_o     ASCII_o
#define LOWER_p     ASCII_p
#define LOWER_q     ASCII_q
#define LOWER_r     ASCII_r
#define LOWER_s     ASCII_s
#define LOWER_t     ASCII_t
#define LOWER_u     ASCII_u
#define LOWER_v     ASCII_v
#define LOWER_w     ASCII_w
#define LOWER_x     ASCII_x
#define LOWER_y     ASCII_y
#define LOWER_z     ASCII_z


#endif /* PASCII_H */
