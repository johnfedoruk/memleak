CC=g++
CFLAGS=-Wall -std=c++11 -O0
OBJECTS=main.o lib/wasteful.o
TARGET=run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm -rf $(TARGET) $(OBJECTS)