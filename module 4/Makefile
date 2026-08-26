CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = demo

SOURCES = demo.cpp link.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)