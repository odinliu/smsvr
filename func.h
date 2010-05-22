#ifndef FUNC_H
#define FUNC_H
#define LISTENQ 1024
//functions
int open_client(const char *hostname, int port);
int open_listenfd(int port);
#endif
