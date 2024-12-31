#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
   // printf("ev.event1=%d\n",ev.event);
   // printf("c->mcause = %d\n",c->mcause);
    switch (c->mcause) {
     
       case 17:
      ev.event=EVENT_YIELD;  //printf("ev.event2=%d\n",ev.event); 
      break;
      default: ev.event = EVENT_ERROR; //printf("ev.event3=%d\n",ev.event);  printf("c->gpr[17] (a7) = %ld\n", c->gpr[17]);
      break;
    }

    c = user_handler(ev, c);
      //printf("ev.event4=%d",ev.event);
    assert(c != NULL);
  }
  

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
    Context *cp = (Context *)(kstack.end - sizeof(Context));//ddddddddddddddddddd
  cp->mepc = (uintptr_t)entry - 4;//-4是为了方便后面统一加4dddddddddddddddddddd
   cp->gpr[10] = (uintptr_t)(arg);// a0传参ddddddddddddddddddddddd
  return cp;
  //return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
