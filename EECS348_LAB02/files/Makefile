CC = gcc
CFLAGS = -Wall -Wextra
TARGET = oddeven
OBJS = main.o isOdd.o isEven.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c isOdd.h isEven.h
	$(CC) $(CFLAGS) -c main.c

isOdd.o: isOdd.c isOdd.h
	$(CC) $(CFLAGS) -c isOdd.c

isEven.o: isEven.c isEven.h
	$(CC) $(CFLAGS) -c isEven.c

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
