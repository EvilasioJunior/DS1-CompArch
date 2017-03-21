.data
str: .asciiz "the answer is: "
.text
main:
	li $v0, 5
	syscall
	move $a0, $v0
	jal fib
	move $t0, $v0
	la $a0, str
	li $v0, 4
	syscall
	move $a0, $t0
	li $v0, 1
	syscall
	li $v0, 10
	syscall
fib: 
	bgt $a0, 1, fib_rec
	move $v0, $a0
	jr $ra
fib_rec:
	addi $sp, $sp, -12
	sw $ra, ($sp)
	sw $a0, 4($sp)
	addi $a0, $a0, -1
	jal fib
	lw $a0, 4($sp)
	sw $v0, 8($sp)
	addi $a0, $a0, -2	
	jal fib
	lw $t0, 8($sp)
	add $v0, $v0, $t0
	lw $ra, ($sp)
	addi $sp, $sp, 12
	jr $ra
		