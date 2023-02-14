# MPLAB IDE generated this makefile for use with GNU make.
# Project: Bai5.mcp
# Date: Tue Feb 14 14:22:05 2023

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

Bai5.cof : src.o
	$(LD) /l"C:\MCC18\lib" "C:\MCC18\lkr\18f4520.lkr" "src.o" /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1 /o"Bai5.cof" /M"Bai5.map" /W

src.o : src.c C:/MCC18/h/delays.h C:/MCC18/h/timers.h src.c C:/MCC18/h/P18f4520.h C:/MCC18/h/p18cxxx.h C:/MCC18/h/p18f4520.h
	$(CC) -p=18F4520 "src.c" -fo="src.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "src.o" "Bai5.cof" "Bai5.hex"

