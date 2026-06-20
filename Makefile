cc = gcc
CFLAGS = -Wall -Wextra -pedantic -O2
TARGET = sb_bin
OBJS = sb/main.o sb/sbind.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
