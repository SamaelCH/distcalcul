Win:
	@echo "Compilando para Windows"
	x86_64-w64-mingw32-gcc main.c -o distcalcul -lm
	@echo "Listo para ejecutar distcalcul :D"

Linux:
	@echo "Compilando para sistemas basados en Unix"
	gcc main.c -o distcalcul -lm
	@echo "Listo para ejecutar distcalcul :D"
