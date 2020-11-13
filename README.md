# League-of-Legends-S11-preseason-jungle-sword-bug
##LOL  S11 Season The jungle knife BUG hit 2147483648 damage, which seriously affected the game balance and player experience, analyze the reasons and solutions
---

##This BUG is divided into the following steps: 

1.The code for the disappearance of the equipment and the code for the sale of the equipment;

2. The conversion of the underlying code is different. This error is the knowledge of automatic type conversion at compile time. It is a mistake made by code beginners or freshmen;

3.As we all know, 

  | int   | -2147483648 |
  | --- | --- |
  | BIN | 1000 0000 0000 0000 0000 0000 0000 0000 |
  | HEX | 8000 0000 |
  
but we cannot define an int to represent -2147483648;
the compiler sees When this number is reached, it will be judged that it cannot be installed, so a uint is defined, that is, unsigned int; 
then the previous symbol is equivalent to the inversion, and the mistake is in the process of inversion.

4.The compiler will only give you a WARNING in this case.

---

##solution:

1. Change the selling price of jungle knives to 0, and merge the process of selling them into the disappearing code.

2.For the limit value of int, we can perform #define INT_MIN (-2147483647-1) in advance.

---
The following is the Chinese language

---
---

##这个BUG分为以下几个步骤：

1.装备消失的代码和装备出售的代码

2.底层代码的转换不同整形，这个错误是编译时自动类型转换的知识，属于代码初学者或者大一新生会犯的错误

3.总所周知，

  | int   | -2147483648 |
    | --- | --- |
  | 二进制 | 1000 0000 0000 0000 0000 0000 0000 0000 |
  | 十六进制 | 8000 0000 |
  
  
  但是我们不可能定义一个int去表示-2147483648；
  编译器看到这个数的时候会判断装不下，所以定义了一个uint，即unsigned int；
  然后前面的符号就相当于取反，错就错在取反的过程。
  
4.编译器在这种情况下只会给你一个WARNING。

---
##解决方案：

1.将打野刀的出售价改为0，同时出售的过程归并到消失的代码中。

2.对于int的极限值，我们可以提前进行#define INT_MIN  (-2147483647 - 1)。

---

#以上是天朝语言

---
