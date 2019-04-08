
# 计算社会科学01 Python起步

## print()函数


```python
print("我的名字是...")
```

    我的名字是...
    


```python
print(abs(-4))
```

    4
    


```python
myString = "我的名字是小明"
print(myString)
```

    我的名字是小明
    


```python
myScore = 85.5
print(myScore)
print(myScore+5)#float类型可以运算
```

    85.5
    90.5
    

 **格式化打印**


```python
myName = "小明"
myAge = 18
myScore = 80.5
print("我的成绩是%f" %myScore)#float
print("%s今年%d岁" %(myName,myAge))#string,dec
```

    我的成绩是80.500000
    小明今年18岁
    

**文件**


```python
logFile = open("me.txt","w")
logFile.write("我很聪明")
logFile.close()
```


```python
with open("me.txt","w")as f:
    f.write("我爱Python！")
    print("文件保存成功！")
```

    文件保存成功！
    

## input()函数


```python
myName = input("请输入姓名：")
print("你的姓名：",myName)
```

    请输入姓名：小明
    你的姓名： 小明
    


```python
myAge = int(input("请输入年龄："))
print("你的年龄是%d" % myAge)
myScore = float(input("请输入成绩："))
print("你的成绩是%f" % myScore)
```

    请输入年龄：18
    你的年龄是18
    请输入成绩：90.666
    你的成绩是90.666000
    

## round()函数


```python
print(round(1.499),
round(1.5),
round(1.9),)
```

    1 2 2
    

对于正数，round()函数将取到这个数最接近的整数，将小数部分为.5的数取到最接近的整数


```python
print(round(-1.499),
round(-1.5),
round(-1.9))
```

    -1 -2 -2
    

对于负数x，round(-x)=-round(x)


```python
round(0)
```




    0



对于0，round(0)=0

## 变量命名


```python
import keyword
print(keyword.kwlist)
```

    ['False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
    

变量命名规则：
* 由**字母**或**下划线**开始
* 可以包含**数字**，**字母**，**下划线**
* 区分**大小写**
* 不能使用**关键字**

变量的基本数字类型：
* int    有符号的整数
* long    长整数
* bool    布尔值
* float   浮点值
* complex  复数

Python是动态类型语言，不需要声明变量类型

## 课后作业

**花式打印**
打印一个字符画


```python
list=[
" ____  _  _  ____  _   _  _____  _  _ ",
"(  _ \\( \\/ )(_  _)( )_( )(  _  )( \\( )",
" )___/ \\  /   )(   ) _ (  )(_)(  )  ( ",
"(__)   (__)  (__) (_) (_)(_____)(_)\\_)"
]
for i in list:
    print(i)
```

     ____  _  _  ____  _   _  _____  _  _ 
    (  _ \( \/ )(_  _)( )_( )(  _  )( \( )
     )___/ \  /   )(   ) _ (  )(_)(  )  ( 
    (__)   (__)  (__) (_) (_)(_____)(_)\_)
    

**成绩求和**
输入三门成绩，求它们的和


```python
yuwen=float(input("请输入语文成绩："))
shuxue=float(input("请输入数学成绩："))
yingyu=float(input("请输入英语成绩："))
total=yuwen+shuxue+yingyu
print("总成绩是：",total)
```

    请输入语文成绩：121
    请输入数学成绩：147
    请输入英语成绩：141
    总成绩是： 409.0
    

**文件写入** 一个写入文件的程序


```python
name=input("请输入你的名字：")
age=input("请输入你的年龄：")
with open("info.txt","w")as f:
	f.write("%s%s岁，我爱Python！"%(name,age))
	print("%s，你的文件保存成功！"%name)
```

    请输入你的名字：Tom
    请输入你的年龄：18
    Tom，你的文件保存成功！
    

## 运算符


```python
print(2+2*3+5%2)
print(8/5+ 8//5)
print(8.0/5)
print(8.0//5)
print(-2 * 3 + 21 // 4 ** 2)#(= -6 + 21//16 = -6 + 1 = -5)
```

    9
    2.6
    1.6
    1.0
    -5
    

* 比较运算符
* 逻辑运算符
    + and
    + but
    + now

## 作业


```python
#第一个作业，简单计算器
while True:
	a=input("请输入非零数字a=")
	b=input("请输入非零数字b=")
	try:
		a=float(a)
		b=float(b)
		if a==0 or b==0:
			print("请输入[非零]数字")
		else:
			s=[a,b]
			break
	except:
		print("请输入[数字]")
print("a+b=",s[0]+s[1])
print("a-b=",s[0]-s[1])
print("a*b=",s[0]*s[1])
print("a/b=",s[0]/s[1])
```

    请输入非零数字a=13
    请输入非零数字b=six
    请输入[数字]
    请输入非零数字a=13
    请输入非零数字b=6
    a+b= 19.0
    a-b= 7.0
    a*b= 78.0
    a/b= 2.1666666666666665
    


```python
#第二个作业，计算圆的周长和面积
import math
while True:
    r=input("请输入圆的半径r=")
    try:
        r=float(r)
        break
    except:
        print("请输入【数字】")
print("圆的面积等于",math.pi*r*r)
print("圆的周长等于",2*math.pi*r)
```

    请输入圆的半径r=5
    圆的面积等于 78.53981633974483
    圆的周长等于 31.41592653589793
    


```python
#第三个作业，英里和公里转换
while True:
    mile=input("请输入英里数=")
    try:
        mile=float(mile)
        break
    except:
        print("请输入【数字】")
print("%f (km)= %f (mile)" % (0.621*mile,mile))
```

    请输入英里数=1
    0.621000 (km)= 1.000000 (mile)
    
