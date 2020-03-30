

all:minial-ws-server


minial-ws-server:
	#gcc minimal-ws-server.c protocol_lws_minimal.c  -I /opt/mybin/include/ -L /opt/mybin/lib/ -l websockets -lssl -lcrypto
	gcc minimal-ws-server.c protocol_lws_minimal.c proc_cmd.c  -I /opt/mybin/include/ -L /opt/mybin/lib/ -l websockets -lcap
