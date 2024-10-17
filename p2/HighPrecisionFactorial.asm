.data 
num: .space 5000

.macro getInt(%i)
	li $v0, 5
	syscall
	move %i $v0
.end_macro 

.macro printInt(%i)
	move $a0, %i
	li $v0, 1
	syscall
.end_macro

.macro end
	li $v0, 10
	syscall
.end_macro

.text
li $s6, 1							#length=1
main:
getInt($s0)							#n
bne $s0, 0, if							#0!=1
li $t0, 1
printInt($t0)
end
if:
bgt $s0, 2, if_end						#if(n<=2) ans=n;
printInt($s0)
end
if_end:
li $t0, 0
li $t1, 1
sw $t1, num($t0)
j factorial
factorial_end:
subi $s6, $s6, 1
move $t0, $s6
for1:
	beq $t0, -1, for_end1
	sll $t1, $t0, 2
	lw $t1, num($t1) 
	printInt($t1)
	addi $t0, $t0, -1
	j for1
for_end1:
end

factorial:
	li $t0, 2
	addi $s1, $s0, 1
	for_i:
		beq $t0, $s1, for_i_end
		li $t1, 0					#cin
		li $t2, 0					#j
		for_j:
			beq $t2, $s6, for_j_end
			sll $t3, $t2, 2
			lw $t3, num($t3)			#num[j]
			mult $t3, $t0				#i*num[j]
			mflo $t3
			add $t3, $t3, $t1			#tmp
			li $t4, 10
			div $t3, $t4				#tmp/=10
			mfhi $t4				#tmp%10
			sll $t3, $t2, 2
			sw $t4, num($t3)
			mflo $t5				#tmp/10
			move $t1, $t5
			addi $t2, $t2, 1
			j for_j
		for_j_end:
		while:
			beqz $t1, while_end			#while(cin)
			li $t3, 10
			div $t1, $t3
			mfhi $t3
			sll $t4, $s6, 2
			sw $t3, num($t4)			#num[length++]=cin%10
			mflo $t1				#cin/=10
			addi $s6, $s6, 1			#length++
			j while
		while_end:
			addi $t0, $t0, 1
			j for_i
	for_i_end:
	j factorial_end	







