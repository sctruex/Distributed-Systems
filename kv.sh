rpcgen kv.x
cc -c kv_xdr.c
cc -c kv_svc.c
cc -c kv_clnt.c
cc -c kv_proc.c
cc -c rkv.c
cc -o server kv_xdr.o kv_svc.o kv_proc.o -lnsl
cc -o client kv_xdr.o kv_clnt.o rkv.o -lnsl 