#include "process.h"

Process* init_process(
    int pid,
    char* name,
    int priority,
    int init_time,
    int burst,
    int wait,
    int waiting_delay,
    int aging
    ) {
        Process* p = malloc(sizeof(Process));
        p->pid = pid;
        p->name_process = name;
        p->priority = priority;
        p->init_time = init_time;
        p->burst = burst;
        p->wait = wait;
        p->waiting_delay = waiting_delay;
        p->aging = aging;
        p->cpu_turns = 0;
        p->interrupts = 0;
        p->state = "READY";
        return p;
    }