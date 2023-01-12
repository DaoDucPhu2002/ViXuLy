# MPLAB IDE generated this makefile for use with GNU make.
# Project: LAB2.2.mcp
# Date: Thu Jan 12 16:06:24 2023

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

LAB2.2.cof : main.o
	$(LD) /l"C:\MCC18\lib" "C:\MCC18\lkr\18f4520.lkr" "main.o" /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1 /o"LAB2.2.cof" /M"LAB2.2.map" /W

main.o : main.c C:/MCC18/h/delays.h main.c C:/MCC18/h/P18f4520.h C:/MCC18/h/p18cxxx.h C:/MCC18/h/p18f4520.h
	$(CC) -p=18F4520 "main.c" -fo="main.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "main.o" "LAB2.2.cof" "LAB2.2.hex"

