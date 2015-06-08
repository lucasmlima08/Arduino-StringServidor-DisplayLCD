"""
*
* SERIAL :: Copyright (c) 2001-2011 Chris Liechti <cliechti@gmx.net>;
*
"""

import serial
import time
import urllib.request

porta = "COM5"
velocidade = 9600

def main():
    
    url = "http://servidor/script.php" # link do script no servidor.
    data = {"tabela": "tabela", "id": 2} # entrada dos parâmetros do script.
    data = urllib.parse.urlencode(data) # comando padrão
    request = urllib.request.Request(url + '?' + data) # comando padrão
    response = urllib.request.urlopen(request) # comando padrão
    leituraBanco = response.read() # faz a leitura da string da página.

    ser = serial.Serial(porta, velocidade) # abre a porta serial do arduino.
    time.sleep(3) # espera 3 segundos
    
    ser.write(leituraBanco) # escreve a string na serial.
    ser.flush() # apaga o buffer da serial.
    ser.close() # fecha a serial.

main()


