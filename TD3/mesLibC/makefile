LIB_DIR =./mesLibC
SRC = ./src
BUILD = build

# 3. LES AUTRES CIBLES
help : 
	@echo "\n\t:=:=: Cible disponible :=:=: \n"
	@echo " lib_util : compile la librairie util_string"
	@echo "- help : affichage de l'aide"
	@echo "\n"

lib_util : $(LIB_DIR)/util_string.o


$(LIB_DIR)/util_string.o : $(LIB_DIR)/util_string.c
	@echo "### compilation.o de util_string"
	gcc -c -Wall $(LIB_DIR)/util_string.c -o $(LIB_DIR)/util_string.o

init :
	@echo '=== Création des dossiers src et build ==='
	mkdir -p $(SRC) $(BUILD)

run :$(BUILD)/mixLetter
	@$(BUILD)/mixLetter