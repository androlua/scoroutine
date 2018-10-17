#ifndef _H_COROUTINE
#define _H_COROUTINE

#define CO_DEAD     (0) // Э������״̬
#define CO_READY    (1) // Э���Ѿ�����
#define CO_RUNNING  (2) // Э����������
#define CO_SUSPEND  (3) // Э����ͣ�ȴ�

// comng_t - Э�̹������
typedef struct comng * comng_t;

// co_f - Э�����к�����
// cg   : Э�̹������
// arg  : �û�����Э�̴������
typedef void (* co_f)(comng_t cg, void * arg);

//
// co_open - ����Э��ϵͳ, �����ش�����Э�̹������
// return  : ������Э�̹������
//
extern comng_t co_open(void);

//
// co_close - �ر��Ѿ�������Э��ϵͳ
// sco      : Э�̹������
// return   : void
//
extern void co_close(comng_t cg);

#endif//_H_COROUTINE
