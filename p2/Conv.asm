.data
matrix: .space 484
core: .space 484
space: .asciiz " "
enter: .asciiz "\n"

.macro getInt(%des)
	li $v0, 5
	syscall
	move %des $v0
.end_macro 

.macro getIndex(%ans, %row, %column, %rank)
	mult %row, %rank
	mflo %ans
	addu %ans, %ans, %column
	sll %ans, %ans, 2
.end_macro 

.macro printInt(%src)
	move $a0, %src
	li $v0, 1
	syscall
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

.macro end
	li $v0, 10
	syscall
.end_macro 

.text
getInt($s0)						#m1
getInt($s1)						#n1
getInt($s2)						#m2
getInt($s3)						#n2
li $t0, 0
in_i1:
	beq $t0, $s0, in_i_end1
	li $t1, 0
	in_j1:
		beq $t1, $s1, in_j_end1
		getInt($t2)
		getIndex($t3, $t0, $t1, $s1)
		sw $t2, matrix($t3)
		addi $t1, $t1, 1
		j in_j1
	in_j_end1:
		addi $t0, $t0, 1
		j in_i1
in_i_end1:
li $t0, 0
in_i2:
	beq $t0, $s2, in_i_end2
	li $t1, 0
	in_j2:
		beq $t1, $s3, in_j_end2
		getInt($t2)
		getIndex($t3, $t0, $t1, $s3)
		sw $t2, core($t3)
		addi $t1, $t1, 1
		j in_j2
	in_j_end2:
		addi $t0, $t0, 1
		j in_i2
in_i_end2:
li $s6, 0						#ans=0
subu $t0, $s0, $s2
move $s4, $t0						
addi $s4, $s4, 1					#m1-m2+1
subu $t0, $s1, $s3					
move $s5, $t0						
addi $s5, $s5, 1					#n1-n2+1
li $t0, 0						#i
cal_i:
	beq $t0, $s4, cal_i_end
	li $t1, 0					#j
	cal_j:
		beq $t1, $s5, cal_j_end
		li $t2, 0				#k
		cal_k:
			beq $t2, $s2, cal_k_end
			li $t3, 0			#l
			cal_l:
				beq $t3, $s3, cal_l_end
				add $t4, $t0, $t2		#i+k
				add $t5, $t1, $t3		#j+l
				getIndex($t4, $t4, $t5, $s1)
				lw $t4, matrix($t4)		#matrix[i+k][j+l]
				getIndex($t5, $t2, $t3, $s3)
				lw $t5, core($t5)		#core[k][l]
				mult $t4, $t5
				mflo $t6
				add $s6, $s6, $t6
				addi $t3, $t3, 1
				j cal_l
			cal_l_end:
				addi $t2, $t2, 1
				j cal_k
		cal_k_end:
			printInt($s6)
			printSpace
			li $s6, 0			#ans=0
			addi $t1, $t1, 1
			j cal_j
	cal_j_end:
		printEnter
		addi $t0, $t0, 1
		j cal_i
cal_i_end:
end
				
	






