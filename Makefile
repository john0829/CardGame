CC = g++
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
INC_FILES := $(wildcard $(INC_DIR)/*.h)

INCLUDES = -I./include
CXXFLAGS = $(INCLUDES)
LDFLAGS = -lm

all: clean final

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CXXFLAGS) -c -o $@ $<

final: $(OBJ_FILES) $(INC_FILES)
	echo $(OBJ_FILES)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ_FILES)

run: final
	./final

clean:
	$(RM) $(OBJ_FILES) final
