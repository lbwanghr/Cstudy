CXX_SOURCE = $(wildcard *.cpp)
CXX_OBJECT = $(patsubst %.cpp, %.o, $(CXX_SOURCE))
DEP_FILE = $(patsubst %.o, %.d, $(CXX_OBJECT))
target = addition
-include $(DEP_FILE)
$(target): $(CXX_OBJECT)
	g++ $^ -o $@
%.o: %.cpp
	g++ -c -MMD $< -o $@
clean:
	rm -rf *.o *.d $(target)
test:
	echo $(CXX_SOURCE)
	echo $(CXX_OBJECT)
	echo $(DEP_FILE)
