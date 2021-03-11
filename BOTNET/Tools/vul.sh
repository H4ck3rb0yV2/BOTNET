#!/usr/bin/env bash
clear
figlet -f slant XVuln                                                                                                          
echo /By H4ck3rB0y/V1.0/
echo
N1='Enter The Number of your choice: '
options=("PING IP" "IMPORT LISTE IP LOOKUP" "CHECK OPEN TCP PORT" "CHECK OPEN UDP PORT" "CHECK OPEN SYN PORT" "HARD SCAN" "TRY DETECT OS" "IP LOOKUP" "EXIT")
select opt in "${options[@]}"
do
    case $opt in       
        "PING IP")
            clear 
            echo PING IP FOR STOP: CTRL+C
            echo IP:
            read IP 
            ping $IP
            ;;
        "IMPORT LISTE IP LOOKUP")
            clear 
            echo IMPORT LISTE IP LOOKUP *THE IP TXT NEED TO BE IN THE SAME FOLDER
            echo Enter Text fi1e
            read TEXT
            nmap -iL $TEXT
            ;;
        "CHECK OPEN TCP PORT")
            clear
            echo CHECK TCP OPEN PORT
            echo IP:
            read IP
            echo "Port ( -p- = for all port or StartPort-FinPort)"
            read port
            nmap -sT -p $port $IP
            ;;
        "CHECK OPEN UDP PORT")
            clear
            echo CHECK UDP OPEN PORT
            echo IP:
            read IP
            echo "Port ( - = for all port or StartPort-FinPort)"
            read port
            nmap -sU -p $port $IP
            ;;
        "CHECK OPEN SYN PORT")
            clear
            echo CHECK SYN OPEN PORT
            echo IP:
            read IP
            echo "Port ( -p- = for all port or StartPort-FinPort)"
            read port
            nmap -sS -p $port $IP
            ;;
        "HARD SCAN")
            clear
            echo HARD SCAN
            echo IP:
            read IP
            nmap -A $IP
            ;;
        "TRY DETECT OS")
            clear
            echo TRY DETECT OS
            echo IP:
            read IP
            nmap -o -v $IP
            ;;
        "EXIT")
            break
            ;;
        *) echo "invalid option $REPLY";;
    esac
done
