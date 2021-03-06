/* Пример создания нового процесса с одинаковой работой процессов
ребенка и родителя */
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
///Алиуллин Азат. ИСТбд-21. Лабараторная работа 3.

int main()
{
    pid_t pid, ppid;
    int a = 0;
    /* При успешном создании нового процесса с этого места псевдопараллельно
    начинают работать два процесса: старый и новый */
    (void)fork();
    /* Узнаем идентификаторы текущего и родительского процесса (в каждом из
    процессов !!!) */
    pid = getpid();
    ppid = getppid();
    /* Перед выполнением следующего выражения значение переменной a в
    обоих процессах равно 0 */
    if (pid == 0)
    {
        printf("I am child and I'm gonna kill myself!\n");
        exit(1);
    }
    else printf("LUKE, I AM YOUR FATHER!");
    for (int i = 0; i<1000; i++)
    {
        a++;
    /* Печатаем значения PID, PPID и вычисленное значение переменной a (в
    каждом из процессов !!!) */
        printf("My pid = %d, my ppid = %d, result = %d\n", (int)pid, (int)ppid, a);
    }
    scanf("%i", &a);
    return 0;
}
