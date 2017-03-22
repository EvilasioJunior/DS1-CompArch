.data
s0: .asciiz "Zero "
s1: .asciiz "Um "
s2: .asciiz "Dois "
s3: .asciiz "Tres "
s4: .asciiz "Quatro "
s5: .asciiz "Cinco "
s6: .asciiz "Seis "
s7: .asciiz "Sete "
s8: .asciiz "Oito "
s9: .asciiz "Nove "
msg: .asciiz "Entrada Invalida"
.text
main:
	li $a0, 1234449
	li $s1, 0
	bge $a0, 0, M
		la $a0, msg
		li $v0, 4
		syscall
		j exit
	M:
		loop:
			beq $a0, $zero, done
				rem $t0, $a0, 10
				div $a0, $a0, 10
				addi $sp, $sp, -4
				sw $t0, ($sp)
				addi $s1, $s1, 1
				j loop
		done:
		loop2:
			lw $t1, ($sp)
			addi $sp, $sp, 4
			beq $s1, $zero, exit
			addi $s1, $s1, -1
			bne $t1, $zero, L0
				la $a0, s0
				li $v0, 4
				syscall
				j loop2
			L0:
			bne $t1, 1, L1
				la $a0, s1
				li $v0, 4
				syscall
				j loop2
			L1:
			bne $t1, 2, L2
				la $a0, s2
				li $v0, 4
				syscall
				j loop2
			L2:
			bne $t1, 3, L3
				la $a0, s3
				li $v0, 4
				syscall
				j loop2
			L3:
			bne $t1, 4, L4
				la $a0, s4
				li $v0, 4
				syscall
				j loop2
			L4:
			bne $t1, 5, L5
				la $a0, s5
				li $v0, 4
				syscall
				j loop2
			L5:
			bne $t1, 6, L6
				la $a0, s6
				li $v0, 4
				syscall
				j loop2
			L6:			
			bne $t1, 7, L7
				la $a0, s7
				li $v0, 4
				syscall
				j loop2
			L7:			
			bne $t1, 8, L8
				la $a0, s8
				li $v0, 4
				syscall
				j loop2
			L8:			
			la $a0, s9
			li $v0, 4
			syscall
			j loop2
	exit: