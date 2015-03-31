CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wunused -pedantic

TAGS := .tags

OBJECTS := $(CPP_FILES:.cpp=.o)

#Default Flags
release: all

all: hashTest1

debug: CXXFLAGS += -g3 -DDEBUG
debug: all

#hashtest%.o: hashtest%.cpp
#$(CXX) $(CXXFLAGS) -c $^

hashTest1: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) hashTest1.cpp -o hashTest1

tags:
	ctags -f $(TAGS) *.h *.cpp

#Make Clean
clean:
	rm -f hashTest1
