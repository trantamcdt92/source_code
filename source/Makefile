#!/bin/bash

CC=gcc
CFLAGS=-Wall
LDFLAG= -I../include -Iclient

#all: test_exe
	
#test_exe: main.o 
#	$(CC) $(CFLAGS) $< -o $@ 
main: main.c 
	$(CC) $(CFLAGS) $(LDFLAG) $< -o $@ -L./static_lib -lclient_api -lservice_api

clean:
	rm *.o
	rm test_exe