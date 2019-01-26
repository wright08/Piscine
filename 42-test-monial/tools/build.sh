#!/bin/sh


		echo building work/ex00/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex00/btree_create_node.c work/ex00/main.c -o work/ex00/main
	
		cd work/ex00; make 2>/dev/null; cd ../..;
	
		echo building work/ex01/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex01/btree_apply_prefix.c work/ex01/main.c -o work/ex01/main
	
		cd work/ex01; make 2>/dev/null; cd ../..;
	
		echo building work/ex02/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex02/btree_apply_infix.c work/ex02/main.c -o work/ex02/main
	
		cd work/ex02; make 2>/dev/null; cd ../..;
	
		echo building work/ex03/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex03/btree_apply_suffix.c work/ex03/main.c -o work/ex03/main
	
		cd work/ex03; make 2>/dev/null; cd ../..;
	
		echo building work/ex04/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex04/btree_insert_data.c work/ex04/main.c -o work/ex04/main
	
		cd work/ex04; make 2>/dev/null; cd ../..;
	
		echo building work/ex05/main
		gcc -g -O -Wall -Wextra -Wunreachable-code-aggressive -fsanitize=address,undefined -fno-omit-frame-pointer stupidity.c work/ex05/btree_search_item.c work/ex05/main.c -o work/ex05/main
	
		cd work/ex05; make 2>/dev/null; cd ../..;
	