#include <stdio.h>

typedef struct NO{ int elem;
                    struct NO *prox;
}NODO;
typedef NODO *ponteiro;

int main(){
    NODO a,b,c,d,e,t;
    ponteiro q,r,s;
    int n;

    a.elem = 1;
    b.elem = 2;
    c.elem = 3;
    d.elem = 4;
    e.elem = 5;
    t.elem = 6;


    a.prox = &b;
    b.prox = &c;
    c.prox = &d;
    d.prox = NULL; // r->prox = NULL;
    q = &b;
    r = &d;
    s = &e;
    s->prox = NULL;
    printf("%d->%d->%d", q->elem, q->prox->elem, q->prox->prox->elem);
    printf("s->%d\n", s->elem);

}