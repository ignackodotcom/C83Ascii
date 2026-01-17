/******************************************************************************
* \file      C83Ascii.h
* \version   2026.01.01 26.00.01.01 (YYYYMMDD XXYYZZWW)
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Ascii character table definitions for C and C++ library
* \details
*
* \see       https://github.com/ignackodotcom
*			 and other resources
******************************************************************************/

#ifndef C83ASCII_H
#define C83ASCII_H



#include "PAscii.h"
#include "PAsciiEx.h"



/******************************************************************************
* version date format YYYYMMDD
*/
#define C83ASCII_VERSION_DATE	20260117L

/******************************************************************************
* version number format XXYYZZWW
*/
#define C83ASCII_VERSION_NUMBER 26000101L



#ifdef __cplusplus
extern "C" {
#endif

    long C83ASCII_DATE(void);
    long C83ASCII_VERSION(void);

#ifdef __cplusplus
}
#endif



#endif /* C83ASCII_H */
