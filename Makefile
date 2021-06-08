BUILD_DIR = build
CC = g++

SRCS  = $(shell find ./src     -type f -name *.cpp)
HEADS = $(shell find ./include -type f -name *.h)
OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I./include
CXXFLAGS = $(INCLUDES)
LDFLAGS = -lm

all: final

final: $(OBJS) $(HEADS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

run: final
	./final

clean:
	$(RM) $(OBJS) final
