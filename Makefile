func.o: func.c
						gcc -c -o func.o func.c
dep.o: dep.c
						gcc -c -o dep.o dep.c
depocalc: func.o dep.o
						gcc -Wall -o depocalc func.o dep.o 