uppg1: uppg1.c 
	gcc uppg1.c -o tests/a.out

uppg2: uppg2.c 
	gcc uppg2.c -o tests/a.out

uppg3: uppg3.c 
	gcc uppg3.c -o tests/a.out

uppg4: uppg4.c 
	gcc uppg4.c -o tests/a.out

uppg5: uppg5.c 
	gcc uppg5.c -o tests/a.out

uppg6: uppg6.c 
	gcc uppg6.c -o tests/a.out

uppg7: uppg7.c 
	gcc uppg7.c -o tests/a.out

uppg8: uppg8.c 
	gcc uppg8.c -o tests/a.out

uppg9: uppg9.c 
	gcc uppg9.c -o tests/a.out

uppg10: uppg10.c 
	gcc uppg10.c -o tests/a.out

clean:
	rm tests/a.out

test1: uppg1
	bash tests/test1.sh

test2: uppg2
	bash tests/test2.sh

test3: uppg3
	bash tests/test3.sh

test4: uppg4
	bash tests/test4.sh

test5: uppg5
	bash tests/test5.sh

test6: uppg6
	bash tests/test6.sh

test7: uppg7
	bash tests/test7.sh

test8: uppg8
	bash tests/test8.sh

test9: uppg9
	bash tests/test9.sh

test10: uppg10
	bash tests/test10.sh

