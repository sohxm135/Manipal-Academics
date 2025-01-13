	AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0x100100
	DCD Reset_Handler
	ALIGN
	AREA mycode, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler
Reset_Handler
    LDR R0, =SRC         
    LDR R1, =DST         
    MOV R2, #10         

Loop
    LDR R3, [R0], #4     
    STR R3, [R1], #4     
    SUBS R2, R2, #1       

STOP
	B STOP
	
SRC DCD 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA   
	AREA mydata, DATA, READWRITE
DST DCD 0,0,0,0,0,0,0,0,0,0    
	

    END
