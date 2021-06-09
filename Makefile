#CXX is predefined variables in Makefile
CXX = g++
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
INC_FILES := $(wildcard $(INC_DIR)/*.h)

INCLUDES = -I./include
CXXFLAGS = $(INCLUDES)
LDFLAGS = -lm

all: final

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

final: $(OBJ_FILES) $(INC_FILES)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ_FILES)

run: 
	make
	./final

#RM -> rm -rf
clean:
	$(RM) $(OBJ_FILES) final


#ref:https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html