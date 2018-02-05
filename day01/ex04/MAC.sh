ifconfig | grep "ether " | sed "s/ //g" | cut -d "r" -f 2
