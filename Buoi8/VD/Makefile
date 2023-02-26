# MPLAB IDE generated this makefile for use with GNU make.
# Project: VD.mcp
# Date: Thu Feb 16 08:33:33 2023

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

VD.cof : src.o
	$(LD) /l"C:\MCC18\lib" "C:\MCC18\lkr\18f4520.lkr" "src.o" /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1 /o"VD.cof" /M"VD.map" /W

src.o : src.c C:/MCC18/h/delays.h C:/MCC18/h/pwm.h C:/MCC18/h/timers.h src.c C:/MCC18/h/P18f4520.h C:/MCC18/h/p18cxxx.h C:/MCC18/h/p18f4520.h
	$(CC) -p=18F4520 "src.c" -fo="src.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "src.o" "VD.cof" "VD.hex"

