#make a static library server

CC=gcc
LDFLAG= -I../include

libservice_api.a: service.o
	 ar rcs $@ $^

service.o: service_api.c
	$(CC) $(LDFLAG) $< -c -o $@
	