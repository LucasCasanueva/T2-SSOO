#pragma once
#include "../process/process.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct Queue;
struct Node;

typedef struct Queue Queue;
typedef struct Node Node;

struct Node
{
    struct Process* value;
    Node* next;
};

struct Queue{
    int qid;
    // the type is:
    // type == 0: a FIFO LIST
    // type == 1: a SFJ LIST
    int type;
    int quantum;
    Node *head;
    Node *tail;
};


Queue* init_queue(int qid, int type, int p, int q);
bool enqueue(Queue *q, struct Process *new_process );
bool order_enqueue(Queue *q, struct Process *new_process );
void dequeue(Queue *q, struct Process *process);
void sjf_final_enqueue(Queue *q, struct Process *process);
