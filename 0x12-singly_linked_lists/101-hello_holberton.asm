	global	main
	extern	printf
section		.text

main:
	mov		eax, 0
	mov		edi, mssg
	call		printf

section		.data
	mssg db	'Hello, Holberton', 0xa, 0
