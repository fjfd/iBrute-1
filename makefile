CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp cryp.cpp check.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=iBrute

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

