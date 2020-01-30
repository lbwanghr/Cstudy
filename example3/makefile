addition: main.o cal.o
	@echo "正在生成addition"
	g++ main.o cal.o -o addition
main.o: main.cpp cal.h
	@echo "正在生成main.o"
	g++ -c main.cpp -o main.o
cal.o: cal.cpp cal.h
	@echo "正在生成cal.o"
	g++ -c cal.cpp -o cal.o
clean:
	rm -rf *.o addition
SUBDIR=src xml
SUBDIR+=osapi
test1:
	echo $(SUBDIR)
test2:
	@echo "使用@echo命令不显示指令本身"
test3: main.o cal.o addition
	echo $@ 指代target
	echo $^ 指代dependencies
	echo $< 指代dependencies的第一项
