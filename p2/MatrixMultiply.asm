.data
matrix1: .space 256
matrix2: .space 256
space: .asciiz " "
enter: .asciiz "\n"

.macro getIndex(%dst, %row, %column, %rank)
	mult %row, %rank
	mflo %dst
	addu %dst, %dst, %column
	sll %dst, %dst, 2
.end_macro 

.macro getInt(%des)
	li $v0, 5
	syscall
	move %des, $v0
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

.macro printInt(%des)
	move $a0, %des
	li $v0, 1
	syscall
.end_macro 
.text 
	getInt($s0)					#jieshu n
	li $t0, 0					#i
	in_i1:
		beq $t0, $s0, in_i_end1
		li $t1, 0				#j
		in_j1:
			beq $t1, $s0, in_j_end1
			getInt($t2)
			getIndex($t3, $t0, $t1, $s0)
			sw $t2, matrix1($t3)		#matrix1[i][j]=t2;
			addi $t1, $t1, 1		#j++
		j in_j1
		in_j_end1:
		addi $t0, $t0, 1			#i++
		j in_i1
	in_i_end1:
	li $t0, 0
	in_i2:
		beq $t0, $s0, in_i_end2
		li $t1, 0				#j
		in_j2:
			beq $t1, $s0, in_j_end2
			getInt($t2)
			getIndex($t3, $t0, $t1, $s0)
			sw $t2, matrix2($t3)		#matrix2[i][j]=t2;
			addi $t1, $t1, 1		#j++
		j in_j2
		in_j_end2:
		addi $t0, $t0, 1			#i++
		j in_i2
	in_i_end2:
	li $t0, 0						#i
	cal_i:
		beq $t0, $s0, cal_i_end
		li $t1, 0					#j
		cal_j:
			beq $t1, $s0, cal_j_end
			li $t2, 0				#k
			li $s1, 0				#ans=0
			cal_k:
				beq $t2, $s0, cal_k_end
				getIndex($t3, $t0, $t2, $s0)
				lw $t3, matrix1($t3)		#matrix1[i][k]		
				getIndex($t4, $t2, $t1, $s0)
				lw $t4, matrix2($t4)		#matrix2[k][j]
				mult  $t3, $t4			#a[i][k]*b[k][j]
				mflo $t5
				add $s1, $s1, $t5		#ans+=a[i][k]*b[k][j]
				addi $t2, $t2, 1		#k++
				j cal_k
			cal_k_end:
				printInt($s1)
				printSpace
				addi $t1, $t1, 1
				j cal_j
		cal_j_end:
			printEnter
			addi $t0, $t0, 1
			j cal_i
	cal_i_end:
		li $v0, 10
		syscall
	





