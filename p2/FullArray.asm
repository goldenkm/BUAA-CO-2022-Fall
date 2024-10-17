.data 
symbol: .space 28
array: .space 28
space: .asciiz " "
enter: .asciiz "\n"

.macro getInt(%des)
	li $v0, 5
	syscall
	move %des, $v0
.end_macro 

.macro printInt(%src)
	move $a0, %src
	li $v0, 1
	syscall
.end_macro 

.macro end
	li $v0, 10
	syscall
.end_macro 

.macro push(%des)
	sw %des, 0($sp)
	subi $sp, $sp, 4
.end_macro 

.macro pop(%des)
	addi $sp, $sp, 4
	lw %des, 0($sp)
.end_macro 

.macro printSpace
	la $a0, space
	li $v0, 4
	syscall
.end_macro

.macro printEnter
	la $a0, enter
	li $v0, 4
	syscall
.end_macro

.text
main:
getInt($s0)							#n
li $a0, 0
jal full_array
end


full_array:
	push($ra)
	push($t0)
	push($t1)
	push($t2)
	push($t3)
	push($t4)
	move $t0, $a0						#index
	slt $t1, $t0, $s0					#index<n?
	bne $t1, 0, if_end					#if(index<n) branch to if_end
	li $t1, 0						#index>n
	for1:
		beq $t1, $s0, for_end1
		sll $t2, $t1, 2
		lw $t2, array($t2)
		printInt($t2)
		printSpace
		addi $t1, $t1, 1
		j for1
	for_end1:
		printEnter
		pop($t4)
		pop($t3)
		pop($t2)
		pop($t1)
		pop($t0)
		pop($ra)
		jr $ra
	if_end:
	li $t1, 0
	for2:
		beq $t1, $s0, for_end2
		sll $t2, $t1, 2
		lw $t2, symbol($t2)
		bne $t2, 0, if_end2				#if(symbol[i]!=0) branch to if_end2
		addi $t4, $t1, 1				#i+1
		sll $t3, $t0, 2					#index
		sw $t4, array($t3)				#array[index]=i+1
		li $t4, 1
		sll $t2, $t1, 2
		sw $t4, symbol($t2)				#symbol[i]=1
		addi $t4, $t0, 1				#index+1
		move $a0, $t4
		jal full_array
		li $t4, 0
		sll $t2, $t1, 2
		sw $t4, symbol($t2)				#symbol[i]=0
		if_end2:
			addi $t1, $t1, 1
			j for2
	for_end2:
	pop($t4)
	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
	jr $ra







