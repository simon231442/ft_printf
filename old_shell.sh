#!/bin/bash

# Couleurs pour l'affichage
RED="\033[31m"
GREEN="\033[32m"
CYAN="\033[36m"
YELLOW="\033[33m"
RESET="\033[0m"

EXEC="./test_program"
EXEC_PF="./PRINTF"

# Flag 1
flags[0]=" _   __         "
flags[1]="(_) / /         "
flags[2]="   / / ___      "
flags[3]="  / / / __|     "
flags[4]=" / / | (__      "
flags[5]="/_/ (_)___|     "

# Flag 2
flags[6]=" _   __         "
flags[7]="(_) / /         "
flags[8]="   / / ___      "
flags[9]="  / / / __|     "
flags[10]=" / / _\__ \     "
flags[11]="/_/ (_)___/     "

# Flag 3 (corrigé)
flags[12]=" _   _______    "
flags[13]="(_) / / ___ \   "
flags[14]="   / /| |_/ /   "
flags[15]="  / / |  __/    "
flags[16]=" / / _| |       "
flags[17]="/_/ (_)_|       "

# Flag 4
flags[18]=" _   __   _     "
flags[19]="(_) / /  | |    "
flags[20]="   / / __| |    "
flags[21]="  / / / _\` |    "
flags[22]=" / / | (_| |    "
flags[23]="/_/ (_)__,_|    "

# Flag 5
flags[24]=" _   ___        "
flags[25]="(_) / (_)       "
flags[26]="   / / _        "
flags[27]="  / / | |       "
flags[28]=" / / _| |       "
flags[29]="/_/ (_)_|       "

# Flag 6
flags[30]=" _   __         "
flags[31]="(_) / /         "
flags[32]="   / /_   _     "
flags[33]="  / /| | | |    "
flags[34]=" / / | |_| |    "
flags[35]="/_/ (_)__,_|    "

# Flag 7
flags[36]=" _   __         "
flags[37]="(_) / /         "
flags[38]="   / /__  __    "
flags[39]="  / / \ \/ /    "
flags[40]=" / / _ >  <     "
flags[41]="/_/ (_)_/\_\    "

# Flag 8
flags[42]=" _   ____   __  "
flags[43]="(_) / /\ \ / /  "
flags[44]="   / /  \ V /   "
flags[45]="  / /   /   \   "
flags[46]=" / / _ / /^\ \  "
flags[47]="/_/ (_)\/   \/  "

# Flag 9
flags[48]=" _   ___   __   "
flags[49]="(_) / (_) / /   "
flags[50]="   / /   / /    "
flags[51]="  / /   / /     "
flags[52]=" / / _ / / _    "
flags[53]="/_/ (_)_/ (_)   "

wich_flag() {
    if [[ $1 == "%c" ]]; then
        flag_index=0
    elif [[ $1 == "%s" ]]; then
        flag_index=6
    elif [[ $1 == "%p" ]]; then
        flag_index=12
    elif [[ $1 == "%d" ]]; then
        flag_index=18
    elif [[ $1 == "%i" ]]; then
        flag_index=24
    elif [[ $1 == "%u" ]]; then
        flag_index=30
    elif [[ $1 == "%x" ]]; then
        flag_index=36
    elif [[ $1 == "%X" ]]; then
        flag_index=42
    elif [[ $1 == "%%" ]]; then
        flag_index=48
    else
        flag_index=-1  # Par défaut si non reconnu
    fi
}

run_test()
{
	printf_output=$($EXEC_PF "$1" "$2" 2>/dev/null)
	printf_len=${#printf_output}
	
	ft_printf_output=$($EXEC "$1" "$2" 2>/dev/null)
	ft_printf_len=$?

	printf_output_2=$($EXEC_PF "$1" "$3" 2>/dev/null)
	printf_len_2=${#printf_output_2}
	
	ft_printf_output_2=$($EXEC "$1" "$3" 2>/dev/null)
	ft_printf_len_2=$?


	wich_flag $1
	echo -e "${flags[$flag_index]}"
	echo -e "${flags[$flag_index+1]}${YELLOW}printf:    ${RESET}|$printf_output|	len = $printf_len"
	echo -e "${flags[$flag_index+2]}${YELLOW}ft_printf: ${RESET}|$ft_printf_output|	len = $ft_printf_len"
	echo -e "${flags[$flag_index+3]}${YELLOW}printf:    ${RESET}|$printf_output_2|	len = $printf_len_2"
	echo -e "${flags[$flag_index+4]}${YELLOW}ft_printf: ${RESET}|$ft_printf_output_2|	len = $ft_printf_len_2"


	if [[ "$printf_output" == "$ft_printf_output" && $printf_len == $ft_printf_len ]]; then
		echo -e "${flags[$flag_index+5]}${GREEN}Result: OK${RESET}\n"
	else
        	echo -e "${flags[$flag_index+5]}${RED}Result: Mismatch${RESET}\n"
	fi
}

# Liste des tests
run_test %c 'A' 'z'
run_test %s "hello world" "signature"
run_test %s NULL ""
run_test %p NULL 0x12345678
run_test %d -2147483648 2147483647
run_test %i -42 0
run_test %u 42 7071707
run_test %x 128 156
run_test %X -2147483648 2147483647
run_test %% "%" "%"
