; SLIME 2015-08-24
CL-USER> '(Hello Goodnight Liz)'
; Evaluation aborted on #<END-OF-FILE {1004FEDF13}>.
CL-USER> '(Hello Goodnight Liz)
(HELLO GOODNIGHT LIZ)
CL-USER> (car '(Hello Goodnight Liz))
HELLO
CL-USER> (cdr '(Hello Goodnight Liz))
(GOODNIGHT LIZ)
CL-USER> (car '(Hello Goodnight Liz now))
HELLO
CL-USER> (cdr '(Hello Goodnight Liz))
(GOODNIGHT LIZ)
CL-USER> (cdr '(Hello Goodnight Liz now))
(GOODNIGHT LIZ NOW)
CL-USER> j
; Evaluation aborted on #<UNBOUND-VARIABLE J {1006057B93}>.
CL-USER> 'j
J
CL-USER> (atom 'Atomsarecool)
T
CL-USER> (atom '(Hello Goodnight Liz))
NIL
CL-USER> 
