#!/usr/bin/env bash
echo --Build by h4ck3rB0y--
echo Chargement... [----]
sleep 1
echo Chargement... [X---]
sleep 1
echo Chargement... [XX--]
sleep 1
echo Chargement... [XXX-]
sleep 1
echo Chargement... [XXXX]
echo [FINI 100%]
sleep 1
cls
clear
figlet -f slant SAPOUDNet                                                                                                          
echo /By H4ck3rB0y/V1.0/
echo
N1='Enter The Number of your choice: '
options=("SAPOUDNet-IPv4" "SAPOUDNet-IPv7" "IP-Nmap" "BruteForce" "SETUP" "EXIT")
select opt in "${options[@]}"
do
    case $opt in       
        "SAPOUDNet-IPv4")
            clear 
            cd Botlayer4
            perl mainNet.c
            cd -
            ;;
        "SAPOUDNet-IPv7")
            clear 
            cd Botlayer7
            echo Enter The URL:
            read Link
            clear
            echo Enter The Nomber of Workers [IF YOU DONT NOT put 500 [MAX: 1000] ]:
            read worker
            clear
            echo Enter The Nomber of Connection [MAX: 10000]
            read con 
            clear
            echo Enter The Methods [get, post, random]
            read meth
            python3 mainNet.py $Link -w $worker -s $con $meth
            cd -
            ;;
        "IP-Nmap")
            clear 
            cd Tools
            bash vul.sh
            cd -
            ;;
        "BruteForcing")
            clear 
            echo Indisponible
            ;;
       "SETUP")
            clear
            apt-get install nmap
            apt-get install figlet
            apt-get install python3
            ;;
        "EXIT")
            break
            ;;
        *) echo "invalid option $REPLY";;
    esac
done
