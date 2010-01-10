LIBS = -lcryptopp -lpthread

SOURCES =                \
         main.cpp        \
         hashfunction.cpp

OBJECTS = $(SOURCES:.cpp=.o)

iBrute: $(OBJECTS)
	$(LINK.cc) $(OBJECTS) -o $@ $(LIBS)
