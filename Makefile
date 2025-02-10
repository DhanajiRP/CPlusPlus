# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -std=c++11 -Iinclude

# Directories
SRC_DIR = src
INC_DIR = include
BIN_DIR = bin
VERIFY_DIR = verify

# Target executable
TARGET = $(BIN_DIR)/linkedlist

# Source files
SRC = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(VERIFY_DIR)/*.cpp)

# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule: Build the executable
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJ) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile C++ source files to object files
%.o: %.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create bin directory if it does not exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

