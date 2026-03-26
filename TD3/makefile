LIB_DIR = ../lib
BUILD = 

defaut: mixLetter

help : 
	@echo "Cible disponible :"
	@echo "   - mixLetter : génère le programme final (défaut)"
	@echo "   - lib : compile la librairie util_string"
	@echo "   - clean : nettoyage des .o"
	@echo "   - help : affichage de l'aide"

lib : util_string.o

# Compilation de la librairie util_string
util_string.o : util_string.c 
	@echo "=== Compilation .o de util_string"
	@gcc -c -Wall util_string.c

$(BUILD)/mixLetter.o : $(SRC)/mixLetter.c
	@echo "=== Compilation .o de mixLetter"
	@gcc -I $(LIB_DIR) -c -Wall $(SRC)/mixLetter.c -o $(BUILD)/util_string.o

$(BUILD)/mixLetter : $(BUILD)/mixLetter.o $(LIB_DIR)/util_string.o
	@echo "=== Compilation finale mixLetter"
	@gcc -Wall $(BUILD)/mixLetter.o $(LIB_DIR)/util_string.o -o $(BUILD)/mixLetter

clean :
	@echo "... suppression de tous les .o"
	rm -r *.odefaut: mixLetter

run :
	@$(BUILD)/mixLetter