CC     = gcc
C_FILE = $(wildcard *.c)
TARGET = $(patsubst %.c,%,$(C_FILE))

# DEBUG = true

CFLAGS = -Wall -Werror -Wextra
ifdef DEBUG
CFLAGS += -O0 -g
endif
ifndef DEBUG
CFLAGS += -O2
endif

all:
	$(CC) $(CFLAGS) $(C_FILE) -o $(TARGET)

clean:
#	del /q $(TARGET).exe
	rm $(TARGET)
