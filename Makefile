CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJS = 

output: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f (OBJS) output
