#! /bin/bash

#----------------------------------------------------------
# linux三剑客awk、grep、sed
#----------------------------------------------------------

#----------------------------------------------------------
# awk
# 格式： awk '{pattern + action}' {filenames}
#----------------------------------------------------------

#-------------------------分隔符----------------------------
# 单分隔符
# cat sample.txt  ----->  111*222|333@444#555
# awk -F '|' '{print $1}' 1sample.txt  ----->  111*222

# 多个分隔符
# cat sample.txt  ----->  111*222|333@444#555
# awk -F '[*|@#]' '{print $2}' sample.txt  ----->  222
# awk -F '[*|@#]' '{print $4}' sample.txt  ----->  444

# 在[]后边加个+, 使连续的分隔符变成一个分隔符
# cat sample.txt  ----->  111****222||||333@@@@444####555
# awk -F '[*|@#]+' '{print $2}' sample.txt  ----->  222
# awk -F '[*|@#]+' '{print $4}' sample.txt  ----->  444


#-------------------------if语句----------------------------
# cat sample.txt  ------>  姓名      年龄
#						   huang	18
#						   jiang	88
#						   zhu		66
#						   gou		38
# awk -F '[ ]+' '{if(NR!=1) { if($2<=30) {print $1, $2, "年轻人"} else if($2<=50) {print $1, $2, "中年人"} else {print $1, $2, "老年人"}}}' sample.txt


#-----------------------awk内置变量--------------------------
#ARGC               命令行参数个数
#ARGV               命令行参数排列
#ENVIRON            支持队列中系统环境变量的使用
#FILENAME           awk浏览的文件名
#FNR                浏览文件的记录数
#FS                 设置输入域分隔符，等价于命令行 -F选项
#NF                 浏览记录的域的个数
#NR                 已读的记录数
#OFS                输出域分隔符
#ORS                输出记录分隔符
#RS                 控制记录分隔符
#$0变量是指整条记录。$1表示当前行的第一个域,$2表示当前行的第二个域,......以此类推。
#$NF是number finally,表示最后一列的信息，跟变量NF是有区别的，变量NF统计的是每行列的总数

#-------------------awk的BEGIN和END模块--------------------------
# BEGIN模块在开始处理输入文件之前执行
# END模块在处理完文件的所有行之后执行

# 统计某个目录下文件的所有字节数
# ll | awk -F ' ' 'begin {size=0;} {size=size+$5;} end{print "size is ", size}'

#写一个bash脚本统计一个文本文件中每个单词出现的频率
awk '/aa/' sample.txt
