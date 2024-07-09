CC         = g++
CFLAGS     = -g -Wall -std=c++17

all: BonjourLeMonde Chats ElloElloEllo

BonjourLeMonde: BonjourLeMonde.cxx
	$(CC) $(CFLAGS) -o build/bonjourlemonde BonjourLeMonde.cxx

Chats: Chats.cxx
	$(CC) $(CFLAGS) -o build/chats Chats.cxx

ElloElloEllo: ElloElloEllo.cxx
	$(CC) $(CFLAGS) -o build/ElloElloEllo ElloElloEllo.cxx

clean:
	rm build/*
