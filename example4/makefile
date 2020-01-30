target = addition
DIR = src object
CXX_SOURCE = $(foreach dir, $(DIR), $(wildcard $(dir)/*.cpp))
CXX_OBJECT = $(patsubst %.cpp, %.o, $(CXX_SOURCE))
DEP_FILE = $(patsubst %.o, %.d, $(CXX_OBJECT))
-include $(DEP_FILE)

$(target): $(CXX_OBJECT)
	g++ $^ -o $@
%.o: %.cpp
	g++ -c -MMD $< -o $@
clean:
	rm -rf $(DEP_FILE) $(CXX_OBJECT) $(target)
test:
	echo $(CXX_SOURCE)
	echo $(CXX_OBJECT)
	echo $(DEP_FILE)
