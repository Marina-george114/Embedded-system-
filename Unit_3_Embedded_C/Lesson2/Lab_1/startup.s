
.global reset 
reset:  @ any name 
  
  ldr sp, =stack_top
  bl main  
 stop: b stop



