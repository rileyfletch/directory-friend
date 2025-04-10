CXX = clang++
CXXFLAGS = -std=c++20 -Wall -O2

SRCS = src/main.cc src/parser.cc src/utils.cc

HDRS = src/utils.hh src/parser.hh

OBJS = $(SRCS:.cc=.o)

EXEC = dirf

all: $(EXEC)

%.o: %.cc $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) $(EXEC)