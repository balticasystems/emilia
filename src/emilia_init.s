.section .text.init
.global _kstart

_kstart:
    csrr t0, mhartid        # get the mhartid
    bnez t0, park_hart      # if it is not 0 disable
    la sp, _stack_top       # initialize the stack stack
    call emilia_main        # jump into C part of the kernel

park_hart:
    wfi                     # wait until the next interrupt
    j park_hart  