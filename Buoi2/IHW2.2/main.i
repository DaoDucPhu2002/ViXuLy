#line 1 "main.c"
#line 1 "main.c"
#line 1 "C:/MCC18/h/P18f4520.h"

#line 6 "C:/MCC18/h/P18f4520.h"
 


#line 10 "C:/MCC18/h/P18f4520.h"

extern volatile near unsigned char       PORTA;
extern volatile near union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned RA5:1;
    unsigned RA6:1;
    unsigned RA7:1;
  };
  struct {
    unsigned AN0:1;
    unsigned AN1:1;
    unsigned AN2:1;
    unsigned AN3:1;
    unsigned T0CKI:1;
    unsigned AN4:1;
    unsigned OSC2:1;
    unsigned OSC1:1;
  };
  struct {
    unsigned :2;
    unsigned VREFN:1;
    unsigned VREFP:1;
    unsigned :1;
    unsigned SS:1;
    unsigned CLKO:1;
    unsigned CLKI:1;
  };
  struct {
    unsigned :2;
    unsigned CVREF:1;
    unsigned :2;
    unsigned NOT_SS:1;
  };
  struct {
    unsigned :5;
    unsigned LVDIN:1;
  };
} PORTAbits;
extern volatile near unsigned char       PORTB;
extern volatile near union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
  };
  struct {
    unsigned INT0:1;
    unsigned INT1:1;
    unsigned INT2:1;
    unsigned CCP2:1;
    unsigned KBI0:1;
    unsigned KBI1:1;
    unsigned KBI2:1;
    unsigned KBI3:1;
  };
  struct {
    unsigned AN12:1;
    unsigned AN10:1;
    unsigned AN8:1;
    unsigned AN9:1;
    unsigned AN11:1;
    unsigned PGM:1;
    unsigned PGC:1;
    unsigned PGD:1;
  };
} PORTBbits;
extern volatile near unsigned char       PORTC;
extern volatile near union {
  struct {
    unsigned RC0:1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned RC4:1;
    unsigned RC5:1;
    unsigned RC6:1;
    unsigned RC7:1;
  };
  struct {
    unsigned T1OSO:1;
    unsigned T1OSI:1;
    unsigned CCP1:1;
    unsigned SCK:1;
    unsigned SDI:1;
    unsigned SDO:1;
    unsigned TX:1;
    unsigned RX:1;
  };
  struct {
    unsigned T13CKI:1;
    unsigned CCP2:1;
    unsigned :1;
    unsigned SCL:1;
    unsigned SDA:1;
    unsigned :1;
    unsigned CK:1;
    unsigned DT:1;
  };
  struct {
    unsigned T1CKI:1;
  };
} PORTCbits;
extern volatile near unsigned char       PORTD;
extern volatile near union {
  struct {
    unsigned RD0:1;
    unsigned RD1:1;
    unsigned RD2:1;
    unsigned RD3:1;
    unsigned RD4:1;
    unsigned RD5:1;
    unsigned RD6:1;
    unsigned RD7:1;
  };
  struct {
    unsigned PSP0:1;
    unsigned PSP1:1;
    unsigned PSP2:1;
    unsigned PSP3:1;
    unsigned PSP4:1;
    unsigned PSP5:1;
    unsigned PSP6:1;
    unsigned PSP7:1;
  };
  struct {
    unsigned :5;
    unsigned P1B:1;
    unsigned P1C:1;
    unsigned P1D:1;
  };
} PORTDbits;
extern volatile near unsigned char       PORTE;
extern volatile near union {
  struct {
    unsigned RE0:1;
    unsigned RE1:1;
    unsigned RE2:1;
    unsigned RE3:1;
  };
  struct {
    unsigned RD:1;
    unsigned WR:1;
    unsigned CS:1;
    unsigned MCLR:1;
  };
  struct {
    unsigned NOT_RD:1;
    unsigned NOT_WR:1;
    unsigned NOT_CS:1;
    unsigned NOT_MCLR:1;
  };
  struct {
    unsigned :3;
    unsigned VPP:1;
  };
  struct {
    unsigned AN5:1;
    unsigned AN6:1;
    unsigned AN7:1;
  };
} PORTEbits;
extern volatile near unsigned char       LATA;
extern volatile near struct {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned LATA5:1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATAbits;
extern volatile near unsigned char       LATB;
extern volatile near struct {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
} LATBbits;
extern volatile near unsigned char       LATC;
extern volatile near struct {
  unsigned LATC0:1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned LATC5:1;
  unsigned LATC6:1;
  unsigned LATC7:1;
} LATCbits;
extern volatile near unsigned char       LATD;
extern volatile near struct {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
} LATDbits;
extern volatile near unsigned char       LATE;
extern volatile near struct {
  unsigned LATE0:1;
  unsigned LATE1:1;
  unsigned LATE2:1;
} LATEbits;
extern volatile near unsigned char       DDRA;
extern volatile near struct {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
} DDRAbits;
extern volatile near unsigned char       TRISA;
extern volatile near struct {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned TRISA5:1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
} TRISAbits;
extern volatile near unsigned char       DDRB;
extern volatile near struct {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
} DDRBbits;
extern volatile near unsigned char       TRISB;
extern volatile near struct {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
} TRISBbits;
extern volatile near unsigned char       DDRC;
extern volatile near struct {
  unsigned RC0:1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned RC3:1;
  unsigned RC4:1;
  unsigned RC5:1;
  unsigned RC6:1;
  unsigned RC7:1;
} DDRCbits;
extern volatile near unsigned char       TRISC;
extern volatile near struct {
  unsigned TRISC0:1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned TRISC5:1;
  unsigned TRISC6:1;
  unsigned TRISC7:1;
} TRISCbits;
extern volatile near unsigned char       DDRD;
extern volatile near struct {
  unsigned RD0:1;
  unsigned RD1:1;
  unsigned RD2:1;
  unsigned RD3:1;
  unsigned RD4:1;
  unsigned RD5:1;
  unsigned RD6:1;
  unsigned RD7:1;
} DDRDbits;
extern volatile near unsigned char       TRISD;
extern volatile near struct {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
} TRISDbits;
extern volatile near unsigned char       DDRE;
extern volatile near struct {
  unsigned RE0:1;
  unsigned RE1:1;
  unsigned RE2:1;
  unsigned RE3:1;
} DDREbits;
extern volatile near unsigned char       TRISE;
extern volatile near union {
  struct {
    unsigned TRISE0:1;
    unsigned TRISE1:1;
    unsigned TRISE2:1;
  };
  struct {
    unsigned :4;
    unsigned PSPMODE:1;
    unsigned IBOV:1;
    unsigned OBF:1;
    unsigned IBF:1;
  };
} TRISEbits;
extern volatile near unsigned char       OSCTUNE;
extern volatile near struct {
  unsigned TUN0:1;
  unsigned TUN1:1;
  unsigned TUN2:1;
  unsigned TUN3:1;
  unsigned TUN4:1;
  unsigned :1;
  unsigned PLLEN:1;
  unsigned INTSRC:1;
} OSCTUNEbits;
extern volatile near unsigned char       PIE1;
extern volatile near struct {
  unsigned TMR1IE:1;
  unsigned TMR2IE:1;
  unsigned CCP1IE:1;
  unsigned SSPIE:1;
  unsigned TXIE:1;
  unsigned RCIE:1;
  unsigned ADIE:1;
  unsigned PSPIE:1;
} PIE1bits;
extern volatile near unsigned char       PIR1;
extern volatile near struct {
  unsigned TMR1IF:1;
  unsigned TMR2IF:1;
  unsigned CCP1IF:1;
  unsigned SSPIF:1;
  unsigned TXIF:1;
  unsigned RCIF:1;
  unsigned ADIF:1;
  unsigned PSPIF:1;
} PIR1bits;
extern volatile near unsigned char       IPR1;
extern volatile near struct {
  unsigned TMR1IP:1;
  unsigned TMR2IP:1;
  unsigned CCP1IP:1;
  unsigned SSPIP:1;
  unsigned TXIP:1;
  unsigned RCIP:1;
  unsigned ADIP:1;
  unsigned PSPIP:1;
} IPR1bits;
extern volatile near unsigned char       PIE2;
extern volatile near union {
  struct {
    unsigned CCP2IE:1;
    unsigned TMR3IE:1;
    unsigned HLVDIE:1;
    unsigned BCLIE:1;
    unsigned EEIE:1;
    unsigned :1;
    unsigned CMIE:1;
    unsigned OSCFIE:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIE:1;
  };
} PIE2bits;
extern volatile near unsigned char       PIR2;
extern volatile near union {
  struct {
    unsigned CCP2IF:1;
    unsigned TMR3IF:1;
    unsigned HLVDIF:1;
    unsigned BCLIF:1;
    unsigned EEIF:1;
    unsigned :1;
    unsigned CMIF:1;
    unsigned OSCFIF:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIF:1;
  };
} PIR2bits;
extern volatile near unsigned char       IPR2;
extern volatile near union {
  struct {
    unsigned CCP2IP:1;
    unsigned TMR3IP:1;
    unsigned HLVDIP:1;
    unsigned BCLIP:1;
    unsigned EEIP:1;
    unsigned :1;
    unsigned CMIP:1;
    unsigned OSCFIP:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIP:1;
  };
} IPR2bits;
extern volatile near unsigned char       EECON1;
extern volatile near struct {
  unsigned RD:1;
  unsigned WR:1;
  unsigned WREN:1;
  unsigned WRERR:1;
  unsigned FREE:1;
  unsigned :1;
  unsigned CFGS:1;
  unsigned EEPGD:1;
} EECON1bits;
extern volatile near unsigned char       EECON2;
extern volatile near unsigned char       EEDATA;
extern volatile near unsigned char       EEADR;
extern volatile near unsigned char       RCSTA;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned :3;
    unsigned ADDEN:1;
  };
} RCSTAbits;
extern volatile near unsigned char       TXSTA;
extern volatile near struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTAbits;
extern volatile near unsigned char       TXREG;
extern volatile near unsigned char       RCREG;
extern volatile near unsigned char       SPBRG;
extern volatile near unsigned char       SPBRGH;
extern volatile near unsigned char       T3CON;
extern volatile near union {
  struct {
    unsigned TMR3ON:1;
    unsigned TMR3CS:1;
    unsigned T3SYNC:1;
    unsigned T3CCP1:1;
    unsigned T3CKPS0:1;
    unsigned T3CKPS1:1;
    unsigned T3CCP2:1;
    unsigned RD16:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_T3SYNC:1;
  };
} T3CONbits;
extern volatile near unsigned char       TMR3L;
extern volatile near unsigned char       TMR3H;
extern volatile near unsigned char       CMCON;
extern volatile near struct {
  unsigned CM0:1;
  unsigned CM1:1;
  unsigned CM2:1;
  unsigned CIS:1;
  unsigned C1INV:1;
  unsigned C2INV:1;
  unsigned C1OUT:1;
  unsigned C2OUT:1;
} CMCONbits;
extern volatile near unsigned char       CVRCON;
extern volatile near struct {
  unsigned CVR0:1;
  unsigned CVR1:1;
  unsigned CVR2:1;
  unsigned CVR3:1;
  unsigned CVRSS:1;
  unsigned CVRR:1;
  unsigned CVROE:1;
  unsigned CVREN:1;
} CVRCONbits;
extern volatile near unsigned char       ECCP1AS;
extern volatile near struct {
  unsigned PSSBD0:1;
  unsigned PSSBD1:1;
  unsigned PSSAC0:1;
  unsigned PSSAC1:1;
  unsigned ECCPAS0:1;
  unsigned ECCPAS1:1;
  unsigned ECCPAS2:1;
  unsigned ECCPASE:1;
} ECCP1ASbits;
extern volatile near unsigned char       PWM1CON;
extern volatile near struct {
  unsigned PDC0:1;
  unsigned PDC1:1;
  unsigned PDC2:1;
  unsigned PDC3:1;
  unsigned PDC4:1;
  unsigned PDC5:1;
  unsigned PDC6:1;
  unsigned PRSEN:1;
} PWM1CONbits;
extern volatile near unsigned char       BAUDCON;
extern volatile near union {
  struct {
    unsigned ABDEN:1;
    unsigned WUE:1;
    unsigned :1;
    unsigned BRG16:1;
    unsigned SCKP:1;
    unsigned :1;
    unsigned RCIDL:1;
    unsigned ABDOVF:1;
  };
  struct {
    unsigned :6;
    unsigned RCMT:1;
  };
} BAUDCONbits;
extern volatile near unsigned char       BAUDCTL;
extern volatile near union {
  struct {
    unsigned ABDEN:1;
    unsigned WUE:1;
    unsigned :1;
    unsigned BRG16:1;
    unsigned SCKP:1;
    unsigned :1;
    unsigned RCIDL:1;
    unsigned ABDOVF:1;
  };
  struct {
    unsigned :6;
    unsigned RCMT:1;
  };
} BAUDCTLbits;
extern volatile near unsigned char       CCP2CON;
extern volatile near union {
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} CCP2CONbits;
extern volatile near unsigned            CCPR2;
extern volatile near unsigned char       CCPR2L;
extern volatile near unsigned char       CCPR2H;
extern volatile near unsigned char       CCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} CCP1CONbits;
extern volatile near unsigned            CCPR1;
extern volatile near unsigned char       CCPR1L;
extern volatile near unsigned char       CCPR1H;
extern volatile near unsigned char       ADCON2;
extern volatile near struct {
  unsigned ADCS0:1;
  unsigned ADCS1:1;
  unsigned ADCS2:1;
  unsigned ACQT0:1;
  unsigned ACQT1:1;
  unsigned ACQT2:1;
  unsigned :1;
  unsigned ADFM:1;
} ADCON2bits;
extern volatile near unsigned char       ADCON1;
extern volatile near struct {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
  unsigned VCFG0:1;
  unsigned VCFG1:1;
} ADCON1bits;
extern volatile near unsigned char       ADCON0;
extern volatile near union {
  struct {
    unsigned ADON:1;
    unsigned GO:1;
    unsigned CHS0:1;
    unsigned CHS1:1;
    unsigned CHS2:1;
    unsigned CHS3:1;
  };
  struct {
    unsigned :1;
    unsigned DONE:1;
  };
  struct {
    unsigned :1;
    unsigned NOT_DONE:1;
  };
  struct {
    unsigned :1;
    unsigned GO_DONE:1;
  };
} ADCON0bits;
extern volatile near unsigned            ADRES;
extern volatile near unsigned char       ADRESL;
extern volatile near unsigned char       ADRESH;
extern volatile near unsigned char       SSPCON2;
extern volatile near struct {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned ACKSTAT:1;
  unsigned GCEN:1;
} SSPCON2bits;
extern volatile near unsigned char       SSPCON1;
extern volatile near struct {
  unsigned SSPM0:1;
  unsigned SSPM1:1;
  unsigned SSPM2:1;
  unsigned SSPM3:1;
  unsigned CKP:1;
  unsigned SSPEN:1;
  unsigned SSPOV:1;
  unsigned WCOL:1;
} SSPCON1bits;
extern volatile near unsigned char       SSPSTAT;
extern volatile near union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned W:1;
    unsigned :2;
    unsigned A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
} SSPSTATbits;
extern volatile near unsigned char       SSPADD;
extern volatile near unsigned char       SSPBUF;
extern volatile near unsigned char       T2CON;
extern volatile near struct {
  unsigned T2CKPS0:1;
  unsigned T2CKPS1:1;
  unsigned TMR2ON:1;
  unsigned T2OUTPS0:1;
  unsigned T2OUTPS1:1;
  unsigned T2OUTPS2:1;
  unsigned T2OUTPS3:1;
} T2CONbits;
extern volatile near unsigned char       PR2;
extern volatile near unsigned char       TMR2;
extern volatile near unsigned char       T1CON;
extern volatile near union {
  struct {
    unsigned TMR1ON:1;
    unsigned TMR1CS:1;
    unsigned T1SYNC:1;
    unsigned T1OSCEN:1;
    unsigned T1CKPS0:1;
    unsigned T1CKPS1:1;
    unsigned T1RUN:1;
    unsigned RD16:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_T1SYNC:1;
  };
} T1CONbits;
extern volatile near unsigned char       TMR1L;
extern volatile near unsigned char       TMR1H;
extern volatile near unsigned char       RCON;
extern volatile near union {
  struct {
    unsigned BOR:1;
    unsigned POR:1;
    unsigned PD:1;
    unsigned TO:1;
    unsigned RI:1;
    unsigned :1;
    unsigned SBOREN:1;
    unsigned IPEN:1;
  };
  struct {
    unsigned NOT_BOR:1;
    unsigned NOT_POR:1;
    unsigned NOT_PD:1;
    unsigned NOT_TO:1;
    unsigned NOT_RI:1;
  };
} RCONbits;
extern volatile near unsigned char       WDTCON;
extern volatile near union {
  struct {
    unsigned SWDTEN:1;
  };
  struct {
    unsigned SWDTE:1;
  };
} WDTCONbits;
extern volatile near unsigned char       HLVDCON;
extern volatile near union {
  struct {
    unsigned LVDL0:1;
    unsigned LVDL1:1;
    unsigned LVDL2:1;
    unsigned LVDL3:1;
    unsigned LVDEN:1;
    unsigned IRVST:1;
  };
  struct {
    unsigned LVV0:1;
    unsigned LVV1:1;
    unsigned LVV2:1;
    unsigned LVV3:1;
    unsigned :1;
    unsigned BGST:1;
  };
  struct {
    unsigned HLVDL0:1;
    unsigned HLVDL1:1;
    unsigned HLVDL2:1;
    unsigned HLVDL3:1;
    unsigned HLVDEN:1;
    unsigned :2;
    unsigned VDIRMAG:1;
  };
  struct {
    unsigned :5;
    unsigned IVRST:1;
  };
} HLVDCONbits;
extern volatile near unsigned char       LVDCON;
extern volatile near union {
  struct {
    unsigned LVDL0:1;
    unsigned LVDL1:1;
    unsigned LVDL2:1;
    unsigned LVDL3:1;
    unsigned LVDEN:1;
    unsigned IRVST:1;
  };
  struct {
    unsigned LVV0:1;
    unsigned LVV1:1;
    unsigned LVV2:1;
    unsigned LVV3:1;
    unsigned :1;
    unsigned BGST:1;
  };
  struct {
    unsigned HLVDL0:1;
    unsigned HLVDL1:1;
    unsigned HLVDL2:1;
    unsigned HLVDL3:1;
    unsigned HLVDEN:1;
    unsigned :2;
    unsigned VDIRMAG:1;
  };
  struct {
    unsigned :5;
    unsigned IVRST:1;
  };
} LVDCONbits;
extern volatile near unsigned char       OSCCON;
extern volatile near union {
  struct {
    unsigned SCS0:1;
    unsigned SCS1:1;
    unsigned IOFS:1;
    unsigned OSTS:1;
    unsigned IRCF0:1;
    unsigned IRCF1:1;
    unsigned IRCF2:1;
    unsigned IDLEN:1;
  };
  struct {
    unsigned :2;
    unsigned FLTS:1;
  };
} OSCCONbits;
extern volatile near unsigned char       T0CON;
extern volatile near struct {
  unsigned T0PS0:1;
  unsigned T0PS1:1;
  unsigned T0PS2:1;
  unsigned PSA:1;
  unsigned T0SE:1;
  unsigned T0CS:1;
  unsigned T08BIT:1;
  unsigned TMR0ON:1;
} T0CONbits;
extern volatile near unsigned char       TMR0L;
extern volatile near unsigned char       TMR0H;
extern          near unsigned char       STATUS;
extern          near struct {
  unsigned C:1;
  unsigned DC:1;
  unsigned Z:1;
  unsigned OV:1;
  unsigned N:1;
} STATUSbits;
extern          near unsigned            FSR2;
extern          near unsigned char       FSR2L;
extern          near unsigned char       FSR2H;
extern volatile near unsigned char       PLUSW2;
extern volatile near unsigned char       PREINC2;
extern volatile near unsigned char       POSTDEC2;
extern volatile near unsigned char       POSTINC2;
extern          near unsigned char       INDF2;
extern          near unsigned char       BSR;
extern          near unsigned            FSR1;
extern          near unsigned char       FSR1L;
extern          near unsigned char       FSR1H;
extern volatile near unsigned char       PLUSW1;
extern volatile near unsigned char       PREINC1;
extern volatile near unsigned char       POSTDEC1;
extern volatile near unsigned char       POSTINC1;
extern          near unsigned char       INDF1;
extern          near unsigned char       W;
extern          near unsigned char       WREG;
extern          near unsigned            FSR0;
extern          near unsigned char       FSR0L;
extern          near unsigned char       FSR0H;
extern volatile near unsigned char       PLUSW0;
extern volatile near unsigned char       PREINC0;
extern volatile near unsigned char       POSTDEC0;
extern volatile near unsigned char       POSTINC0;
extern          near unsigned char       INDF0;
extern volatile near unsigned char       INTCON3;
extern volatile near union {
  struct {
    unsigned INT1F:1;
    unsigned INT2F:1;
    unsigned :1;
    unsigned INT1E:1;
    unsigned INT2E:1;
    unsigned :1;
    unsigned INT1P:1;
    unsigned INT2P:1;
  };
  struct {
    unsigned INT1IF:1;
    unsigned INT2IF:1;
    unsigned :1;
    unsigned INT1IE:1;
    unsigned INT2IE:1;
    unsigned :1;
    unsigned INT1IP:1;
    unsigned INT2IP:1;
  };
} INTCON3bits;
extern volatile near unsigned char       INTCON2;
extern volatile near union {
  struct {
    unsigned RBIP:1;
    unsigned :1;
    unsigned TMR0IP:1;
    unsigned :1;
    unsigned INTEDG2:1;
    unsigned INTEDG1:1;
    unsigned INTEDG0:1;
    unsigned RBPU:1;
  };
  struct {
    unsigned :7;
    unsigned NOT_RBPU:1;
  };
} INTCON2bits;
extern volatile near unsigned char       INTCON;
extern volatile near union {
  struct {
    unsigned RBIF:1;
    unsigned INT0F:1;
    unsigned TMR0IF:1;
    unsigned RBIE:1;
    unsigned INT0E:1;
    unsigned TMR0IE:1;
    unsigned PEIE:1;
    unsigned GIE:1;
  };
  struct {
    unsigned :1;
    unsigned INT0IF:1;
    unsigned T0IF:1;
    unsigned :1;
    unsigned INT0IE:1;
    unsigned T0IE:1;
    unsigned GIEL:1;
    unsigned GIEH:1;
  };
} INTCONbits;
extern          near unsigned            PROD;
extern          near unsigned char       PRODL;
extern          near unsigned char       PRODH;
extern volatile near unsigned char       TABLAT;
extern volatile near unsigned short long TBLPTR;
extern volatile near unsigned char       TBLPTRL;
extern volatile near unsigned char       TBLPTRH;
extern volatile near unsigned char       TBLPTRU;
extern volatile near unsigned short long PC;
extern volatile near unsigned char       PCL;
extern volatile near unsigned char       PCLATH;
extern volatile near unsigned char       PCLATU;
extern volatile near unsigned char       STKPTR;
extern volatile near union {
  struct {
    unsigned SP0:1;
    unsigned SP1:1;
    unsigned SP2:1;
    unsigned SP3:1;
    unsigned SP4:1;
    unsigned :1;
    unsigned STKUNF:1;
    unsigned STKFUL:1;
  };
  struct {
    unsigned :7;
    unsigned STKOVF:1;
  };
} STKPTRbits;
extern          near unsigned short long TOS;
extern          near unsigned char       TOSL;
extern          near unsigned char       TOSH;
extern          near unsigned char       TOSU;



