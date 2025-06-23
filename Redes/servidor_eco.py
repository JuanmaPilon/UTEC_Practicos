import socket
import sys

# Datos basicos
# Largo maximo que maneja por mensaje, si es mas extenso lo fracciona en varios de esta dimension
MSG_LEN = 16

# Crear socket TCP/IP
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Asociar el socket con el puerto p
p = 1234
server_address = ('localhost', p)
print('starting up on {} port {}'.format(*server_address))
sock.bind(server_address)

# Aguardar / escuchar por conexiones
sock.listen(1)

while True:
    # Espera por alguna conexion
    print('Esperando que alguien se conecte ...')
    connection, client_address = sock.accept()
    try:
        print('conexion desde: ', client_address)

        # Recibe datos en paquetes de MSG_LEN Bytes y los retransmite
        while True:
            data = connection.recv(MSG_LEN)
            print('recibido {!r}'.format(data))
            if data:
                print('enviando los datos de regreso al cliente')
                connection.sendall(data)
            else:
                print('no hay datos desde', client_address)
                break

    finally:
        # Cerrar la conexion
        connection.close()
