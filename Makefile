#target: dependencies or file
#[tab] system command

all: helloworld

helloworld: helloworld.o
	gcc helloworld.o -o helloworld

helloworld.o: helloworld.c
	gcc -c helloworld.c
	
clean:
	rm *.o helloworld	