#line 1015 "C:/MCC18/h/P18f4520.h"
 
#line 1017 "C:/MCC18/h/P18f4520.h"
#line 1018 "C:/MCC18/h/P18f4520.h"


#line 1021 "C:/MCC18/h/P18f4520.h"
 
#line 1023 "C:/MCC18/h/P18f4520.h"
#line 1024 "C:/MCC18/h/P18f4520.h"
#line 1025 "C:/MCC18/h/P18f4520.h"
#line 1026 "C:/MCC18/h/P18f4520.h"

#line 1028 "C:/MCC18/h/P18f4520.h"
#line 1029 "C:/MCC18/h/P18f4520.h"
#line 1030 "C:/MCC18/h/P18f4520.h"
#line 1031 "C:/MCC18/h/P18f4520.h"
#line 1032 "C:/MCC18/h/P18f4520.h"


#line 1036 "C:/MCC18/h/P18f4520.h"
 
#line 1038 "C:/MCC18/h/P18f4520.h"


#line 1041 "C:/MCC18/h/P18f4520.h"
#line 1 "main.c"

#line 1 "C:/MCC18/h/delays.h"

#line 3 "C:/MCC18/h/delays.h"


#line 13 "C:/MCC18/h/delays.h"
 

 
#line 1 "C:/MCC18/h/p18cxxx.h"

