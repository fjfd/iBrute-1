LIBS = -lcryptopp -lpthread
CFLAGS = -Wall
LDFLAGS = -static

SOURCES =                \
         main.cpp        \
         hashfunction.cpp

OBJECTS = $(SOURCES:.cpp=.o)

iBrute: $(OBJECTS)
	$(LINK.cc) $(OBJECTS) -o $@ $(LIBS)
