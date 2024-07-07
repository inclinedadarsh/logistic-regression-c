CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJS = matrix.o rand_float.o params.o activation.o forward.o cost.o backward.o optimize.o neuron.o main.o

output: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lm

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@ -lm

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f (OBJS) output
