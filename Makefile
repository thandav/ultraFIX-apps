CC=g++
CFLAGS=-c -I/Users/thandav/Desktop/ultraFIX
LDFLAGS=-L/Users/thandav/Desktop/ultraFIX/ -lquickfix
CLIENT_OBJECTS=FIXApplication.o client.o
SERVER_OBJECTS=FIXApplication.o server.o

all: 	client \
	server

client: $(CLIENT_OBJECTS)
	$(CC) $(CLIENT_OBJECTS) -o $@ $(LDFLAGS)

server: $(SERVER_OBJECTS)
	$(CC) $(SERVER_OBJECTS) -o $@ $(LDFLAGS)

client.o:
	$(CC) $(CFLAGS) client.cpp -o $@

server.o:
	$(CC) $(CFLAGS) server.cpp -o $@

FIXApplication.o:
	$(CC) $(CFLAGS) FIXApplication.cpp -o $@

clean:
	rm -rf *.o
	rm -rf client
	rm -rf server

