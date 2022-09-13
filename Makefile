CC = gcc -c

SRC = push_swap.c checkandinitialize.c index_stack.c markup.c \
	rule1.c rules2.c rules3.c \
	send_to_a.c send_to_b.c \
	sortalgo.c sort_3_numbers.c\
	utils.c\

OBJ = $(SRC:.c=.o)

