CC = gcc
CFLAGS = -Wall -Wextra
TARGET = rush-02

SRCS = main.c readFile.c size_num.c split_names.c excepciones.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re