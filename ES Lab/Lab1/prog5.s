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
	MOV R0,#1
	mov R1,#2
	mov R2,#3
	MOV R3, R0
	MOV R0, R1
	MOV R1, R2
	MOV R2,R3
	
	
STOP B STOP
	END
	