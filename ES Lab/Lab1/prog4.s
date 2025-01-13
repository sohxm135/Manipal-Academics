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
	MOV R0, #1
	ADD R1, R0
	
	ADD R1, #2  ;3
	ADD R0, R1
	
	ADD R1, #2  ;5
	ADD R0, R1
	
	ADD R1, #2  ;7
	ADD R0, R1

	ADD R1, #2  ;9
	ADD R0, R1
	

	

	
STOP B STOP
	END
	