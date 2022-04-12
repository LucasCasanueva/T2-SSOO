#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Process;
typedef struct Process Process;

struct Process
{
    int pid;
    char* name_process;
    int priority;
    int init_time;
    int cpu_init_time;
    int io_init_time;
    int burst;
    int wait;
    int waiting_delay;
    int aging;
    char* state;
    int response_time;
    int interrupts;
    int waiting_time;
    int turnaround_time;
    int cpu_turns;
    int t_first;
    int t_out;
};

Process* init_process(
    int pid,
    char* name,
    int priority,
    int init_time,
    int burst,
    int wait,
    int waiting_delay,
    int aging
    );