CC     = gcc
C_FILE = $(wildcard *.c)
TARGET = $(patsubst %.c,%,$(C_FILE))

# DEBUG = true

CC_FLAGS = -Wall -Werror -Wextra
ifdef DEBUG
CC_FLAGS += -O0 -g
endif
ifndef DEBUG
CC_FLAGS += -O2
endif

all:
	$(CC) $(CC_FLAGS) $(C_FILE) -o $(TARGET)

clean:
	rm $(TARGET)
