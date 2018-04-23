#pragma once
#include<stdio.h>
#include<stddef.h>

#define HEADER printf("\n=============%s==============\n",__FUNCTION__)
#define MAXSIZE 1000
typedef char seqqueuetype;
typedef struct seqqueue{
    seqqueuetype data[MAXSIZE];
    size_t head;
    size_t tail;
    size_t size;

}seqqueue;
void seqqueue_init(seqqueue *seq);
void seqqueue_print(seqqueue *seq);
void seqqueue_destory(seqqueue *seq);
void seqqueue_push(seqqueue *seq,seqqueuetype value);
void seqqueue_pop(seqqueue *seq);
int seqqueue_gettop(seqqueue *seq,seqqueuetype *value);
