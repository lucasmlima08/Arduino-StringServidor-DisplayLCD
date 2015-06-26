# Arduino com Display LCD e conexão ao banco de dados de um servidor
* Experimento usando Arduino: Um sistema que escreve no display LCD uma mensagem lida no banco de dados em um servidor
a partir de um script que fará a comunicação com a porta serial do arduino.

# Importante

* No "script.py" basta alterar o endereço do servidor de arquivos onde contém o script.php que fará a 
leitura do banco de dados e os parâmetros de saída.
* No "script.php" basta alterar as informações de conexão do servidor e os parâmetros de entrada.
* Ao conectar o arduino a entrada usb, basta executar o "script.py" que fará a comunicação com a porta serial.
* Como o script foi escrito em python, é necessário ter o python instalado e também a biblioteca "pyserial".

# Circuito

<img src="https://github.com/lucasmlima08/DisplayLCD_ServidorBD/blob/master/circuit.jpg" width="500" />

# Algumas Imagens

> String escrita a partir da leitura no banco de dados:

<img src="https://github.com/lucasmlima08/Arduino-StringServidor-DisplayLCD/blob/master/img_1.jpg" width="450" />

> Sistema em funcionamento:

<img src="https://github.com/lucasmlima08/Arduino-StringServidor-DisplayLCD/blob/master/img_2.jpg" width="450" />
