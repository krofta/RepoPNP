/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Vectors.c
**     Project     : tinyk20_PNP_V1
**     Processor   : MK20DN128VFT5
**     Version     : Component 01.001, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-28, 21:48, # CodeGen: 48
**     Abstract    :
**
**     Settings    :
**
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Vectors.c                                                  
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Vectors_module Vectors module documentation
**  @{
*/         

  #include "Cpu.h"
  #include "LED1.h"
  #include "LEDpin1.h"
  #include "BitIoLdd1.h"
  #include "MCUC1.h"
  #include "SW_FWD.h"
  #include "BitIoLdd2.h"
  #include "SW_REV.h"
  #include "BitIoLdd3.h"
  #include "SW_MSW.h"
  #include "BitIoLdd4.h"
  #include "ENC1.h"
  #include "BitIoLdd5.h"
  #include "PWMA.h"
  #include "PwmLdd1.h"
  #include "TU1.h"
  #include "DIRA.h"
  #include "BitIoLdd6.h"
  #include "DIRB.h"
  #include "BitIoLdd7.h"
  #include "PWMB.h"
  #include "PwmLdd2.h"
  #include "HMODE.h"
  #include "BitIoLdd8.h"
  #include "FRTOS1.h"
  #include "UTIL1.h"
  #include "WAIT1.h"
  #include "CLS1.h"
  #include "XF1.h"
  #include "CS1.h"
  #include "LED2.h"
  #include "LEDpin2.h"
  #include "BitIoLdd9.h"
  #include "AS1.h"
  #include "ASerialLdd1.h"
  #include "TGT_SWD_OE.h"
  #include "BitIoLdd10.h"
  #include "HF1.h"
  #include "TU2.h"
  #include "Events.h"


  /* ISR prototype */
  extern uint32_t __SP_INIT;
  extern
  #ifdef __cplusplus
  "C"
  #endif
  void __thumb_startup( void );
  
  
  /*lint -esym(765,__vect_table) Disable MISRA rule (8.10) checking for symbols (__vect_table). Definition of the interrupt vector table placed by linker on a predefined location. */
  /*lint -save  -e926 -e927 -e928 -e929 Disable MISRA rule (11.4) checking. Need to explicitly cast pointers to the general ISR for Interrupt vector table */
  
  __attribute__ ((section (".vectortable"))) const tVectorTable __vect_table = { /* Interrupt vector table */
  
    /* ISR name                             No. Address      Pri Name                          Description */
    &__SP_INIT,                        /* 0x00  0x00000000   -   ivINT_Initial_Stack_Pointer   used by PE */
    {
    (tIsrFunc)&__thumb_startup,        /* 0x01  0x00000004   -   ivINT_Initial_Program_Counter used by PE */
    (tIsrFunc)&Cpu_INT_NMIInterrupt,   /* 0x02  0x00000008   -2   ivINT_NMI                     used by PE */
    (tIsrFunc)&HF1_HardFaultHandler,   /* 0x03  0x0000000C   -1   ivINT_Hard_Fault              used by PE */
    (tIsrFunc)&Cpu_ivINT_Mem_Manage_Fault, /* 0x04  0x00000010   -   ivINT_Mem_Manage_Fault        unused by PE */
    (tIsrFunc)&Cpu_ivINT_Bus_Fault,    /* 0x05  0x00000014   -   ivINT_Bus_Fault               unused by PE */
    (tIsrFunc)&Cpu_ivINT_Usage_Fault,  /* 0x06  0x00000018   -   ivINT_Usage_Fault             unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved7,    /* 0x07  0x0000001C   -   ivINT_Reserved7               unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved8,    /* 0x08  0x00000020   -   ivINT_Reserved8               unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved9,    /* 0x09  0x00000024   -   ivINT_Reserved9               unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved10,   /* 0x0A  0x00000028   -   ivINT_Reserved10              unused by PE */
    (tIsrFunc)&vPortSVCHandler,        /* 0x0B  0x0000002C   -   ivINT_SVCall                  used by PE */
    (tIsrFunc)&Cpu_ivINT_DebugMonitor, /* 0x0C  0x00000030   -   ivINT_DebugMonitor            unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved13,   /* 0x0D  0x00000034   -   ivINT_Reserved13              unused by PE */
    (tIsrFunc)&vPortPendSVHandler,     /* 0x0E  0x00000038   -   ivINT_PendableSrvReq          used by PE */
    (tIsrFunc)&vPortTickHandler,       /* 0x0F  0x0000003C   -   ivINT_SysTick                 used by PE */
    (tIsrFunc)&Cpu_ivINT_DMA0,         /* 0x10  0x00000040   -   ivINT_DMA0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_DMA1,         /* 0x11  0x00000044   -   ivINT_DMA1                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_DMA2,         /* 0x12  0x00000048   -   ivINT_DMA2                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_DMA3,         /* 0x13  0x0000004C   -   ivINT_DMA3                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_DMA_Error,    /* 0x14  0x00000050   -   ivINT_DMA_Error               unused by PE */
    (tIsrFunc)&Cpu_ivINT_Reserved21,   /* 0x15  0x00000054   -   ivINT_Reserved21              unused by PE */
    (tIsrFunc)&Cpu_ivINT_FTFL,         /* 0x16  0x00000058   -   ivINT_FTFL                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_Read_Collision, /* 0x17  0x0000005C   -   ivINT_Read_Collision          unused by PE */
    (tIsrFunc)&Cpu_ivINT_LVD_LVW,      /* 0x18  0x00000060   -   ivINT_LVD_LVW                 unused by PE */
    (tIsrFunc)&Cpu_ivINT_LLW,          /* 0x19  0x00000064   -   ivINT_LLW                     unused by PE */
    (tIsrFunc)&Cpu_ivINT_Watchdog,     /* 0x1A  0x00000068   -   ivINT_Watchdog                unused by PE */
    (tIsrFunc)&Cpu_ivINT_I2C0,         /* 0x1B  0x0000006C   -   ivINT_I2C0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_SPI0,         /* 0x1C  0x00000070   -   ivINT_SPI0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_I2S0_Tx,      /* 0x1D  0x00000074   -   ivINT_I2S0_Tx                 unused by PE */
    (tIsrFunc)&Cpu_ivINT_I2S0_Rx,      /* 0x1E  0x00000078   -   ivINT_I2S0_Rx                 unused by PE */
    (tIsrFunc)&Cpu_ivINT_UART0_LON,    /* 0x1F  0x0000007C   -   ivINT_UART0_LON               unused by PE */
    (tIsrFunc)&ASerialLdd1_Interrupt,  /* 0x20  0x00000080   8   ivINT_UART0_RX_TX             used by PE */
    (tIsrFunc)&ASerialLdd1_Interrupt,  /* 0x21  0x00000084   8   ivINT_UART0_ERR               used by PE */
    (tIsrFunc)&Cpu_ivINT_UART1_RX_TX,  /* 0x22  0x00000088   -   ivINT_UART1_RX_TX             unused by PE */
    (tIsrFunc)&Cpu_ivINT_UART1_ERR,    /* 0x23  0x0000008C   -   ivINT_UART1_ERR               unused by PE */
    (tIsrFunc)&Cpu_ivINT_UART2_RX_TX,  /* 0x24  0x00000090   -   ivINT_UART2_RX_TX             unused by PE */
    (tIsrFunc)&Cpu_ivINT_UART2_ERR,    /* 0x25  0x00000094   -   ivINT_UART2_ERR               unused by PE */
    (tIsrFunc)&Cpu_ivINT_ADC0,         /* 0x26  0x00000098   -   ivINT_ADC0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_CMP0,         /* 0x27  0x0000009C   -   ivINT_CMP0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_CMP1,         /* 0x28  0x000000A0   -   ivINT_CMP1                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_FTM0,         /* 0x29  0x000000A4   -   ivINT_FTM0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_FTM1,         /* 0x2A  0x000000A8   -   ivINT_FTM1                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_CMT,          /* 0x2B  0x000000AC   -   ivINT_CMT                     unused by PE */
    (tIsrFunc)&Cpu_ivINT_RTC,          /* 0x2C  0x000000B0   -   ivINT_RTC                     unused by PE */
    (tIsrFunc)&Cpu_ivINT_RTC_Seconds,  /* 0x2D  0x000000B4   -   ivINT_RTC_Seconds             unused by PE */
    (tIsrFunc)&Cpu_ivINT_PIT0,         /* 0x2E  0x000000B8   -   ivINT_PIT0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_PIT1,         /* 0x2F  0x000000BC   -   ivINT_PIT1                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_PIT2,         /* 0x30  0x000000C0   -   ivINT_PIT2                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_PIT3,         /* 0x31  0x000000C4   -   ivINT_PIT3                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_PDB0,         /* 0x32  0x000000C8   -   ivINT_PDB0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_USB0,         /* 0x33  0x000000CC   -   ivINT_USB0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_USBDCD,       /* 0x34  0x000000D0   -   ivINT_USBDCD                  unused by PE */
    (tIsrFunc)&Cpu_ivINT_TSI0,         /* 0x35  0x000000D4   -   ivINT_TSI0                    unused by PE */
    (tIsrFunc)&Cpu_ivINT_MCG,          /* 0x36  0x000000D8   -   ivINT_MCG                     unused by PE */
    (tIsrFunc)&Cpu_ivINT_LPTimer,      /* 0x37  0x000000DC   -   ivINT_LPTimer                 unused by PE */
    (tIsrFunc)&Cpu_ivINT_PORTA,        /* 0x38  0x000000E0   -   ivINT_PORTA                   unused by PE */
    (tIsrFunc)&Cpu_ivINT_PORTB,        /* 0x39  0x000000E4   -   ivINT_PORTB                   unused by PE */
    (tIsrFunc)&Cpu_ivINT_PORTC,        /* 0x3A  0x000000E8   -   ivINT_PORTC                   unused by PE */
    (tIsrFunc)&Cpu_ivINT_PORTD,        /* 0x3B  0x000000EC   -   ivINT_PORTD                   unused by PE */
    (tIsrFunc)&Cpu_ivINT_PORTE,        /* 0x3C  0x000000F0   -   ivINT_PORTE                   unused by PE */
    (tIsrFunc)&Cpu_ivINT_SWI           /* 0x3D  0x000000F4   -   ivINT_SWI                     unused by PE */
    }
  };
  /*lint -restore Enable MISRA rule (11.4) checking. */
  

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
