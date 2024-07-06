CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJS = matrix.o rand_float.o params.o activation.o cost.o

output: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lm

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@ -lm

clean:
	rm -f (OBJS) output
