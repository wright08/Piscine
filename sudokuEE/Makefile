all:
	@gcc -Wall -Werror -Wextra board.c cell.c checkers.c solver.c string.c sudoku.c units.c update.c
	@./a.out "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."
g:
	@gcc -g -Wall -Werror -Wextra *.c
	./a.out "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."

f:
	@gcc -fsanitize=address -Wall -Werror -Wextra *.c
	@./a.out "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."
2:
	@gcc -Wall -Werror -Wextra *.c
	@./a.out ".35.94.8." "497..8..1" "18......." ".52..7..3" "...6.5..." "6..8..57." ".......32" "9..3..847" ".2.78.15."

t:
	@gcc -Wall -Werror -Wextra board.c cell.c checkers.c solver.c string.c units.c update.c *test.c
	./a.out

