#make a static library server

CC=gcc
LDFLAG= -I../include  -I

libclient_api.a: client.o
	 ar rcs $@ $^

client.o: client_api.c
	$(CC) $(LDFLAG) $< -c -o $@ -L../../static_lib  -lservice_api
	
