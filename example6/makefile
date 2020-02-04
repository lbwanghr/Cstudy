# makefile for shared library
target = libtool.so
DIR = src
CXX_SOURCE = $(foreach dir, $(DIR), $(wildcard $(dir)/*.cpp))
CXX_OBJECT = $(patsubst %.cpp, %.o, $(CXX_SOURCE))
DEP_FILE = $(patsubst %.o, %.d, $(CXX_OBJECT))
-include $(DEP_FILE)
$(target): $(CXX_OBJECT)
	g++ -shared $^ -o $(target)
%.o: %.cpp
	g++ -c -MMD -fPIC $< -o $@
exe:
	g++ -c main.cpp -o main.o
	g++ main.o -o helloso -L. -ltool
clean:
	rm -rf $(CXX_OBJECT) $(DEP_FILE) $(target) main.o helloso
