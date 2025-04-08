.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
 lui sp, %hi(_stack_pointer)       # 高20位（无PC相对）
  addi sp, sp, %lo(_stack_pointer)  # 低12位（无PC相对）
  jal _trm_init
