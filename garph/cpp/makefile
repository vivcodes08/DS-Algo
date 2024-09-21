# Makefile to compile main.cpp into dist/main.exe

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Source and output directories
SRC_DIR = .
DIST_DIR = dist

# Output file
TARGET = $(DIST_DIR)/main.exe

# Source file
SRC = $(SRC_DIR)/main.cpp

# Rule to create the dist directory if it doesn't exist
$(DIST_DIR):
	mkdir -p $(DIST_DIR)

# Build the target
$(TARGET): $(SRC) | $(DIST_DIR)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Clean build
.PHONY: clean
clean:
	rm -rf $(DIST_DIR)
