
# Construye el projecto
#
# Para construir el projecto ejecuta
#
# $ make
#
# Para ejecutar el projecto
#
# $ make run
# 


# Directory donde estan los header (archivos .h).
LIBS := lib/

# Archivos a compilar
C_FILES := teatro.cpp
C_FILES += teatro_db.cpp
C_FILES += main.cpp 
C_FILES += teatro_search.cpp
C_FILES += teatro_menu.cpp
C_FILES += teatro_servicio.cpp

# Utiliza TABS en las reglas
all:
	@echo $(C_FILES)
	g++ -o main -I$(LIBS) $(C_FILES)

# @ es para que no imprima el comando.
run:
	@./main

clean:
	rm -rf main

