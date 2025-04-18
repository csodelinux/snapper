##
# Project Title
#
# @file
# @version 0.1

CXX = g++
CXXFLAGS = -Wall -Werror -std=c++17

TARGET = snapper
SRC = text.cpp window.cpp main.cpp
HEADER = -I vendor/include/
LIB = -L vendor/lib -l:libraylib.a

build: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@  $^ $(HEADER) $(LIB)
clean:
	rm -f $(TARGET)

.PHONY: all build  clean
# end
