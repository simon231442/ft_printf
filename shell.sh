#!/bin/bash

# Couleurs pour l'affichage
RED="\033[31m"
GREEN="\033[32m"
CYAN="\033[36m"
YELLOW="\033[33m"
RESET="\033[0m"

EXEC="./test_program"

run_test()
{
#	local desrciption="$1"
#	local format="$2"
#	local value="$3"

	echo -e "${CYAN}Test: $1${RESET}"

	printf_output=$(printf "$2" "$3" 2>/dev/null)
	printf_len=${#printf_output}
	
	ft_printf_output=$($EXEC "$2" "$3" 2>/dev/null)
	ft_printf_len=$($EXEC "$f#!/bin/bash

# Couleurs pour l'affichage
RED="\033[31m"
GREEN="\033[32m"
CYAN="\033[36m"
YELLOW="\033[33m"
RESET="\033[0m"

EXEC="./test_program"

run_test()
{
#       local desrciption="$1"
#       local format="$2"
#       local value="$3"

        echo -e "${CYAN}Test: $1${RESET}"

        printf_output=$(printf "$2" "$3" 2>/dev/null)
        printf_len=${#printf_output}

        ft_printf_output=$($EXEC "$2" "$3" 2>/dev/null)
        ft_printf_len=$($EXEC "$format" "$value" >/dev/null; echo $?)

	echo -e "${YELLOW}printf:    ${RESET}|${printf_output}|   |${printf_len}|"
	echo "${YELLOW}ft_printf: ${RESET}|${ft_printf_output}|        |${ft_printf_len}|"

        if [[ "$printf_output" == "$ft_printf_output" && "$printf_len" == "$ft_printf_len" ]]; then
                echo -e "${GREEN}Result: OK${RESET}\n"
        else
                echo -e "${RED}Result: Mismatch${RESET}\n"
        fi
}
ormat" "$value" >/dev/null; echo $?)

	echo -e "${YELLOW}printf:    ${RESET}|$printf_output|	|$printf_len|"
	echo -e "${YELLOW}ft_printf: ${RESET}|$ft_printf_output|	|$ft_printf_len|"

	if [[ "$printf_output" == "$ft_printf_output" && "$printf_len" == "$ft_printf_len" ]]; then
		echo -e "${GREEN}Result: OK${RESET}\n"
	else
        	echo -e "${RED}Result: Mismatch${RESET}\n"
	fi
}

# Liste des tests
run_test "Hexadecimal lowercase for 255" "%x" 255
run_test "Hexadecimal uppercase for 255" "%X" 255
run_test "Unsigned decimal for 123456789" "%u" 123456789
run_test "Pointer address (NULL)" "%p" NULL
run_test "String test" "%s" "Hello World"
run_test "Character test" "%c" "A"
run_test "Percent symbol" "%%" ""

