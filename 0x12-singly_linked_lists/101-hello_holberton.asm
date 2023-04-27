section .data
hello:		db "Hello, Holberton",10,0
format:		db "%s",0

section		.text
	extern	printf
	global	main

main:
	mov edi, msg
	mov eax, 0
	call printf
