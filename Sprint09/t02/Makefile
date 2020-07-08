NAMEBIN = minilibmx.a

OBJD = obj
SRCD = src

SRC = mx_atoi.c \
	mx_isdigit.c \
	mx_isspace.c \
	mx_printchar.c \
	mx_printint.c \
	mx_printstr.c \
	mx_strcpy.c \
	mx_strcmp.c \
	mx_strlen.c \


SRCS = $(addprefix $(SRCD)/, $(SRC))
OBJS = $(addprefix $(OBJD)/, $(SRC:%.c=%.o))

# CC = clang

CFLAGS = -std=c11 $(addprefix -W, all extra error pedantic)

all: install

install:
	@mkdir -p $(OBJD)
	@clang $(CFLAGS) -c $(SRCS) -Iinc
	@mv $(SRC:%.c=%.o) obj/
	@ar -rc $(NAMEBIN) $(OBJS)

clean:
	@rm -rf $(OBJD)

uninstall: clean
	@rm -rf $(NAMEBIN)
	
reinstall: uninstall all

