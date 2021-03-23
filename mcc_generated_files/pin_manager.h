/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1503
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set FB0 aliases
#define FB0_TRIS                 TRISAbits.TRISA0
#define FB0_LAT                  LATAbits.LATA0
#define FB0_PORT                 PORTAbits.RA0
#define FB0_WPU                  WPUAbits.WPUA0
#define FB0_ANS                  ANSELAbits.ANSA0
#define FB0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define FB0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define FB0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define FB0_GetValue()           PORTAbits.RA0
#define FB0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define FB0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define FB0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define FB0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define FB0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define FB0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 aliases
#define RA2_TRIS                 TRISAbits.TRISA2
#define RA2_LAT                  LATAbits.LATA2
#define RA2_PORT                 PORTAbits.RA2
#define RA2_WPU                  WPUAbits.WPUA2
#define RA2_ANS                  ANSELAbits.ANSA2
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()           PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set MOTOR aliases
#define MOTOR_TRIS                 TRISAbits.TRISA5
#define MOTOR_LAT                  LATAbits.LATA5
#define MOTOR_PORT                 PORTAbits.RA5
#define MOTOR_WPU                  WPUAbits.WPUA5
#define MOTOR_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define MOTOR_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define MOTOR_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define MOTOR_GetValue()           PORTAbits.RA5
#define MOTOR_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define MOTOR_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define MOTOR_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define MOTOR_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set NTC aliases
#define NTC_TRIS                 TRISCbits.TRISC0
#define NTC_LAT                  LATCbits.LATC0
#define NTC_PORT                 PORTCbits.RC0
#define NTC_ANS                  ANSELCbits.ANSC0
#define NTC_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define NTC_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define NTC_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define NTC_GetValue()           PORTCbits.RC0
#define NTC_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define NTC_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define NTC_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define NTC_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set TEST aliases
#define TEST_TRIS                 TRISCbits.TRISC1
#define TEST_LAT                  LATCbits.LATC1
#define TEST_PORT                 PORTCbits.RC1
#define TEST_ANS                  ANSELCbits.ANSC1
#define TEST_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define TEST_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define TEST_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define TEST_GetValue()           PORTCbits.RC1
#define TEST_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define TEST_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define TEST_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define TEST_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set ADJ aliases
#define ADJ_TRIS                 TRISCbits.TRISC3
#define ADJ_LAT                  LATCbits.LATC3
#define ADJ_PORT                 PORTCbits.RC3
#define ADJ_ANS                  ANSELCbits.ANSC3
#define ADJ_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define ADJ_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define ADJ_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define ADJ_GetValue()           PORTCbits.RC3
#define ADJ_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define ADJ_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define ADJ_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define ADJ_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC4
#define LED1_LAT                  LATCbits.LATC4
#define LED1_PORT                 PORTCbits.RC4
#define LED1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED1_GetValue()           PORTCbits.RC4
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISCbits.TRISC5
#define LED2_LAT                  LATCbits.LATC5
#define LED2_PORT                 PORTCbits.RC5
#define LED2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED2_GetValue()           PORTCbits.RC5
#define LED2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/