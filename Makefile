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
	make clean
	make
	./final ./input/cards.txt ./input/p1.txt ./input/p2.txt ./input/seq1.txt ./input/seq2.txt > out.log

run2: 
	make clean
	make
	./final ./input2/cards.txt ./input2/p1.txt ./input2/p2.txt ./input2/seq1.txt ./input2/seq2.txt > out2.log

test:
	make clean
	make
	valgrind --leak-check=full --show-leak-kinds=all --verbose  --log-file="valfile.log" ./final ./input/cards.txt ./input/p1.txt ./input/p2.txt ./input/seq1.txt ./input/seq2.txt

#RM -> rm -rf
clean:
	$(RM) $(OBJ_FILES) final


#ref:https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html