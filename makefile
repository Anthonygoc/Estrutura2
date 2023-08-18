all: clear ponteiro ponteiro_duplo linkedlist

ola: clear
	@echo ==========================
	@echo      PROGRAMA OLA
	@echo ==========================
	@echo Compilando o programa olamundo
	@gcc olamundo.c -o ola > /dev/null 2>&1
	@echo Tornando o programa olamundo executável
	@chmod +x ola > /dev/null 2>&1
	@echo Executando o programa olamundo
	@./ola
	@echo ======================================================

ponteiro:
	@echo
	@echo ==========================
	@echo      PONTEIRO SIMPLES
	@echo ==========================
	@echo Compilando o programa ponteiros
	@gcc ponteiro.c -o ponteiro > /dev/null 2>&1
	@echo Tornando o arquivo executável
	@chmod +x ponteiro > /dev/null 2>&1
	@echo Executando o programa ponteiros
	@echo ======================================================
	@echo
	@./ponteiro

ponteiro_duplo:
	@echo
	@echo ==========================
	@echo      PONTEIRO DUPLO
	@echo ==========================
	@echo Compilando o programa ponteiro duplo
	@gcc ponteiro_duplo.c -o ponteiro_duplo > /dev/null 2>&1
	@echo Tornando o arquivo executável
	@chmod +x ponteiro_duplo > /dev/null 2>&1
	@echo Executando o programa ponteiro duplo
	@echo ======================================================
	@echo
	@./ponteiro_duplo

linkedlist:
	@echo
	@echo ==========================
	@echo      LISTA SIMPLES
	@echo ==========================
	@echo Compilando o programa linkedlist
	@gcc --std=c99 -DLOG_USE_COLOR log.h log.c LinkedList.h LinkedList.c LinkedListTest.c -o linkedlist
	@echo Tornando o arquivo executável
	@chmod +x linkedlist
	@echo Executando o programa linkedlist
	@echo ======================================================
	@echo
	@./linkedlist

clear:
	@echo
	@echo ==========================
	@echo APAGANDO TODOS OS PROGRAMAS
	@echo ==========================
	@echo Removendo o programa ponteiro
	@rm -f ponteiro > /dev/null 2>&1
	@echo Removendo o programa ponteiro duplo
	@rm -f ponteiro_duplo > /dev/null 2>&1
	@echo Removendo o programa linkedlist
	@rm -f linkedlist > /dev/null 2>&1

help:
	@echo
	@echo ==========================
	@echo      	   AJUDA
	@echo ==========================
	@echo "all              | Compila e executa tudo"
	@echo "ponteiro         | Ponteiro Simples"
	@echo "ponteiro_duplo   | Ponteiro Duplo"
	@echo "linkedlist       | Linked List"
	@echo "clear            | Apaga todos os programas"
	@echo ======================================================
	@echo