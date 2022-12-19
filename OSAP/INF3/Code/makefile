all: instancia clean

instancia: INSTANCIA.out  #Tiene que cambiar en el futuro por la instancia creada.

main:
	g++ -Wall main.cpp habitaciones.h entidades.h restricciones.h instancia.txt -o run-o
	./run-o

#Aqui se debe cambiar instancia, por el nombre de los .out correspondientes
clean:
	-rm -f *out INSTANCIA 