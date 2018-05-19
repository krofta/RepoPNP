/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : CLS1.h
**     Project     : tinyk20_PNP_V1
**     Processor   : MK20DN128VFT5
**     Component   : Shell
**     Version     : Component 01.095, Driver 01.00, CPU db: 3.00.000
**     Repository  : MonEc
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-18, 21:35, # CodeGen: 46
**     Abstract    :
**
**     Settings    :
**          Component name                                 : CLS1
**          Echo                                           : no
**          Prompt                                         : ""
**          Project Name                                   : TinyK20 OpenPnP
**          Silent Mode Prefix                             : #
**          Buffer Size                                    : 48
**          Blocking Send                                  : Enabled
**            Wait                                         : WAIT1
**            Timeout (ms)                                 : 20
**            Wait Time (ms)                               : 5
**            RTOS Wait                                    : yes
**          Status Colon Pos                               : 13
**          Help Semicolon Pos                             : 26
**          Multi Command                                  : Disabled
**          History                                        : no
**          Mutex                                          : no
**          SDK                                            : MCUC1
**          Default Serial                                 : Enabled
**            Console Interface                            : AS1
**          Utility                                        : UTIL1
**          XFormat                                        : XF1
**          Critical Section                               : CS1
**     Contents    :
**         PrintPrompt                  - void CLS1_PrintPrompt(CLS1_ConstStdIOType *io);
**         SendNum8u                    - void CLS1_SendNum8u(uint8_t val, CLS1_StdIO_OutErr_FctType io);
**         SendNum8s                    - void CLS1_SendNum8s(int8_t val, CLS1_StdIO_OutErr_FctType io);
**         SendNum16u                   - void CLS1_SendNum16u(uint16_t val, CLS1_StdIO_OutErr_FctType io);
**         SendNum16s                   - void CLS1_SendNum16s(int16_t val, CLS1_StdIO_OutErr_FctType io);
**         SendNum32u                   - void CLS1_SendNum32u(uint32_t val, CLS1_StdIO_OutErr_FctType io);
**         SendNum32s                   - void CLS1_SendNum32s(int32_t val, CLS1_StdIO_OutErr_FctType io);
**         SendCh                       - void CLS1_SendCh(uint8_t ch, CLS1_StdIO_OutErr_FctType io);
**         SendStr                      - void CLS1_SendStr(const uint8_t *str, CLS1_StdIO_OutErr_FctType io);
**         printfIO                     - unsigned CLS1_printfIO(CLS1_ConstStdIOType *io, const char *fmt, ...);
**         printf                       - unsigned CLS1_printf(const char *fmt, ...);
**         SendData                     - void CLS1_SendData(const uint8_t *data, uint16_t dataSize,...
**         PrintStatus                  - uint8_t CLS1_PrintStatus(CLS1_ConstStdIOType *io);
**         ParseCommand                 - uint8_t CLS1_ParseCommand(const uint8_t *cmd, bool *handled,...
**         IsHistoryCharacter           - bool CLS1_IsHistoryCharacter(uint8_t ch, uint8_t *cmdBuf, size_t cmdBufIdx,...
**         ReadLine                     - bool CLS1_ReadLine(uint8_t *bufStart, uint8_t *buf, size_t bufSize,...
**         PrintCommandFailed           - void CLS1_PrintCommandFailed(const uint8_t *cmd, CLS1_ConstStdIOType *io);
**         IterateTable                 - uint8_t CLS1_IterateTable(const uint8_t *cmd, bool *handled,...
**         SetStdio                     - uint8_t CLS1_SetStdio(CLS1_ConstStdIOTypePtr stdio);
**         GetStdio                     - CLS1_ConstStdIOTypePtr CLS1_GetStdio(void);
**         RequestSerial                - void CLS1_RequestSerial(void);
**         ReleaseSerial                - void CLS1_ReleaseSerial(void);
**         ReadAndParseWithCommandTable - uint8_t CLS1_ReadAndParseWithCommandTable(uint8_t *cmdBuf, size_t cmdBufSize,...
**         ParseWithCommandTable        - uint8_t CLS1_ParseWithCommandTable(const uint8_t *cmd, CLS1_ConstStdIOType...
**         GetSemaphore                 - void* CLS1_GetSemaphore(void);
**         SendStatusStr                - void CLS1_SendStatusStr(const uint8_t *strItem, const uint8_t *strStatus,...
**         SendHelpStr                  - void CLS1_SendHelpStr(const uint8_t *strCmd, const uint8_t *strHelp,...
**         ReadChar                     - void CLS1_ReadChar(uint8_t *c);
**         SendChar                     - void CLS1_SendChar(uint8_t ch);
**         KeyPressed                   - bool CLS1_KeyPressed(void);
**         SendCharFct                  - void CLS1_SendCharFct(uint8_t ch, uint8_t (*fct)(uint8_t ch));
**         Init                         - void CLS1_Init(void);
**         Deinit                       - void CLS1_Deinit(void);
**
**     * Copyright (c) 2014-2017, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file CLS1.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup CLS1_module CLS1 module documentation
**  @{
*/         


#ifndef __CLS1_H
#define __CLS1_H

/* MODULE CLS1. */
#include "MCUC1.h" /* SDK and API used */
#include "CLS1config.h" /* configuration */


#ifndef __BWUserType_CLS1_StdIO_OutErr_FctType
#define __BWUserType_CLS1_StdIO_OutErr_FctType
  typedef void (*CLS1_StdIO_OutErr_FctType)(uint8_t); /* Callback for an output or error I/O function */
#endif
#ifndef __BWUserType_CLS1_StdIO_In_FctType
#define __BWUserType_CLS1_StdIO_In_FctType
  typedef void (*CLS1_StdIO_In_FctType)(uint8_t *); /* Callback for an I/O input function. */
#endif
#ifndef __BWUserType_CLS1_StdIO_KeyPressed_FctType
#define __BWUserType_CLS1_StdIO_KeyPressed_FctType
  typedef bool (*CLS1_StdIO_KeyPressed_FctType)(void); /* Callback which returns true if a key has been pressed */
#endif
#ifndef __BWUserType_CLS1_StdIOType
#define __BWUserType_CLS1_StdIOType
  typedef struct {                     /* Record containing input, output and error callback (stdin, stdout, stderr). */
    CLS1_StdIO_In_FctType stdIn;       /* standard input */
    CLS1_StdIO_OutErr_FctType stdOut;  /* standard output */
    CLS1_StdIO_OutErr_FctType stdErr;  /* standard error */
    CLS1_StdIO_KeyPressed_FctType keyPressed; /* key pressed callback */
  } CLS1_StdIOType;
#endif
#ifndef __BWUserType_CLS1_ConstStdIOType
#define __BWUserType_CLS1_ConstStdIOType
  typedef const CLS1_StdIOType CLS1_ConstStdIOType; /* constant StdIOType */
#endif
#ifndef __BWUserType_CLS1_ParseCommandCallback
#define __BWUserType_CLS1_ParseCommandCallback
  typedef uint8_t (*CLS1_ParseCommandCallback)(const uint8_t *cmd, bool *handled, const CLS1_StdIOType *io); /* Callback for parsing a shell command */
#endif
#ifndef __BWUserType_CLS1_ConstStdIOTypePtr
#define __BWUserType_CLS1_ConstStdIOTypePtr
  typedef const CLS1_ConstStdIOType *CLS1_ConstStdIOTypePtr; /* Pointer to constant standard I/O descriptor */
#endif
#ifndef __BWUserType_CLS1_ConstParseCommandCallback
#define __BWUserType_CLS1_ConstParseCommandCallback
  typedef const CLS1_ParseCommandCallback CLS1_ConstParseCommandCallback; /* Callback for parsing a shell command */
#endif

#define CLS1_DEFAULT_SHELL_BUFFER_SIZE  CLS1_CONFIG_DEFAULT_SHELL_BUFFER_SIZE  /* default buffer size for shell command parsing */

/* Include inherited components */
#include "WAIT1.h"
#include "MCUC1.h"
#include "AS1.h"
#include "UTIL1.h"
#include "XF1.h"
#include "CS1.h"

/* other includes needed */
#include <stddef.h> /* for size_t */

/* settings for command line history */
#define CLS1_HISTORY_ENABLED  0        /* 1: enabled, 0: disabled */
#define CLS1_NOF_HISTORY      0        /* number of items in history */
#define CLS1_HIST_LEN         0        /* history buffer size */

/* settings for silent prefix char */
#define CLS1_SILENT_PREFIX_CHAR    '#' /* with this char as first character in the cmd, printing is silent. Use a space to disable it */
#define CLS1_NO_SILENT_PREFIX_CHAR ' ' /* used for no silent prefix char */
#define CLS1_SILENT_PREFIX_CHAR_ENABLED (CLS1_SILENT_PREFIX_CHAR != CLS1_NO_SILENT_PREFIX_CHAR)

/* multi command support */
#define CLS1_MULTI_CMD_ENABLED   0 /* 1: enabled, 0: disabled */
#define CLS1_MULTI_CMD_SIZE      0 /* max size of each command */
#define CLS1_MULTI_CMD_CHAR      ';' /* separation character */

/* settings for local echo */
#define CLS1_ECHO_ENABLED  0           /* 1: enabled, 0: disabled */

#define CLS1_DEFAULT_SERIAL  CLS1_CONFIG_DEFAULT_SERIAL /* If set to 1, then the shell implements its own StdIO which is returned by CLS1_GetStdio(); */

extern uint8_t CLS1_DefaultShellBuffer[CLS1_DEFAULT_SHELL_BUFFER_SIZE]; /* default buffer which can be used by the application */

#if CLS1_DEFAULT_SERIAL
  extern CLS1_ConstStdIOType CLS1_stdio; /* default standard I/O */
#endif

#define CLS1_DASH_LINE "--------------------------------------------------------------"
/* predefined commands */
#define CLS1_CMD_HELP   "help"
#define CLS1_CMD_STATUS "status"

#ifdef __cplusplus
extern "C" {
#endif

void CLS1_SendStr(const uint8_t *str, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendStr (component Shell)
**     Description :
**         Prints a string using an I/O function
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to string (zero terminated) to be
**                           printed.
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

uint8_t CLS1_ParseCommand(const uint8_t *cmd, bool *handled, CLS1_ConstStdIOType *io);
/*
** ===================================================================
**     Method      :  CLS1_ParseCommand (component Shell)
**     Description :
**         Parses a shell command. Use 'help' to get a list of
**         supported commands.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command string
**       * handled         - Pointer to variable to indicate if
**                           the command has been handled. The caller
**                           passes this variable to the command scanner
**                           to find out if the passed command has been
**                           handled. The variable is initialized by the
**                           caller.
**       * io              - Pointer to I/O callbacks
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void CLS1_SendNum32s(int32_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum32s (component Shell)
**     Description :
**         Sends a 32bit signed number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendNum16s(int16_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum16s (component Shell)
**     Description :
**         Sends a 16bit signed number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_PrintPrompt(CLS1_ConstStdIOType *io);
/*
** ===================================================================
**     Method      :  CLS1_PrintPrompt (component Shell)
**     Description :
**         Prints the prompt to the stdOut channel
**     Parameters  :
**         NAME            - DESCRIPTION
**       * io              - Pointer to IO to be used
**     Returns     : Nothing
** ===================================================================
*/

bool CLS1_ReadLine(uint8_t *bufStart, uint8_t *buf, size_t bufSize, CLS1_ConstStdIOType *io);
/*
** ===================================================================
**     Method      :  CLS1_ReadLine (component Shell)
**     Description :
**         Reads a line from stdIn and returns TRUE if we have a line,
**         FALSE otherwise.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * bufStart        - Pointer to start of buffer
**       * buf             - Pointer to buffer where to read in the
**                           information
**         bufSize         - size of buffer
**       * io              - Pointer to I/O callbacks
**     Returns     :
**         ---             - TRUE if something has been read, FALSE
**                           otherwise
** ===================================================================
*/

uint8_t CLS1_PrintStatus(CLS1_ConstStdIOType *io);
/*
** ===================================================================
**     Method      :  CLS1_PrintStatus (component Shell)
**     Description :
**         Prints various available system status information
**     Parameters  :
**         NAME            - DESCRIPTION
**       * io              - Pointer to I/O callbacks
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void CLS1_PrintCommandFailed(const uint8_t *cmd, CLS1_ConstStdIOType *io);
/*
** ===================================================================
**     Method      :  CLS1_PrintCommandFailed (component Shell)
**     Description :
**         Prints a standard message for failed or unknown commands
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command which was failing
**       * io              - Pointer to I/O callbacks
**     Returns     : Nothing
** ===================================================================
*/

uint8_t CLS1_ParseWithCommandTable(const uint8_t *cmd, CLS1_ConstStdIOType *io, CLS1_ConstParseCommandCallback *parseCallback);
/*
** ===================================================================
**     Method      :  CLS1_ParseWithCommandTable (component Shell)
**     Description :
**         Parses a shell command. It handles first the internal
**         commands and will call the provided callback.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command string
**       * io              - Pointer to I/O callbacks
**       * parseCallback   - Pointer to callback
**                           which will be called to parse commands in
**                           the user application, or NULL if not used.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

CLS1_ConstStdIOTypePtr CLS1_GetStdio(void);
/*
** ===================================================================
**     Method      :  CLS1_GetStdio (component Shell)
**     Description :
**         Returns the default stdio channel. This method is only
**         available if a shell is enabled in the component properties.
**     Parameters  : None
**     Returns     :
**         ---             - Pointer to the stdio descriptor
** ===================================================================
*/

void CLS1_SendNum32u(uint32_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum32u (component Shell)
**     Description :
**         Sends a 32bit unsigned number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendNum16u(uint16_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum16u (component Shell)
**     Description :
**         Sends a 16bit unsigned number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendNum8u(uint8_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum8u (component Shell)
**     Description :
**         Sends an 8bit unsigned number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendNum8s(int8_t val, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendNum8s (component Shell)
**     Description :
**         Sends an 8bit signed number to the given I/O
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - number to print
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_Init(void);
/*
** ===================================================================
**     Method      :  CLS1_Init (component Shell)
**     Description :
**         Initializes the module, especially creates the mutex
**         semaphore if an RTOS is used.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_RequestSerial(void);
/*
** ===================================================================
**     Method      :  CLS1_RequestSerial (component Shell)
**     Description :
**         Used to get mutual access to the shell console. Only has an
**         effect if using an RTOS with semaphore for the console
**         access.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_ReleaseSerial(void);
/*
** ===================================================================
**     Method      :  CLS1_ReleaseSerial (component Shell)
**     Description :
**         Used to release mutual access to the shell console. Only has
**         an effect if using an RTOS with semaphore for the console
**         access.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendHelpStr(const uint8_t *strCmd, const uint8_t *strHelp, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendHelpStr (component Shell)
**     Description :
**         Prints a string using an I/O function, formated for the
**         'help' command
**     Parameters  :
**         NAME            - DESCRIPTION
**       * strCmd          - Pointer to string of the command
**       * strHelp         - Pointer to help text string
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendStatusStr(const uint8_t *strItem, const uint8_t *strStatus, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendStatusStr (component Shell)
**     Description :
**         Prints a status string using an I/O function, formated for
**         the 'status' command
**     Parameters  :
**         NAME            - DESCRIPTION
**       * strItem         - Pointer to string of the command
**       * strStatus       - Pointer to help text string
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_ReadChar(uint8_t *c);
/*
** ===================================================================
**     Method      :  CLS1_ReadChar (component Shell)
**     Description :
**         Reads a character (blocking)
**     Parameters  :
**         NAME            - DESCRIPTION
**       * c               - Pointer to character to be used to store the
**                           result
**     Returns     : Nothing
** ===================================================================
*/

void CLS1_SendChar(uint8_t ch);
/*
** ===================================================================
**     Method      :  CLS1_SendChar (component Shell)
**     Description :
**         Sends a character (blocking)
**     Parameters  :
**         NAME            - DESCRIPTION
**         ch              - character to be sent
**     Returns     : Nothing
** ===================================================================
*/

bool CLS1_KeyPressed(void);
/*
** ===================================================================
**     Method      :  CLS1_KeyPressed (component Shell)
**     Description :
**         Checks if a key has been pressed (a character is present in
**         the input buffer)
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void CLS1_Deinit(void);
/*
** ===================================================================
**     Method      :  CLS1_Deinit (component Shell)
**     Description :
**         De-Initializes the module, especially frees the mutex
**         semaphore if an RTOS is used.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void* CLS1_GetSemaphore(void);
/*
** ===================================================================
**     Method      :  CLS1_GetSemaphore (component Shell)
**     Description :
**         Return the semaphore of the shell.
**     Parameters  : None
**     Returns     :
**         ---             - semaphore, or NULL if not used or not
**                           allocated.
** ===================================================================
*/

uint8_t CLS1_ReadAndParseWithCommandTable(uint8_t *cmdBuf, size_t cmdBufSize, CLS1_ConstStdIOType *io, CLS1_ConstParseCommandCallback *parseCallback);
/*
** ===================================================================
**     Method      :  CLS1_ReadAndParseWithCommandTable (component Shell)
**     Description :
**         Reads characters from the default input channel and appends
**         it to the buffer. Once a new line has been detected, the
**         line will be parsed using the handlers in the table.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmdBuf          - Pointer to buffer provided by the
**                           caller where to store the command to read
**                           in. Characters will be appended, so make
**                           sure string buffer is initialized with a
**                           zero byte at the beginning.
**         cmdBufSize      - Size of buffer
**       * io              - Pointer to I/O channels to be used
**       * parseCallback   - Pointer to callback
**                           table provided by the user application to
**                           parse commands. The table has a NULL
**                           sentinel.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t CLS1_IterateTable(const uint8_t *cmd, bool *handled, CLS1_ConstStdIOType *io, CLS1_ConstParseCommandCallback *parserTable);
/*
** ===================================================================
**     Method      :  CLS1_IterateTable (component Shell)
**     Description :
**         Parses a shell command. It handles first the internal
**         commands and will call the provided callback.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command string
**       * handled         - Pointer to boolean which is set to
**                           TRUE if a command parser has handled the
**                           command.
**       * io              - Pointer to I/O callbacks
**       * parserTable     - Pointer to callback which
**                           will be called to parse commands in the
**                           user application, or NULL if not used.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t CLS1_SetStdio(CLS1_ConstStdIOTypePtr stdio);
/*
** ===================================================================
**     Method      :  CLS1_SetStdio (component Shell)
**     Description :
**         Sets an StdIO structure which is returned by GetStdio()
**     Parameters  :
**         NAME            - DESCRIPTION
**         stdio           - New stdio structure to be used.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void CLS1_SendData(const uint8_t *data, uint16_t dataSize, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendData (component Shell)
**     Description :
**         Sends data using an I/O function. Unlike SendStr(), with
**         this method it is possible to send binary data, including
**         zero bytes.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * data            - Pointer to data to be sent
**         dataSize        - Number of bytes to be sent.
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

bool CLS1_IsHistoryCharacter(uint8_t ch, uint8_t *cmdBuf, size_t cmdBufIdx, bool *isPrev);
/*
** ===================================================================
**     Method      :  CLS1_IsHistoryCharacter (component Shell)
**     Description :
**         Returns TRUE if character is a history character
**     Parameters  :
**         NAME            - DESCRIPTION
**         ch              - current command character
**       * cmdBuf          - Pointer to command line buffer read
**                           so far
**         cmdBufIdx       - Index of character into cmdBuf
**       * isPrev          - Pointer to return value, if it is
**                           'previous' history or not
**     Returns     :
**         ---             - TRUE if it is an accepted history character
** ===================================================================
*/

void CLS1_SendCh(uint8_t ch, CLS1_StdIO_OutErr_FctType io);
/*
** ===================================================================
**     Method      :  CLS1_SendCh (component Shell)
**     Description :
**         Prints a character using an I/O function
**     Parameters  :
**         NAME            - DESCRIPTION
**         ch              - Character to send
**         io              - I/O callbacks to be used for printing.
**     Returns     : Nothing
** ===================================================================
*/

unsigned CLS1_printf(const char *fmt, ...);
/*
** ===================================================================
**     Method      :  CLS1_printf (component Shell)
**     Description :
**         Printf() style function using XFormat component, using the
**         shell default I/O handler.
**     Parameters  :
**         NAME            - DESCRIPTION
**         fmt             - printf style format string
**     Returns     :
**         ---             - number of characters written
** ===================================================================
*/

void CLS1_printfPutChar(void *arg, char c);
/*
** ===================================================================
**     Method      :  CLS1_printfPutChar (component Shell)
**
**     Description :
**         Helper routine for printf
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

unsigned CLS1_printfIO(CLS1_ConstStdIOType *io, const char *fmt, ...);
/*
** ===================================================================
**     Method      :  CLS1_printfIO (component Shell)
**     Description :
**         Printf() style function using XFormat component, using a
**         custom I/O handler.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * io              - Pointer to 
**         fmt             - printf style format string
**     Returns     :
**         ---             - number of characters written
** ===================================================================
*/

void CLS1_SendCharFct(uint8_t ch, uint8_t (*fct)(uint8_t ch));
/*
** ===================================================================
**     Method      :  CLS1_SendCharFct (component Shell)
**     Description :
**         Method to send a character using a standard I/O handle.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ch              - character to be sent
**       * fct             - Function pointer to output function: takes
**                           a byte to write and returns error code.
**     Returns     : Nothing
** ===================================================================
*/

/* END CLS1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif
/* ifndef __CLS1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
