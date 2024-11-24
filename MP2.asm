; Unisan, Ryu Kisen P. - S18
; Valdellon, Derrick M. - S18
section .data
to_meters dd 1000.0
to_seconds dd 3600.0
section .text
bits 64
default rel
global computeAcceleration
computeAcceleration:
    movss xmm6, [to_meters]
    movss xmm7, [to_seconds] 
 
    subss xmm1, xmm0 ; final - init
 
    mulss xmm1, xmm6 ; res to meters (res * 1000)
 
    divss xmm1, xmm7 ; res to seconds (res / 3600)
 
    divss xmm1, xmm2 ; res divided by time (res / time)
 
    cvtss2si rax, xmm1 ; convert to int
       
    ret