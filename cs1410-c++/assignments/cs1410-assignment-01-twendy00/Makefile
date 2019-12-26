CXX = g++
CXXFLAGS = -I. -std=c++14
HEADERS = $(patsubst %,%,$(wildcard *.h))
OBJECTS = $(patsubst %.cpp,.__%.o,$(wildcard *.cpp))

.__%.o: %.cpp $(HEADERS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

run: $(OBJECTS)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f .__*.o *.o *~ run