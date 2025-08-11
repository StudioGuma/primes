CC     = gcc
C_FILE = $(wildcard *.c)
TARGET = $(patsubst %.c,%,$(C_FILE))
CFLAGS = -O2 -Wall -Werror -Wextra

all:
	$(CC) $(CFLAGS) $(C_FILE) -o $(TARGET)

clean:
#	del /q $(TARGET).exe
	rm $(TARGET)
