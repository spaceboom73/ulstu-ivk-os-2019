#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//������������ ������ �3.3
//�������� ����� - ��������
//��������� ��������� ��.�����-22 �������� �.�.
pid_t getpid(void);//�������� �������� �������������� �������� ��������
pid_t getppid(void);//�������� �������� �������������� ������������� �������� ��� �������� ��������
int main()
{
    printf("������������ ������ �3.3\n");
    printf("�������� ����� - ��������\n");
    printf("��������� ��������� ��.�����-22 �������� �.�.\n");
    printf("�������: �������� ���������, ��������� �����-�������. �������� �� �����\
    ��� pid � ���������� � ������ ���� ���������, ��� ������������ ������ ������� ��� \
    ������ ������� ��������� ��������� ��������� (������� ps).\n");
    pid_t pid;//��� ������ pid_t �������� ��������� ��� ������ �� ������������� ����� ����� �
    pid = fork(); //����������� ��������� ���������� �������� ��������������� ��������

    if (pid > 0 )
    {
        printf("60 seconds for zombi");
        sleep(60);
    }
    else
    {
        exit(2);
    }
    return 0;
}
