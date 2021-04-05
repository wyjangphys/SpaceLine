CC=gcc

TARGET=main

all : $(TARGET)

$(TARGET) : main.o GetShortestDistance.o
	$(CC) $(CFLAGS) -o $@ $^

main.o : main.c
	$(CC) $(CFLAGS) -c $^ -o $@

GetShortestDistance.o : GetShortestDistance.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	rm -v GetShortestDistance.o
	rm -v main.o
	rm -v main

# DO NOT DELETE
#main.o main.c GetShortestDistance.o GetShortestDistance.c