#line 3 "C:/MCC18/h/p18cxxx.h"

#line 5 "C:/MCC18/h/p18cxxx.h"
#line 7 "C:/MCC18/h/p18cxxx.h"
#line 9 "C:/MCC18/h/p18cxxx.h"
#line 11 "C:/MCC18/h/p18cxxx.h"
#line 13 "C:/MCC18/h/p18cxxx.h"
#line 15 "C:/MCC18/h/p18cxxx.h"
#line 17 "C:/MCC18/h/p18cxxx.h"
#line 19 "C:/MCC18/h/p18cxxx.h"
#line 21 "C:/MCC18/h/p18cxxx.h"
#line 23 "C:/MCC18/h/p18cxxx.h"
#line 25 "C:/MCC18/h/p18cxxx.h"
#line 27 "C:/MCC18/h/p18cxxx.h"
#line 29 "C:/MCC18/h/p18cxxx.h"
#line 31 "C:/MCC18/h/p18cxxx.h"
#line 33 "C:/MCC18/h/p18cxxx.h"
#line 35 "C:/MCC18/h/p18cxxx.h"
#line 37 "C:/MCC18/h/p18cxxx.h"
#line 39 "C:/MCC18/h/p18cxxx.h"
#line 41 "C:/MCC18/h/p18cxxx.h"
#line 43 "C:/MCC18/h/p18cxxx.h"
#line 45 "C:/MCC18/h/p18cxxx.h"
#line 47 "C:/MCC18/h/p18cxxx.h"
#line 49 "C:/MCC18/h/p18cxxx.h"
#line 51 "C:/MCC18/h/p18cxxx.h"
#line 53 "C:/MCC18/h/p18cxxx.h"
#line 55 "C:/MCC18/h/p18cxxx.h"
#line 57 "C:/MCC18/h/p18cxxx.h"
#line 59 "C:/MCC18/h/p18cxxx.h"
#line 61 "C:/MCC18/h/p18cxxx.h"
#line 63 "C:/MCC18/h/p18cxxx.h"
#line 65 "C:/MCC18/h/p18cxxx.h"
#line 67 "C:/MCC18/h/p18cxxx.h"
#line 69 "C:/MCC18/h/p18cxxx.h"
#line 71 "C:/MCC18/h/p18cxxx.h"
#line 73 "C:/MCC18/h/p18cxxx.h"
#line 75 "C:/MCC18/h/p18cxxx.h"
#line 77 "C:/MCC18/h/p18cxxx.h"
#line 79 "C:/MCC18/h/p18cxxx.h"
#line 81 "C:/MCC18/h/p18cxxx.h"
#line 83 "C:/MCC18/h/p18cxxx.h"
#line 85 "C:/MCC18/h/p18cxxx.h"
#line 87 "C:/MCC18/h/p18cxxx.h"
#line 89 "C:/MCC18/h/p18cxxx.h"
#line 91 "C:/MCC18/h/p18cxxx.h"
#line 93 "C:/MCC18/h/p18cxxx.h"
#line 95 "C:/MCC18/h/p18cxxx.h"
#line 97 "C:/MCC18/h/p18cxxx.h"
#line 99 "C:/MCC18/h/p18cxxx.h"
#line 101 "C:/MCC18/h/p18cxxx.h"
#line 103 "C:/MCC18/h/p18cxxx.h"
#line 105 "C:/MCC18/h/p18cxxx.h"
#line 107 "C:/MCC18/h/p18cxxx.h"
#line 109 "C:/MCC18/h/p18cxxx.h"
#line 111 "C:/MCC18/h/p18cxxx.h"
#line 113 "C:/MCC18/h/p18cxxx.h"
#line 115 "C:/MCC18/h/p18cxxx.h"
#line 117 "C:/MCC18/h/p18cxxx.h"
#line 119 "C:/MCC18/h/p18cxxx.h"
#line 121 "C:/MCC18/h/p18cxxx.h"
#line 123 "C:/MCC18/h/p18cxxx.h"
#line 125 "C:/MCC18/h/p18cxxx.h"
#line 127 "C:/MCC18/h/p18cxxx.h"
#line 129 "C:/MCC18/h/p18cxxx.h"
#line 131 "C:/MCC18/h/p18cxxx.h"
#line 1 "C:/MCC18/h/p18f4520.h"

