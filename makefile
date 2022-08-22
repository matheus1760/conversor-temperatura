main: main.c
	g++ -Wall -o conversor-temperatura main.cpp
	@echo Compilação bem-sucedida

uninstall:
	rm *
	@echo conversor desinstalado
