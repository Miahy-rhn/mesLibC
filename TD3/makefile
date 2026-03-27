# 1. DÉFINITION DES VARIABLES (Toujours en premier)
LIB_DIR =./messStacker/src
SRC = ./src
BUILD = build
TEST = test

# 2. RÈGLE PAR DÉFAUT (Elle utilise maintenant des variables connues)
defaut : $(BUILD)/test_version

# 3. LES AUTRES CIBLES
help : 
	@echo "=== Cible disponible === \n"
	@echo "- test_version : génère le programme final (défaut)"
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

# Exo5 : Compilation intermédiaire du test_version

$(BUILD)/test_version.o : $(TEST)/test_version.c
	@echo "### compilation .o de test_version"
	gcc -I $(LIB_DIR) -c -Wall $(TEST)/test_version.c -o $(BUILD)/test_version.o
#gcc -c -Wall test_version.c 

# Exo6 : Génération de l'exécutable test_version

$(BUILD)/test_version : $(BUILD)/test_version.o $(LIB_DIR)/src/util_string.o
	@echo "=== compilation finale test_version"
	gcc -Wall $(BUILD)/test_version.o $(LIB_DIR)/src/util_string.o -o $(BUILD)/test_version


#Exercice 7 : la règle par défaut est la première du fichier makefile

# Exo 9 : Nettoyage du projet 
clean : 
	@echo "=== suppression de tous les .o ==="
	rm -r *.o

# Règle demandée à l'exercice 14
init :
	@echo '=== Création des dossiers src et build ==='
	mkdir -p $(TEST) $(BUILD)

# Exo 15 : 
run :$(BUILD)/test_version
	@$(BUILD)/test_version