#line 6 "C:/MCC18/h/p18f4520.h"
 


#line 1015 "C:/MCC18/h/p18f4520.h"

#line 1021 "C:/MCC18/h/p18f4520.h"

#line 1036 "C:/MCC18/h/p18f4520.h"
#line 1041 "C:/MCC18/h/p18f4520.h"
#line 131 "C:/MCC18/h/p18cxxx.h"

#line 133 "C:/MCC18/h/p18cxxx.h"
#line 135 "C:/MCC18/h/p18cxxx.h"
#line 137 "C:/MCC18/h/p18cxxx.h"
#line 139 "C:/MCC18/h/p18cxxx.h"
#line 141 "C:/MCC18/h/p18cxxx.h"
#line 143 "C:/MCC18/h/p18cxxx.h"
#line 145 "C:/MCC18/h/p18cxxx.h"
#line 147 "C:/MCC18/h/p18cxxx.h"
#line 149 "C:/MCC18/h/p18cxxx.h"
#line 151 "C:/MCC18/h/p18cxxx.h"
#line 153 "C:/MCC18/h/p18cxxx.h"
#line 155 "C:/MCC18/h/p18cxxx.h"
#line 157 "C:/MCC18/h/p18cxxx.h"
#line 159 "C:/MCC18/h/p18cxxx.h"
#line 161 "C:/MCC18/h/p18cxxx.h"
#line 163 "C:/MCC18/h/p18cxxx.h"
#line 165 "C:/MCC18/h/p18cxxx.h"
#line 167 "C:/MCC18/h/p18cxxx.h"
#line 169 "C:/MCC18/h/p18cxxx.h"
#line 171 "C:/MCC18/h/p18cxxx.h"
#line 173 "C:/MCC18/h/p18cxxx.h"
#line 175 "C:/MCC18/h/p18cxxx.h"
#line 177 "C:/MCC18/h/p18cxxx.h"
#line 179 "C:/MCC18/h/p18cxxx.h"
#line 181 "C:/MCC18/h/p18cxxx.h"
#line 183 "C:/MCC18/h/p18cxxx.h"
#line 185 "C:/MCC18/h/p18cxxx.h"
#line 187 "C:/MCC18/h/p18cxxx.h"
#line 189 "C:/MCC18/h/p18cxxx.h"
#line 191 "C:/MCC18/h/p18cxxx.h"
#line 193 "C:/MCC18/h/p18cxxx.h"
#line 195 "C:/MCC18/h/p18cxxx.h"
#line 197 "C:/MCC18/h/p18cxxx.h"
#line 199 "C:/MCC18/h/p18cxxx.h"
#line 201 "C:/MCC18/h/p18cxxx.h"
#line 203 "C:/MCC18/h/p18cxxx.h"
#line 205 "C:/MCC18/h/p18cxxx.h"
#line 207 "C:/MCC18/h/p18cxxx.h"
#line 209 "C:/MCC18/h/p18cxxx.h"
#line 211 "C:/MCC18/h/p18cxxx.h"
#line 213 "C:/MCC18/h/p18cxxx.h"
#line 215 "C:/MCC18/h/p18cxxx.h"
#line 217 "C:/MCC18/h/p18cxxx.h"
#line 219 "C:/MCC18/h/p18cxxx.h"
#line 221 "C:/MCC18/h/p18cxxx.h"
#line 223 "C:/MCC18/h/p18cxxx.h"
#line 225 "C:/MCC18/h/p18cxxx.h"
#line 227 "C:/MCC18/h/p18cxxx.h"
#line 229 "C:/MCC18/h/p18cxxx.h"
#line 231 "C:/MCC18/h/p18cxxx.h"
#line 233 "C:/MCC18/h/p18cxxx.h"
#line 235 "C:/MCC18/h/p18cxxx.h"
#line 237 "C:/MCC18/h/p18cxxx.h"
#line 239 "C:/MCC18/h/p18cxxx.h"
#line 241 "C:/MCC18/h/p18cxxx.h"
#line 243 "C:/MCC18/h/p18cxxx.h"
#line 245 "C:/MCC18/h/p18cxxx.h"
#line 247 "C:/MCC18/h/p18cxxx.h"
#line 249 "C:/MCC18/h/p18cxxx.h"
#line 251 "C:/MCC18/h/p18cxxx.h"
#line 253 "C:/MCC18/h/p18cxxx.h"
#line 255 "C:/MCC18/h/p18cxxx.h"
#line 257 "C:/MCC18/h/p18cxxx.h"
#line 259 "C:/MCC18/h/p18cxxx.h"
#line 261 "C:/MCC18/h/p18cxxx.h"
#line 263 "C:/MCC18/h/p18cxxx.h"
#line 265 "C:/MCC18/h/p18cxxx.h"
#line 267 "C:/MCC18/h/p18cxxx.h"
#line 269 "C:/MCC18/h/p18cxxx.h"
#line 271 "C:/MCC18/h/p18cxxx.h"
#line 273 "C:/MCC18/h/p18cxxx.h"
#line 275 "C:/MCC18/h/p18cxxx.h"
#line 277 "C:/MCC18/h/p18cxxx.h"
#line 279 "C:/MCC18/h/p18cxxx.h"
#line 281 "C:/MCC18/h/p18cxxx.h"
#line 283 "C:/MCC18/h/p18cxxx.h"
#line 285 "C:/MCC18/h/p18cxxx.h"
#line 287 "C:/MCC18/h/p18cxxx.h"
#line 289 "C:/MCC18/h/p18cxxx.h"
#line 291 "C:/MCC18/h/p18cxxx.h"
#line 293 "C:/MCC18/h/p18cxxx.h"
#line 295 "C:/MCC18/h/p18cxxx.h"
#line 297 "C:/MCC18/h/p18cxxx.h"
#line 299 "C:/MCC18/h/p18cxxx.h"
#line 301 "C:/MCC18/h/p18cxxx.h"
#line 303 "C:/MCC18/h/p18cxxx.h"
#line 305 "C:/MCC18/h/p18cxxx.h"
#line 307 "C:/MCC18/h/p18cxxx.h"
#line 309 "C:/MCC18/h/p18cxxx.h"
#line 311 "C:/MCC18/h/p18cxxx.h"
#line 313 "C:/MCC18/h/p18cxxx.h"
#line 315 "C:/MCC18/h/p18cxxx.h"
#line 317 "C:/MCC18/h/p18cxxx.h"
#line 319 "C:/MCC18/h/p18cxxx.h"
#line 321 "C:/MCC18/h/p18cxxx.h"
#line 323 "C:/MCC18/h/p18cxxx.h"
#line 325 "C:/MCC18/h/p18cxxx.h"
#line 327 "C:/MCC18/h/p18cxxx.h"
#line 329 "C:/MCC18/h/p18cxxx.h"
#line 331 "C:/MCC18/h/p18cxxx.h"
#line 333 "C:/MCC18/h/p18cxxx.h"

