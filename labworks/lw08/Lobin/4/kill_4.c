#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#define LAST_MESSAGE 255

int main()
{
std::cout << "Лабораторная работа №8 Лобина Михаила, ИСТбд-22" << std::endl;
int quid, len;
key_t key = ftok ("server_4.c", 0);
quid = msgget(key, 0);
struct mymsg {long int mtype; struct msgs {long int i;} nums;} msg;
msg.mtype = 1;
msg.nums.i = -255;
msgsnd(quid, &msg, sizeof(msg),0);
return 0; 
}
