CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I./include

SRCS = src/matrix.c src/rand_float.c src/params.c src/activation.c \
       src/cost.c src/forward.c src/backward.c src/optimize.c src/neuron.c
OBJS = $(SRCS:.c=.o)

EXEC = logistic_regression

all: $(EXEC)

$(EXEC): $(OBJS) examples/main.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) examples/main.o $(EXEC)

.PHONY: all clean
