.text
main:
	li $a0, 5
	jal fact
	move $a0, $v0
	li $v0, 1
	syscall
	li $v0, 10
	syscall
fact:
	bgt $a0, 1, fact_rec
	addi $v0, $zero, 1
	jr $ra
fact_rec:
	addi $sp, $sp, -8
	sw $ra, 0($sp)
	sw $a0, 4($sp)
	addi $a0, $a0, -1
	jal fact
	lw $ra, 0($sp)
	lw $t0, 4($sp)
	addi $sp, $sp, 8
	mul $v0, $v0, $t0
	jr $ra
