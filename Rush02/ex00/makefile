OBJS	= main.o case.o changestr.o ft_putstr.o readdict.o valuecont.o where.o writedecillions.o writehundred.o writemillions.o writemoremillions.o writeten.o writethousand.o writeunit.o zero.o zerocomp.o
HEAD	= includes 
SRCS	= main.c case.c changestr.c ft_putstr.c readdict.c valuecont.c where.c writedecillions.c writehundred.c writemillions.c writemoremillions.c writeten.c writethousand.c writeunit.c zero.c zerocomp.c
GCC	= gcc -Wall -Werror -Wextra -o rush-02
GCCS	= gcc -c -Wall -Werror -Wextra
CLEAN	= rm -f *.o
FCLEAN	= rm -f *.o rush-02
NORMINETTE	= norminette *c
NAME	= rush-02

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(OBJS)

main: main.o
	$(GCCS) main.c libr02.h

ft_zerocomp: ft_zerocomp.o
	$(GCCS) ft_zerocomp.c libr02.h

ft_zero: ft_zero.o 
	$(GCCS) ft_zero.c libr02.h

one_imput: one_imput.o 
	$(GCCS) one_imput.c libr02.h

two_imputs: two_imputs.o
	$(GCCS) two_imputs.c libr02.h

ft_valuecont: ft_valuecont.o 
	$(GCCS) ft_valuecont.c libr02.h

ft_read_file: ft_read_file.o 
	$(GCCS) ft_read_file.c libr02.h

where: where.o 
	$(GCCS) where.c libr02.h

diccionary: diccionary.o 
	$(GCCS) diccionary.c libr02.h

ft_strlen: ft_strlen.o
	$(GCCS) ft_strlen.c libr02.h

ft_changestr: ft_changestr.o 
	$(GCCS) ft_changestr.c libr02.h

error: error.o 
	$(GCCS) error.c libr02.h

ft_dicerror: ft_dicerror.o 
	$(GCCS) ft_dicerror.c libr02.h

ft_putstr: ft_putstr.o 
	$(GCCS) ft_putstr.c libr02.h

writezero: writezero.o 
	$(GCCS) writezero.c libr02.h

writenumber: writenumber.o 
	$(GCCS) writenumber.c libr02.h

writeunit: writeunit.o 
	$(GCCS) writeunit.c libr02.h

writeten: writeten.o 
	$(GCCS)	 writeten.c libr02.h

writehundred: writehundred.o 
	$(GCCS) writehundred.c libr02.h

writethousand: writethousand.o
	$(GCCS) writethousand.c libr02.h

writequintillion: writequintillion.o
	$(GCCS) writequintillion.c libro02.h

writenonillion: writenonillion.o
	$(GCCS) writenonillion.c libro02.h

writeundecillion: writeundecillion.o
	$(GCCS) writeundecillion.c libro02.h

clean: 
	$(CLEAN)

fclean:
	$(FCLEAN)
re: 
	$(CLEAN) $(FCLEAN)
norm:
	$(NORMINETTE) $(SRCS)

.PHONY : all clean fclean re norm