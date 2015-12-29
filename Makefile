SRC:=$(shell ls *.c)

all:stack_queue

stack_queue: list.o mm.o stack.o main_stack.o queue.o main_queue.o
	gcc -o stack mm.o list.o stack.o main_stack.o
	gcc -o queue mm.o list.o queue.o main_queue.o

stack:list.o mm.o stack.o main_stack.o
	gcc -o stack mm.o list.o stack.o main_stack.o
queue:list.o mm.o queue.o main_queue.o
	gcc -o queue mm.o list.o queue.o main_queue.o

list.o: list.c
mm.o: mm.c
stack.o: stack.c
main_stack.o: main_stack.c
queue.o: queue.c
main_queue.o: main_queue.c

dep:
	$(CXX) -M $(SRCS) > .depend

clean:
	rm -f stack queue *.o