#line 335 "C:/MCC18/h/p18cxxx.h"
#line 16 "C:/MCC18/h/delays.h"


 
#line 20 "C:/MCC18/h/delays.h"

#line 22 "C:/MCC18/h/delays.h"

 
#line 25 "C:/MCC18/h/delays.h"


#line 31 "C:/MCC18/h/delays.h"
 
void Delay10TCYx(auto  unsigned char);


#line 38 "C:/MCC18/h/delays.h"
 
void Delay100TCYx(auto  unsigned char);


#line 45 "C:/MCC18/h/delays.h"
 
void Delay1KTCYx(auto  unsigned char);


#line 52 "C:/MCC18/h/delays.h"
 
void Delay10KTCYx(auto  unsigned char);

#line 56 "C:/MCC18/h/delays.h"
#line 2 "main.c"

#line 1 "C:/MCC18/h/math.h"
 

#line 4 "C:/MCC18/h/math.h"

typedef float float_t;
typedef float double_t;

#line 9 "C:/MCC18/h/math.h"
#line 10 "C:/MCC18/h/math.h"
#line 11 "C:/MCC18/h/math.h"

float fabs (auto float x);
float ldexp (auto float x, auto int n);
float exp (auto float f);
float sqrt (auto float x);
float asin (auto float x);
float acos (auto float x);
float atan2 (auto float y, auto float x);
float atan (auto float x);
float sin (auto float x);
float cos (auto float x);
float tan (auto float x);
float sinh (auto float x);
float cosh (auto float x);
float tanh (auto float x);
float frexp (auto float x, auto int *pexp);
float log10 (auto float x);
float log (auto float x);
float pow (auto float x, auto float y);
float ceil (auto float x);
float floor (auto float x);
float modf (auto float x, auto float *ipart);
float fmod (auto float x, auto float y);

float mchptoieee (auto unsigned long v);
unsigned long ieeetomchp (auto float v);

#line 39 "C:/MCC18/h/math.h"
#line 3 "main.c"


#pragma config OSC = HS
#pragma config MCLRE = ON


#line 10 "main.c"
int i;
int dem=0;

int TimSoDu(int Number);

int TimSoDu(int Number)
{
	int soDu = 0;
	soDu = Number%12;
	return soDu;
}

void main(void)
{
	TRISB = 0b00010000;
	ADCON1 = 0x0f;
	
	while(1)
	{
		if (KEY == 0)
		{
			Delay10KTCYx(50);
			dem++;
			
			if (dem >255)
			{
				dem =0;
			}
		}
		
		PORTB = TimSoDu(dem);
		

#line 47 "main.c"
 
	}
}