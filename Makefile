CXX = clang++
CXXFLAGS = -std=c++20 -Wall -O2

SRCS = src/main.cpp src/parser.cpp src/utils.cpp src/manage.cpp

HDRS = src/utils.hh src/parser.hh src/manage.hh

OBJS = $(SRCS:.cc=.o)

EXEC = dirf

all: $(EXEC)

%.o: %.cc $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) $(EXEC)