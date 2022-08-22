main: main.c
	gcc -Wall -o conversor-temperatura main.c
	@echo Compilação bem-sucedida

uninstall:
	rm *
	@echo conversor desinstalado
