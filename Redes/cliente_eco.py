import socket
import sys

# Crear socket TCP/IP
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Conecta el socket con el puerto p donde atiende el servidor
srv_p = 1234
srv_d = 'localhost'
server_address = (srv_d, srv_p)
print('connectando a {} puerto {}'.format(*server_address))
sock.connect(server_address)

try:

    # Envia datos
    message = b'Flor de mensaje. Segunda parte'
    print('enviando {!r}'.format(message))
    sock.sendall(message)

    # Bloquea para respuesta
    amount_received = 0
    amount_expected = len(message)

    while amount_received < amount_expected:
        data = sock.recv(16)
        amount_received += len(data)
        print('recibido {!r}'.format(data))

finally:
    print('cerrando conexion')
    sock.close()
