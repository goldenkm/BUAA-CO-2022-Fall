.data
array: .space 80				#array[20]

.macro getInt(%des)
	li $v0, 5
	syscall
	move %des, $v0
.end_macro 

.macro getChar(%des)
	li $v0, 12
	syscall
	move %des, $v0
.end_macro 

.macro printOne
	li $a0, 1
	li $v0, 1
	syscall
.end_macro 

.macro printZero
	li $a0, 0
	li $v0, 1
	syscall
.end_macro 

.macro push(%src)
	sb %src, 0($sp)
	subi $sp, $sp, 1				#char 1byte? maybe wrong
.end_macro 

.macro pop(%des)
	addi $sp, $sp, 1
	lb %des, 0($sp)
.end_macro 

.macro end
	li $v0, 10
	syscall
.end_macro 

.text
getInt($s0)						#n		
li $t0, 0						#i
in:
	beq $t0, $s0, in_end
	getChar($t1)
	sb $t1, array($t0)				#array[length]=t1
	push($t1)
	addi $t0, $t0, 1				#i++
	j in
in_end:
li $t0, 0						#i
judge:
	beq $t0, $s0, judge_end				
	lb $t1, array($t0)
	addi $s1, $s1, 1
	pop($t2)
	bne $t1, $t2, not_equal
	addi $t0, $t0, 1
	j judge
	not_equal:
		printZero
		end
judge_end:
	printOne
	end
	







