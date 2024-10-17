.data 
matrix: .space 196
book: .space 196

.macro getInt(%des)
	li $v0, 5
	syscall
	move %des, $v0
.end_macro

.macro printInt(%des)
	move $a0, %des
	li $v0, 1
	syscall
.end_macro 

.macro push(%i)
	sw %i, 0($sp)
	subi $sp, $sp, 4
.end_macro 

.macro pop(%i)
	addi $sp, $sp, 4
	lw %i, 0($sp)
.end_macro 

.macro getIndex(%ans, %row, %column, %rank)
	mult %row, %rank
	mflo %ans
	addu %ans, %ans, %column
	sll %ans, %ans, 2
.end_macro 
.macro end
	li $v0, 10
	syscall
.end_macro


.text
main:
getInt($s0)							#n
getInt($s1)							#m
li $t0, 0
in_i:
	beq $t0, $s0, in_i_end
	li $t1, 0
	in_j:
		beq $t1, $s1, in_j_end
		getIndex($t2, $t0, $t1, $s1)
		getInt($t3)
		sw $t3, matrix($t2)
		addi $t1, $t1, 1
		j in_j
	in_j_end:
		addi $t0, $t0, 1
		j in_i
in_i_end:
getInt($s2)							#start_x
getInt($s3)							#start_y
getInt($s4)							#end_x
getInt($s5)							#end_y
li $s6, 0							#ans
subi $s2, $s2, 1
subi $s3, $s3, 1
subi $s4, $s4, 1
subi $s5, $s5, 1
move $a0, $s2
move $a1, $s3
jal dfs
printInt($s6)
end

dfs:
	push($ra)
	push($t0)
	push($t1)
	push($t2)
	push($t3)
	move $t0, $a0						#x
	move $t1, $a1						#y
	bne $t0, $s4, if_end1
	bne $t1, $s5, if_end1
	addi $s6, $s6, 1
	j return
	if_end1:
		slt $t2, $t0, $s0				#x<n
		slt $t3, $t1, $s1				#y<m
		and $t2, $t2, $t3			
		beq $t2, 1, if_end2				#if(x<n && y<m) branch to next step
		j return
	if_end2:
		getIndex($t2, $t0, $t1, $s1)
		lw $t2, matrix($t2)
		bne $t2, 1, if_end3
		j return
	if_end3:
		getIndex($t2, $t0, $t1, $s1)
		lw $t2, book($t2)
		bne $t2, 1, if_end4
		j return
	if_end4:
		getIndex($t2, $t0, $t1, $s1)
		li $t3, 1
		sw $t3, book($t2)
		move $a0, $t0
		addi $t2, $t1, 1
		move $a1, $t2
		jal dfs						#dfs(x,y+1)
		addi $t2, $t0, 1
		move $a0, $t2
		move $a1, $t1
		jal dfs						#dfs(x+1,y)
		blez $t1, if_end5
		move $a0, $t0
		subi $t2, $t1, 1
		move $a1, $t2
		jal dfs						#dfs(x,y-1)
		if_end5:
			blez $t0, if_end6
			subi $t2, $t0, 1
			move $a0, $t2
			move $a1, $t1
			jal dfs					#dfs(x-1,y)
		if_end6:
		getIndex($t2, $t0, $t1, $s1)
		li $t3, 0
		sw $t3, book($t2)
		j return
	return:
		pop($t3)
		pop($t2)
		pop($t1)
		pop($t0)
		pop($ra)
		jr $ra
		
		
	
		









