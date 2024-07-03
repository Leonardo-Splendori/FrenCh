CC         = g++ 
CFLAGS     = -g -Wall

all: BonjourLeMonde Chats

BonjourLeMonde: BonjourLeMonde.cxx
	$(CC) $(CFLAGS) -o build/bonjourlemonde BonjourLeMonde.cxx

Chats: Chats.cxx
	$(CC) $(CFLAGS) -o build/chats Chats.cxx


clean:
	rm build/*