#!/bin/bash

# Flag 1
flags[0.0]="_   __       "
flags[0.1]="(_) / /       "
flags[0.2]="   / / ___    "
flags[0.3]="  / / / __|   "
flags[0.4]=" / / | (__    "
flags[0.5]="/_/ (_)___|   "
flags[0.6]="              "
flags[0.7]="              "

# Flag 2
flags[1.0]="_   __       "
flags[1.1]="(_) / /       "
flags[1.2]="   / / ___    "
flags[1.3]="  / / / __|   "
flags[1.4]=" / / _\__ \   "
flags[1.5]="/_/ (_)___/   "
flags[1.6]="              "
flags[1.7]="              "

# Flag 3
flags[2.0]="_   __       "
flags[2.1]="(_) / /       "
flags[2.2]="   / / _ __   "
flags[2.3]="  / / | '_ \  "
flags[2.4]=" / / _| |_) | "
flags[2.5]="/_/ (_) .__/  "
flags[2.6]="      | |     "
flags[2.7]="      |_|     "

# Flag 4
flags[3.0]="_   __   _   "
flags[3.1]="(_) / /  | |  "
flags[3.2]="   / / __| |  "
flags[3.3]="  / / / _` |  "
flags[3.4]=" / / | (_| |  "
flags[3.5]="/_/ (_)__,_|  "
flags[3.6]="              "
flags[3.7]="              "

# Flag 5
flags[4.0]="_   ___      "
flags[4.1]="(_) / (_)     "
flags[4.2]="   / / _      "
flags[4.3]="  / / | |     "
flags[4.4]=" / / _| |     "
flags[4.5]="/_/ (_)_|     "
flags[4.6]="              "
flags[4.7]="              "

# Flag 6
flags[5.0]="_   __       "
flags[5.1]="(_) / /       "
flags[5.2]="   / /_   _   "
flags[5.3]="  / /| | | |  "
flags[5.4]=" / / | |_| |  "
flags[5.5]="/_/ (_)__,_|  "
flags[5.6]="              "
flags[5.7]="              "

# Flag 7
flags[6.0]="_   __       "
flags[6.1]="(_) / /       "
flags[6.2]="   / /__  __  "
flags[6.3]="  / / \ \/ /  "
flags[6.4]=" / / _ >  <   "
flags[6.5]="/_/ (_)_/\_\  "
flags[6.6]="              "
flags[6.7]="              "

# Flag 8
flags[7.0]="_   ____   __ "
flags[7.1]="(_) / /\ \ / /"
flags[7.2]="   / /  \ V / "
flags[7.3]="  / /   /   \ "
flags[7.4]=" / / _ / /^\ \\"
flags[7.5]="/_/ (_)\/   \/"
flags[7.6]="              "
flags[7.7]="              "

# Flag 9
flags[8.0]="_   ___   __ "
flags[8.1]="(_) / (_) / /"
flags[8.2]="   / /   / / "
flags[8.3]="  / /   / /  "
flags[8.4]=" / / _ / / _ "
flags[8.5]="/_/ (_)_/ (_) "
flags[8.6]="              "
flags[8.7]="              "

put_flag()
{
	echo "affichage du Flag $flag_index :"
	for i in {0..7}; do
		echo "${flags[$flags_index.$i]}"
	done
}

put_flags()
{
	for i in {0..8}; do
		flag_index=i
		put_flags
	done
}

put_flags
