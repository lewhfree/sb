cc = clang
CFLAGS = -std=c99 \
    -Wall \
    -Wextra \
    -Wpedantic \
    -Wstrict-prototypes \
    -Wmissing-prototypes \
    -Wold-style-definition \
    -Wcast-qual \
    -Wwrite-strings \
    -Wshadow \
    -Wpointer-arith \
    -Wconversion \
    -Wundef \
    -Wbad-function-cast \
    -O2
TARGET = sb_bin
OBJS = sb/main.o sb/sbind.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) sb/**.gch
