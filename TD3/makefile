# 1. DÉFINITION DES VARIABLES (Toujours en premier)
LIB_DIR =./mesLibC
SRC = ./src
BUILD = build

# 2. RÈGLE PAR DÉFAUT (Elle utilise maintenant des variables connues)
defaut : $(BUILD)/mixLetter

# 3. LES AUTRES CIBLES
help : 
	@echo "\n\t:=:=: Cible disponible :=:=: \n"
	@echo "- mixLetter : génère le programme final (défaut)"
	@echo "- lib_util : compile la librairie util_string"
	@echo "- clean : nettoyage des .o"
	@echo "- help : affichage de l'aide"
	@echo "\n"

#Alias pour simplifier l'accès à la cible util_string.o 
lib_util : $(LIB_DIR)/src/util_string.o


# compilation de la librairie util_string  Exo 3
$(LIB_DIR)/src/util_string.o : $(LIB_DIR)/util_string.c
	@echo "### compilation.o de util_string"
	gcc -c -Wall $(LIB_DIR)/util_string.c -o $(LIB_DIR)/src/util_string.o

# execution d'une variable muette @gcc -c -Wall util_string.c

# Exo5 : Compilation intermédiaire du mixLetter

$(BUILD)/mixLetter.o : $(SRC)/mixLetter.c
	@echo "### compilation .o de mixLetter"
	gcc -I $(LIB_DIR) -c -Wall $(SRC)/mixLetter.c -o $(BUILD)/mixLetter.o
#gcc -c -Wall mixLetter.c 

# Exo6 : Génération de l'exécutable mixLetter

$(BUILD)/mixLetter : $(BUILD)/mixLetter.o $(LIB_DIR)/src/util_string.o
	@echo "=== compilation finale mixLetter"
	gcc -Wall $(BUILD)/mixLetter.o $(LIB_DIR)/src/util_string.o -o $(BUILD)/mixLetter


#Exercice 7 : la règle par défaut est la première du fichier makefile

# Exo 9 : Nettoyage du projet 
clean : 
	@echo "=== suppression de tous les .o ==="
	rm -r *.o

# Règle demandée à l'exercice 14
init :
	@echo '=== Création des dossiers src et build ==='
	mkdir -p $(SRC) $(BUILD)

# Exo 15 : 
run :$(BUILD)/mixLetter
	@$(BUILD)/mixLetter